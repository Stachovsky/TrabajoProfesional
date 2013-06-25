#include "DatabaseManager.h"

DatabaseManager::DatabaseManager(QObject *parent){
    this->dataBaseName = "";
}

DatabaseManager::~DatabaseManager(){
//    this->db.close();
    this->closeDB();
}

bool DatabaseManager::openDB(){

    if(this->dataBaseName == "")
        return false;

    // Find QSLite driver

    this->db = QSqlDatabase::addDatabase("QSQLITE");

    this->db.setDatabaseName(this->dataBaseName);
    bool r = this->db.open();

    if(r == true){
        this->db.exec("PRAGMA synchronous = OFF");
    }

    return r;
}

QSqlError DatabaseManager::getLastError(){
    // If opening database has failed user can ask
    // error description by QSqlError::text()
    return db.lastError();
}

void DatabaseManager::closeDB(){
    // Close database
    this->db.close();

//    // NOTE: We have to store database file into user home folder in Linux
//    QString path(QDir::home().path());
//    path.append(QDir::separator()).append("my.db.sqlite");
//    path = QDir::toNativeSeparators(path);
//    return QFile::remove(path);
//    #else

//    // Remove created database binary file
//    return QFile::remove("my.db.sqlite");
//    #endif

}

bool DatabaseManager::queryDB(QString query){

   bool r = false;

   QSqlQuery queryResult = this->db.exec(query);

   QSqlRecord queryRec = queryResult.record();

   if(this->getLastError().type() == QSqlError::NoError){
       this->lastResult.clear();

       if(queryRec.count()){
           this->cleanLastResult();

           // Se carga el header
           QVector<QString> rowHeader;
           for(int i= 0; i < queryRec.count(); i++){
                rowHeader.push_back(queryRec.fieldName(i));
           }
           this->lastResult.push_back(rowHeader);

           while(queryResult.next()){
               // Se cargan los resultados
               QVector<QString> row;
               for(int i= 0; i < queryRec.count(); i++){
                    row.push_back(queryResult.value(i).toString());
               }
               this->lastResult.push_back(row);
           }
       }

       r = true;

    }else{
        qDebug() << "QueryResult: " << this->getLastError().type();
    }

    return r;
}

void DatabaseManager::cleanLastResult(){
    for(int i=0; i < this->lastResult.size(); i++){
        this->lastResult[i].clear();
    }
}

QVector< QVector<QString> > DatabaseManager::getLastResult(){
    return this->lastResult;
}

void DatabaseManager::showLastResults(){
    for(int i=0; i < this->lastResult.size(); i++){
        QString row = "|";
        for(int j=0; j < lastResult[i].size(); j++){
            row += lastResult[i][j] + "\t|";
        }
        qDebug() << row;
    }
}

bool DatabaseManager::checkDataBase(){

    this->queryDB("SELECT * FROM main.sqlite_master WHERE type='table'");

    if( (this->getLastResult().size() - 2) != CANTIDAD_TABLAS){

        if(!this->queryDB(SCRIPT_CREATE_TABLE_Experimentos)){
            qDebug() << this->getLastError().text();
            return false;
        }

        if(!this->queryDB(SCRIPT_CREATE_TABLE_Resultados)){
            qDebug() << this->getLastError().text();
            return false;
        }

        if(!this->queryDB(SCRIPT_CREATE_TABLE_Usuarios)){
            qDebug() << this->getLastError().text();
            return false;
        }

        if(!this->queryDB(SCRIPT_CREATE_TABLE_Perfiles)){
            qDebug() << this->getLastError().text();
            return false;
        }

        // Se cargan los perfiles
        this->queryDB("INSERT INTO Perfiles (idPerfil, Descripcion) VALUES (0,'Root')");
        this->queryDB("INSERT INTO Perfiles (idPerfil, Descripcion) VALUES (1,'Administrador')");
        this->queryDB("INSERT INTO Perfiles (idPerfil, Descripcion) VALUES (2,'Usuario')");

        Crypto3Des cripto;
        string pass;
        string user;
        string name;

        pass = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "root");
        user = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "root");
        name = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "root");
        if(!this->queryDB("INSERT INTO Usuarios (Usuario, Nombre, idPerfil, Password) VALUES ('" + QString::fromStdString(user) + "','" + QString::fromStdString(name) + "'," + QString::number(PERFIL_ROOT) + ",'" + QString::fromStdString(pass) +"')")){
            qDebug() << this->getLastError().text();
        }

        pass = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "admin");
        user = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "admin");
        name = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "admin");
        if(!this->queryDB("INSERT INTO Usuarios (Usuario, Nombre, idPerfil, Password) VALUES ('" + QString::fromStdString(user) + "','" + QString::fromStdString(name) + "'," + QString::number(PERFIL_ADMIN) + ",'" + QString::fromStdString(pass) +"')")){
            qDebug() << this->getLastError().text();
        }

        pass = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "user");
        user = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "user");
        name = cripto.encriptar(KEY_PASSWORD_USUARIO, IV_PASSWORD_USUARIO, "user");
        if(!this->queryDB("INSERT INTO Usuarios (Usuario, Nombre, idPerfil, Password) VALUES ('" + QString::fromStdString(user) + "','" + QString::fromStdString(name) + "'," + QString::number(PERFIL_USER) + ",'" + QString::fromStdString(pass) +"')")){
            qDebug() << this->getLastError().text();
        }


    }

    return true;

}
