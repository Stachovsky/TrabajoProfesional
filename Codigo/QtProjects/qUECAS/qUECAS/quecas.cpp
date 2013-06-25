#include "quecas.h"
#include "ui_quecas.h"

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

qUECAS::qUECAS(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qUECAS)
{
    ui->setupUi(this);

    qRegisterMetaType<cmdPcCom>("cmdPcCom");
    qRegisterMetaType<QVector<short>*>("QVector<short>&");

    /////////////////////////////////////////////
    // Se centra la ventana
    QRect frect = this->frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());
    //    this->setWindowState(Qt::WindowFullScreen);
    /////////////////////////////////////////////

    QObject::connect(this,SIGNAL(SendMsgToUART(QString)), &this->thComDevice, SLOT(SendMsgToUART(QString)));
    QObject::connect(this,SIGNAL(SendMsgToUART(QByteArray)), &this->thComDevice, SLOT(SendMsgToUART(QByteArray)));

    QObject::connect(&this->thComDevice,SIGNAL(cmdReceiveFromDevice(cmdPcCom)),&this->thCore,SLOT(cmdReceiveFromDevice(cmdPcCom)));

    QObject::connect(&this->thCore,SIGNAL(setStateDiagrama(int)), &this->diagramaBloquesManager, SLOT(setState(int)));
    QObject::connect(&this->thCore,SIGNAL(setNivelCargaBarraProgreso(int)), this, SLOT(setNivelCarga(int)));
    QObject::connect(&this->thCore,SIGNAL(setProcesoTerminado()), this, SLOT(procesoTermiando()));
    QObject::connect(&this->thCore,SIGNAL(setCargaCompletada()), this, SLOT(procesoCargaTerminado()));
    QObject::connect(&this->thCore,SIGNAL(setTextStatusBar(QString,int)), this, SLOT(changeTextStatusBar(QString,int)));
    QObject::connect(&this->thCore,SIGNAL(setProcesoDetensionTerminado()), this, SLOT(setProcesoDetensionTerminado()));
    QObject::connect(&this->thCore,SIGNAL(ReceiveMsgFromUART(QString)),this,SLOT(ReceiveMsgFromUART(QString)));

    QObject::connect(&this->thCore,SIGNAL(setValueTensionFuenteDiagrama(unsigned int)),this,SLOT(setValueTensionFuenteDiagrama(unsigned int)));
    QObject::connect(&this->thCore,SIGNAL(setValueTensionCapacitoresDiagrama(unsigned int)),this,SLOT(setValueTensionCapacitoresDiagrama(unsigned int)));
    QObject::connect(&this->thCore,SIGNAL(ReceiveADC2ValueDiagrama(unsigned int)),this,SLOT(ReceiveADC2Value(unsigned int)));
//    QObject::connect(&this->thCore,SIGNAL(ReceiveADC3ValueDiagrama(unsigned int)),this,SLOT(ReceiveADC3Value(unsigned int)));
//    QObject::connect(&this->thCore,SIGNAL(ReceiveADC4ValueDiagrama(unsigned int)),this,SLOT(ReceiveADC4Value(unsigned int)));

    QObject::connect(&this->thCore,SIGNAL(SendMsgToUART(QString)), &this->thComDevice, SLOT(SendMsgToUART(QString)));
    QObject::connect(&this->thCore,SIGNAL(SendMsgToUART(QByteArray)), &this->thComDevice, SLOT(SendMsgToUART(QByteArray)));
    QObject::connect(&this->thCore,SIGNAL(logCmdSend(cmdPcCom)), this, SLOT(logCmdSend(cmdPcCom)));

    QObject::connect(&this->thCore,SIGNAL(sendMediciones(QVector<short>*,QVector<short>*)),this,SLOT(saveMediciones(QVector<short>*,QVector<short>*)));
    QObject::connect(&this->thCore,SIGNAL(setProgresoRecepcionDatos(int,int)),this,SLOT(setProgresoRecepcionDatos(int,int)));

    QObject::connect(this,SIGNAL(datosGuardadosCorrectamente()),&this->thCore,SLOT(datosGuardadosCorrectamente()));

    /////////////////////////////////////////////

    this->ui->layaoutDiagrama->addWidget(this->diagramaBloquesManager.getDiagrama());

    this->setCentralWidget(this->ui->tabWidget);

    /////////////////////////////////////////////

    this->dataBaseManager = new DatabaseManager(); // se crea el manejador de la base de datos
    this->dataBaseManager->setDataBaseName(DATABASE_NAME);
    this->dataBaseManager->openDB(); // se abre la base de datos
    this->dataBaseManager->checkDataBase(); // Se verifican las tablas del la base de datos

    this->thCore.setDataBaseManager(this->dataBaseManager);
    /////////////////////////////////////////////

    this->idPerfil = -1;
    this->idExperimentoActual = -1;
    this->idUsuarioActual = -1;
    this->idExperimentoSeleccionado = -1;
    this->graficoPreview = NULL;

    /////////////////////////////////////////////

    this->userName = "";

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

qUECAS::~qUECAS()
{
    delete ui;
    if(this->dataBaseManager)
        delete this->dataBaseManager;

    if(this->graficoPreview)
        delete this->graficoPreview;
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::closeEvent(QCloseEvent *event){

    this->thComDevice.terminate();

    while(!this->thComDevice.isFinished()){

    }

    this->diagramaBloquesManager.terminate();
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::iniciar(){

    /////////////////////////////////////////////

    this->setWindowTitle("Ultrafast Electric Current Activated/Assisted Sintering Control");

    /////////////////////////////////////////////

    // Se configura la interfaz segun el perfil del usuario
    if(this->idPerfil > PERFIL_ROOT){
        this->ui->tabWidget->removeTab(0);
        this->ui->pushButton->hide();
        this->ui->pushButton_4->hide();
        this->ui->pushButton_5->hide();
        this->ui->pushButton_6->hide();
        this->ui->pushButton_7->hide();
        this->ui->pushButton_9->hide();

        if(this->idPerfil > PERFIL_ADMIN){
            this->ui->tabWidget->removeTab(2);
        }

        if(this->idPerfil == PERFIL_ADMIN){
            this->ui->tabWidget->removeTab(0);
        }
    }

   if(this->idPerfil != PERFIL_USER){
        // Si es root o admin se cargan el ABM de usuarios
        this->loadTableUsuarios();
    }
    /////////////////////////////////////////////

    this->ui->statusBar->showMessage("Iniciando Sistema",3000);

    /////////////////////////////////////////////

    this->graficoPreview = new QCustomPlot();
    this->ui->previewGrafic->addWidget(this->graficoPreview);

    /////////////////////////////////////////////

    this->ui->tablaExperimentos->setSelectionMode(QAbstractItemView::SingleSelection);
    this->ui->tablaUsuarios->setSelectionMode(QAbstractItemView::SingleSelection);
    this->loadTableExperimentos();

    /////////////////////////////////////////////

    this->ui->idUsuarioInput->setEnabled(false);
    this->ui->Usuario->setEnabled(false);
    this->ui->idUsuarioInput->setStyleSheet("background-color:white;color:black;");
    this->ui->Usuario->setStyleSheet("background-color:white;color:black;");

    /////////////////////////////////////////////

    this->ui->btnExportCSV->setEnabled(false);
    this->ui->btnAmpliar->setEnabled(false);

    /////////////////////////////////////////////

    this->ui->btnPause->hide();
    this->ui->btnStop->hide();
    this->ui->btnDisparo->hide();
    this->ui->btnStop->setStyleSheet("color:red;");
    this->ui->btnDisparo->setStyleSheet("color:green;");
    this->ui->barraProgresoCargar->hide();
    this->ui->labelProgresoCargar->hide();
    this->ui->barraProgresoCargar->setValue(0);
    this->ui->btnDeleteExperimento->setEnabled(false);
    this->ui->parametroActual->hide();
    this->ui->labelParametroActual->hide();

    this->graficoAmpliado.hide();
    /////////////////////////////////////////////

//    this->timerCountDownCarga = new QTimer(this);
//    QObject::connect(this->timerCountDownCarga, SIGNAL(timeout()),this, SLOT(tickCountDownCarga()));

    /////////////////////////////////////////////

    // Se inicia el thread para el manejo del puerto serie
    this->thComDevice.start();

    /////////////////////////////////////////////

    this->diagramaBloquesManager.setState(STATE_DESACTIVADO);
    this->diagramaBloquesManager.start();

    /////////////////////////////////////////////

    // Se inicia el thread que controla la logica
    this->thCore.start();

    /////////////////////////////////////////////

   this->ui->barraProgresoRecibiendoDatos->hide();
   this->ui->labelProgressBarRecibiendoDatos->hide();

    /////////////////////////////////////////////


    return true;

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::ReceiveMsgFromUART(QString msg){

    QString temp = msg;
    temp += "\n";
    temp += this->ui->logUartRecieve->toPlainText();

    this->ui->logUartRecieve->setText(temp);

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_cleanLogRecieve_clicked()
{
    this->ui->logUartRecieve->setText("");
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::SendMsgFromUART(QString msg){

    QString temp = msg;
    temp += "\n";
    temp += this->ui->logUartSend->toPlainText();

    this->ui->logUartSend->setText(temp);

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_cleanLogSend_clicked()
{
    this->ui->logUartSend->setText("");
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::setValueTensionFuenteDiagrama(unsigned int value){

    this->ui->ADC0Value->setText(QString::number(value));
    this->ui->ADC0ValueBar->setValue(value);

    float tension = (value*1500)/4095;
    this->diagramaBloquesManager.setValueSensorTensionFuente(tension);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::setValueTensionCapacitoresDiagrama(unsigned int value){

    this->ui->ADC1Value->setText(QString::number(value));
    this->ui->ADC1ValueBar->setValue(value);

    float tension = (value*1500)/4095;
    this->diagramaBloquesManager.setValueSensorTensionCapactiores(tension);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::ReceiveADC2Value(unsigned int value){

    this->ui->ADC2Value->setText(QString::number(value));
    this->ui->ADC2ValueBar->setValue(value);

}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

//void qUECAS::ReceiveADC3Value(unsigned int value){

//    this->ui->ADC3Value->setText(QString::number(value));
//    this->ui->ADC3ValueBar->setValue(value);

//}

//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

//void qUECAS::ReceiveADC4Value(unsigned int value){

//    this->ui->ADC4Value->setText(QString::number(value));
//    this->ui->ADC4ValueBar->setValue(value);

//}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_Actuador1_toggled(bool checked)
{
    cmdPcCom	cmdActuador;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

    if(checked){
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_1_ON);
    }
    else{
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_1_OFF);
    }

    sizeBufferPackedCmd = pcComPackMsg(&cmdActuador,bufferPackedCmd,50);
    this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));

    this->logCmdSend(cmdActuador);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_Actuador2_toggled(bool checked)
{
    cmdPcCom	cmdActuador;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

    if(checked){
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_2_ON);
    }
    else{
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_2_OFF);
    }

    sizeBufferPackedCmd = pcComPackMsg(&cmdActuador,bufferPackedCmd,50);
    this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));

    this->logCmdSend(cmdActuador);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_Actuador3_toggled(bool checked)
{
    cmdPcCom	cmdActuador;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

    if(checked){
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_3_ON);
    }
    else{
        pcComInitMsg(&cmdActuador,CMD_PCCOM_ACTUADOR_3_OFF);
    }

    sizeBufferPackedCmd = pcComPackMsg(&cmdActuador,bufferPackedCmd,50);
    this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));

    this->logCmdSend(cmdActuador);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::checkLogin(QString user, QString pass){

    QString userCript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,user.toStdString()));
    QString query = "SELECT Password,idPerfil,nombre,idUsuario FROM Usuarios WHERE Usuario='" + userCript +"'";

    if(this->dataBaseManager->queryDB(query)){

        if(this->dataBaseManager->getLastResult().size() > 1){
            if(this->dataBaseManager->getLastResult()[1].size() > 0){

                QString passEncript = this->dataBaseManager->getLastResult()[1][0];
                QString realPass = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,passEncript.toStdString()));

                if(realPass == pass){
                    this->userName = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->dataBaseManager->getLastResult()[1][2].toStdString()));
                    this->idPerfil = this->dataBaseManager->getLastResult()[1][1].toInt();
                    this->idUsuarioActual = this->dataBaseManager->getLastResult()[1][3].toInt();

                    return true;
                }
            }
        }
    }

    return false;

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::login(){

    LoginWindows lw(this);
    if(lw.exec() == QDialog::Rejected){
        qDebug() << "login error";
        return false;
    }

    return true;
}


///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::loadTableExperimentos(){

    this->ui->tablaResultados->clear();
    this->ui->plainTextEdit->clear();

    if(this->graficoPreview->plottableCount() != 0){
        this->graficoPreview->removePlottable(0);
        this->graficoPreview->replot();
    }

    for(int i=0; i < this->ui->tablaExperimentos->rowCount() ; i++ ){
        this->ui->tablaExperimentos->removeRow(i);
    }

    QString query;

    // El usuario solo puede ver sus experimentos
    if(this->idPerfil == PERFIL_USER){
        query = "select distinct idExperimento from experimentos where idUsuario=" + QString::number(this->idUsuarioActual);
    }else{
        query = "select distinct idExperimento from experimentos";
    }

    if(this->dataBaseManager->queryDB(query) ==  true){
        QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();

        if(resultQuery.size() > 1){
            this->ui->tablaExperimentos->setColumnCount(resultQuery[1].size());
            this->ui->tablaExperimentos->setRowCount(resultQuery.size() - 1);

            for(int i=1; i < resultQuery.size() ; i++){
                QTableWidgetItem* item = new QTableWidgetItem();
                item->setText(resultQuery[i][0]);
                this->ui->tablaExperimentos->setItem(i - 1,0, item);
            }
        }
    }

    QStringList nombreColumnas;
    nombreColumnas.append("IdExperimento");
    this->ui->tablaExperimentos->setHorizontalHeaderLabels(nombreColumnas);

    this->ui->tablaExperimentos->setColumnWidth(0,120);
    this->ui->tablaExperimentos->resize(140,240);

    if( this->ui->tablaExperimentos->rowCount() && this->ui->tablaExperimentos->colorCount()){
        this->ui->tablaExperimentos->setItemSelected(
                    this->ui->tablaExperimentos->item(
                           this->ui->tablaExperimentos->rowCount(),
                           this->ui->tablaExperimentos->colorCount()
                    ), true
        );
    }

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_5_clicked()
{
    this->diagramaBloquesManager.setState( STATE_CARGANDO);

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_6_clicked()
{
    this->diagramaBloquesManager.setState(STATE_DESCARGADO);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_7_clicked()
{
    this->diagramaBloquesManager.setState(STATE_DESCARGA);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_clicked()
{
    this->diagramaBloquesManager.setState(STATE_DESACTIVADO);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_4_clicked()
{
    this->diagramaBloquesManager.setState(STATE_HV_ENABLED);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_9_clicked()
{
    this->diagramaBloquesManager.setState(STATE_CARGADO);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnExportCSV_clicked()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Comma-separated values (*.csv)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setNameFilters(filterFile);
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".csv"){
        fileName +=".csv";
    }

    QFile exportFile(fileName);
    exportFile.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream exportFileStream(&exportFile);

    QString dataFile = "";

    QString query = "select value from resultados where idExperimento = " + QString::number(this->idExperimentoActual);

    if(this->dataBaseManager->queryDB(query) ==  true){

        QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();

        dataFile += "tiempo";
        dataFile += CARACTER_PARCEO_CSV;
        dataFile +="value\n";
        if(resultQuery.size() > 0){

            for(int i=0; i < resultQuery.size()-1; i++){

                exportFileStream    <<  QString::number(i)
                                    <<  CARACTER_PARCEO_CSV
                                    <<  resultQuery[i+1][0]
                                    <<  "\n";
            }
        }
    }

    exportFile.write(dataFile.toAscii());
    exportFile.close();

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_3_clicked()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Portable Network Graphics (*.png)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setNameFilters(filterFile);
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".png"){
        fileName +=".png";
    }

    this->graficoPreview->savePng(fileName,1000,500);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_pushButton_8_clicked()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Portable Document Format (*.pdf)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setNameFilters(filterFile);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".pdf"){
        fileName +=".pdf";
    }

    this->graficoPreview->savePdf(fileName,1000,500);

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::loadTableUsuarios(){

    this->ui->tablaUsuarios->clear();
    for(int i=0; i < this->ui->tablaUsuarios->rowCount() ; i++ ){
        this->ui->tablaUsuarios->removeRow(i);
    }

    QString query = "select idUsuario,nombre from Usuarios where idPerfil >= " + QString::number(this->idPerfil) ;
    if(this->dataBaseManager->queryDB(query) ==  true){
        QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();

        if(resultQuery.size() > 1){
            this->ui->tablaUsuarios->setColumnCount(resultQuery[1].size());
            this->ui->tablaUsuarios->setRowCount(resultQuery.size() - 1);

            for(int i=1; i < resultQuery.size() ; i++){
                QTableWidgetItem* item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(resultQuery[i][0]);
                this->ui->tablaUsuarios->setItem(i - 1,0, item);

                QTableWidgetItem* item2 = new QTableWidgetItem();
                QString realName = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,resultQuery[i][1].toStdString()));
                item2->setText(realName);
                this->ui->tablaUsuarios->setItem(i - 1,1, item2);
            }
        }
    }

    QStringList nombreColumnas;
    nombreColumnas.append("IdUsuario");
    nombreColumnas.append("Nombre");
    this->ui->tablaUsuarios->setHorizontalHeaderLabels(nombreColumnas);

    this->ui->tablaUsuarios->setColumnWidth(0,80);
    this->ui->tablaUsuarios->setColumnWidth(1,200);
    this->ui->tablaUsuarios->resize(300,240);

    this->ui->btnDeleteUser->setEnabled(false);
    this->ui->btnUpdateUser->setEnabled(false);


    query = "SELECT * FROM Perfiles where idPerfil >=" + QString::number(this->idPerfil);
    if(this->dataBaseManager->queryDB(query)){
        QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();
        this->ui->SelectPerfilUsuario->addItem("","");
        this->ui->SelectPerfilUsuarioNew->addItem("","");
        if(resultQuery.size() > 1){
            for(int i=1; i < resultQuery.size() ; i++){
                this->ui->SelectPerfilUsuario->addItem(resultQuery[i][1],resultQuery[i][0]);
                this->ui->SelectPerfilUsuarioNew->addItem(resultQuery[i][1],resultQuery[i][0]);
            }
        }
    }

    this->ui->SelectPerfilUsuario->setMinimumWidth(140);
    this->ui->SelectPerfilUsuarioNew->setMinimumWidth(140);


    return true;
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_tablaUsuarios_cellClicked(int row, int column)
{
    if(row >= 0 && column >= 0){
        this->on_tablaExperimentos_currentCellChanged(row,column,-1,-1);
    }


}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnAddUser_clicked()
{
    QString PassEncript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->ui->PassUsuarioNew->text().toStdString()));
    QString UserEncript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->ui->UsuarioNew->text().toStdString()));
    QString nombreEncript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->ui->NombreUsuarioNew->text().toStdString()));

    QString query = "";
    query = "INSERT INTO Usuarios (Usuario,Nombre, idPerfil, Password) VALUES ('" + UserEncript + "','" + nombreEncript + "'," + this->ui->SelectPerfilUsuarioNew->itemData(this->ui->SelectPerfilUsuarioNew->currentIndex()).toString() + ",'" + PassEncript + "')";

    if(this->dataBaseManager->queryDB(query) ==  true){
        // Se actualiza la tabla de usuarios
        this->loadTableUsuarios();

        this->ui->UsuarioNew->setText("");
        this->ui->NombreUsuarioNew->setText("");
        this->ui->SelectPerfilUsuarioNew->setCurrentIndex(0);
        this->ui->PassUsuarioNew->setText("");

    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnDeleteUser_clicked()
{

    if(QMessageBox::question(this, "Eliminar usuario","Esta seguro que desea eliminar el usuario " + this->ui->NombreUsuario->text() + "?", QMessageBox::Yes, QMessageBox::No, QMessageBox::NoButton) == QMessageBox::Yes){

        QString query = "";
        query = "DELETE FROM Usuarios WHERE idUsuario=" + QString::number(this->idUsuarioActual);

        if(this->dataBaseManager->queryDB(query) ==  true){
            // Se actualiza la tabla de usuarios
            this->loadTableUsuarios();

            this->ui->Usuario->setText("");
            this->ui->idUsuarioInput->setText("");
            this->ui->NombreUsuario->setText("");
            this->ui->PassUsuario->setText("");

        }
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnUpdateUser_clicked()
{
    QString PassEncript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->ui->PassUsuario->text().toStdString()));
    QString nombreEncript = QString::fromStdString(this->cripto.encriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,this->ui->NombreUsuario->text().toStdString()));

    QString query = "";
    query = "UPDATE Usuarios SET Nombre='" + nombreEncript + "', idPerfil=" + this->ui->SelectPerfilUsuario->itemData(this->ui->SelectPerfilUsuario->currentIndex()).toString() + ", Password='" + PassEncript + "' WHERE idUsuario=" + QString::number(this->idUsuarioActual);

    if(this->dataBaseManager->queryDB(query) ==  true){
        // Se actualiza la tabla de usuarios
        this->loadTableUsuarios();

        this->ui->idUsuarioInput->setText("");
        this->ui->Usuario->setText("");
        this->ui->NombreUsuario->setText("");
        this->ui->PassUsuario->setText("");

    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnStop_clicked()
{
    this->thCore.detenerProceso();

    this->ui->btnStop->hide();
    this->ui->btnPause->hide();
    this->ui->barraProgresoCargar->hide();
    this->ui->labelProgresoCargar->hide();
    this->ui->btnDisparo->hide();
    this->ui->parametroActual->hide();
    this->ui->labelParametroActual->hide();

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::setNivelCarga(int porcentaje){

    if(porcentaje >= 0){
        this->ui->barraProgresoCargar->setValue(porcentaje);
    }else{
        this->ui->barraProgresoCargar->setValue(100);
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnPause_clicked()
{
    if(this->processPuased){
        this->processPuased = false;
        this->thCore.reasumeProcesoCarga();
        this->ui->btnPause->setText("Pausar");
    }else{
        this->processPuased = true;
        this->thCore.pausarProcesoCarga();
        this->ui->btnPause->setText("Retomar");
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::setProcesoDetensionTerminado(){
    this->ui->btnNuevoExperimento->show();
    this->ui->btnPause->hide();
    this->ui->btnStop->hide();
    this->ui->barraProgresoCargar->hide();
    this->ui->labelProgresoCargar->hide();
    this->ui->btnDisparo->hide();

    for(int i=0; i< this->ui->tabWidget->count(); i++){
        this->ui->tabWidget->setTabEnabled(i,true);
    }

    this->thCore.monitorear();
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::procesoTermiando(){

    this->ui->btnPause->hide();
    this->ui->btnStop->hide();
    this->ui->barraProgresoCargar->hide();
    this->ui->labelProgresoCargar->hide();
    this->ui->btnDisparo->hide();
    this->ui->parametroActual->hide();
    this->ui->labelParametroActual->hide();

    this->ui->labelProgressBarRecibiendoDatos->hide();
    this->ui->barraProgresoRecibiendoDatos->hide();

    this->ui->btnNuevoExperimento->show();

//    QVector < QString > inserts;

//    for(double i=0; i < M_PI_2/3 ; i+= 0.05){
//        qreal v =  1000*(qSin(3*i) + (((qreal)qrand()/RAND_MAX - 0.5)/30));
//        inserts.push_back("insert into resultados (idExperimento, Value) values (" + QString::number(this->idExperimentoActual) + "," + QString::number(v) + ");");
//    }

//    for(double i=0; i < 5 ; i+= 0.05){
//        qreal v =  1000*(qExp( -i*2 ) + (((qreal)qrand()/RAND_MAX - 0.5)/30));
//        inserts.push_back("insert into resultados (idExperimento, Value) values (" + QString::number(this->idExperimentoActual) + "," + QString::number(v) + ");");
//    }

//    for(int i=0; i < inserts.size(); i++)
//        this->dataBaseManager->queryDB(inserts[i]);


    for(int i=0; i< this->ui->tabWidget->count(); i++){
        this->ui->tabWidget->setTabEnabled(i,true);
    }

    this->thCore.monitorear();

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::procesoCargaTerminado(){
    this->ui->btnNuevoExperimento->hide();
    this->ui->btnPause->hide();
    this->ui->btnStop->show();
    this->ui->barraProgresoCargar->hide();
    this->ui->labelProgresoCargar->hide();
    this->ui->labelParametroActual->hide();
    this->ui->parametroActual->hide();
    this->ui->btnDisparo->show();

    this->processPuased = false;
    this->ui->btnPause->setText("Pausar");

}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnDisparo_clicked()
{
    this->thCore.disparoDescarga();
    this->ui->btnStop->hide();
    this->ui->btnDisparo->hide();
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////


void qUECAS::on_btnNuevoExperimento_clicked()
{
    NuevoExperimento nuevoExperimento(this);
    nuevoExperimento.setUserName(this->userName);
    if(nuevoExperimento.exec() == QDialog::Accepted){

        this->ui->btnNuevoExperimento->hide();
        this->ui->btnPause->show();
        this->ui->btnStop->show();
        this->ui->barraProgresoCargar->show();
        this->ui->labelProgresoCargar->show();

        this->ui->barraProgresoCargar->setValue(0);
        this->processPuased = false;

        if(this->idPerfil != PERFIL_ROOT){
            for(int i=0; i< this->ui->tabWidget->count(); i++){
                this->ui->tabWidget->setTabEnabled(i,false);
            }
            this->ui->tabWidget->setTabEnabled(this->ui->tabWidget->currentIndex(),true);
        }

        this->ui->labelParametroActual->show();
        this->ui->parametroActual->show();
        this->ui->parametroActual->setText(QString::number(this->parametroNivelCargaActual) + " " + this->unidadParametroSeleccionada);

        this->thCore.iniciarProceso(this->parametroNivelCargaActual, this->unidadParametroSeleccionada);
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

bool qUECAS::crearNuevoExperimento(QString descripcion, QString comentario, int nivelCarga, QString unidad){

    bool result = false;
    QString queryStr;
    QTextStream query;
    query.setString(&queryStr);

    QString fecha;

    fecha = QDate::currentDate().toString();
    fecha += " ";
    fecha += QTime::currentTime().toString();

    query << "INSERT INTO Experimentos ("
              << "idUsuario,"
              << "Fecha,"
              << "Descripcion,"
              << "Comentario,"
              << "nivelCarga,"
              << "unidad,"
              << "State) "
           << "VALUES ("
              << this->idUsuarioActual << ","
              << "'" << fecha << "',"
              << "'" << descripcion << "',"
              << "'" << comentario << "',"
              << nivelCarga << ","
              << "'" << unidad << "',"
              << "'CREADO'"
           << ")";

    if(this->dataBaseManager->queryDB(queryStr)){
        this->loadTableExperimentos();

        queryStr = "SELECT max(idExperimento) as max FROM Experimentos";
        if(this->dataBaseManager->queryDB(queryStr)){

            this->idExperimentoActual = this->dataBaseManager->getLastResult()[1][0].toInt();
            this->thCore.setCurrentIdExperimento(this->idExperimentoActual);
            result = true;

        }else{
            qDebug() << this->dataBaseManager->getLastError();
        }
    }else{
        qDebug() << "Error al crear el experimentos en la DB: " << this->dataBaseManager->getLastError();
    }

    return result;
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnDeleteExperimento_clicked()
{
    if(this->idExperimentoSeleccionado > 0){
    int result = QMessageBox::warning(this,   "Confirmacion", "Confirma que desea borrar el experimento "
                                                + QString::number(this->idExperimentoSeleccionado) + "?",
                                                QMessageBox::Ok,
                                                QMessageBox::Cancel
                                        );

        if(result == QMessageBox::Ok){
            QString query;
            query= "delete from resultados where idExperimento = " + QString::number(this->idExperimentoSeleccionado);
            if(this->dataBaseManager->queryDB(query) ==  true){
                query= "delete from experimentos where idExperimento = " + QString::number(this->idExperimentoSeleccionado);
                if(this->dataBaseManager->queryDB(query) != true){
                    qDebug() << this->dataBaseManager->getLastError();
                }
            }else{
                qDebug() << this->dataBaseManager->getLastError();
            }

            this->loadTableExperimentos();
        }

        this->idExperimentoSeleccionado = -1;
        this->ui->btnDeleteExperimento->setEnabled(false);
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_tablaExperimentos_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    int row = currentRow;
    if(row >= 0){

        this->ui->btnExportCSV->setEnabled(true);
        this->ui->btnAmpliar->setEnabled(true);

        QString query = "";
        this->ui->tablaExperimentos->selectRow(row);
        this->idExperimentoActual = this->ui->tablaExperimentos->item(row,0)->text().toInt();

        this->idExperimentoSeleccionado = this->ui->tablaExperimentos->item(row,0)->text().toInt();
        this->ui->btnDeleteExperimento->setEnabled(true);

        query = "select * from experimentos where idExperimento = " + this->ui->tablaExperimentos->item(row,0)->text();
        if(this->dataBaseManager->queryDB(query) ==  true){

            QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();

            QString s = "";
            this->ui->plainTextEdit->setPlainText(s);
            s += resultQuery[0][1] + ": " + resultQuery[1][1] + "\n";
            s += resultQuery[0][2] + ": " + resultQuery[1][2] + "\n";
            s += resultQuery[0][3] + ": " + resultQuery[1][3] + "\n";
            s += resultQuery[0][4] + ": " + resultQuery[1][4] + "\n";
            s += resultQuery[0][5] + ": " + resultQuery[1][5] + resultQuery[1][6] + "\n";
            this->ui->plainTextEdit->setPlainText(s);

            query = "select value from resultados where idExperimento = " + this->ui->tablaExperimentos->item(row,0)->text();

            if(this->dataBaseManager->queryDB(query) ==  true){

                resultQuery = this->dataBaseManager->getLastResult();

                QVector<double> data_t;
                QVector<double> data_I;
                double min_t = 0;
                double max_t = 0;
                double min_I = 0;
                double max_I = 0;

                if(resultQuery.size() > 0){

                    this->ui->tablaResultados->clear();
                    this->ui->tablaResultados->setRowCount(resultQuery.size()-1);
                    this->ui->tablaResultados->setColumnCount(2);

                    QStringList nombreColumnas;
                    nombreColumnas.append("Tiempo [us]");
                    nombreColumnas.append("Corriente [A]");
                    this->ui->tablaResultados->setHorizontalHeaderLabels(nombreColumnas);

                    for(int i=0; i < resultQuery.size()-1; i++){
                        double dt = (double)i*TIME_SCALE_GRAFIC;
                        data_t.push_back(dt);
                        min_t = (dt <= min_t)?dt:min_t;
                        max_t = (dt >= max_t)?dt:max_t;

                        double dI = resultQuery[i+1][0].toDouble();
                        data_I.push_back(dI);
                        min_I = (dI <= min_I)?dI:min_I;
                        max_I = (dI >= max_I)?dI:max_I;

                        QTableWidgetItem* timeItem = new QTableWidgetItem();
                        timeItem->setText(QString::number(dt));
                        this->ui->tablaResultados->setItem(i, 0, timeItem);

                        QTableWidgetItem* currentItem = new QTableWidgetItem();
                        currentItem->setText(QString::number(dI));
                        this->ui->tablaResultados->setItem(i, 1, currentItem);
                    }

                    // Grafico preview
                    this->graficoPreview->removePlottable(0);
                    this->graficoPreview->addGraph();
                    // create graph and assign data to it:
                    this->graficoPreview->graph(0)->setData(data_t, data_I);
                    // give the axes some labels:
                    this->graficoPreview->xAxis->setLabel("Tiempo [us]");
                    this->graficoPreview->yAxis->setLabel("Corriente [A]");
                    // set axes ranges, so we see all data:

                    this->graficoPreview->xAxis->setRange(min_t, max_t);
                    this->graficoPreview->yAxis->setRange(min_I, max_I);

                    this->graficoPreview->replot();


                    // Grafico ampliado
                    this->graficoAmpliado.grafico->removePlottable(0);
                    this->graficoAmpliado.grafico->addGraph();
                    // create graph and assign data to it:
                    this->graficoAmpliado.grafico->graph(0)->setData(data_t, data_I);
                    // give the axes some labels:
                    this->graficoAmpliado.grafico->xAxis->setLabel("Tiempo [us]");
                    this->graficoAmpliado.grafico->yAxis->setLabel("Corriente [A]");
                    // set axes ranges, so we see all data:

                    this->graficoAmpliado.grafico->xAxis->setRange(min_t, max_t);
                    this->graficoAmpliado.grafico->yAxis->setRange(min_I, max_I);

                    this->graficoAmpliado.grafico->replot();




                }
            }
        }
    }
}


////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_tablaExperimentos_cellClicked(int row, int column)
{
    if(row >= 0 && column >= 0){
        this->on_tablaExperimentos_currentCellChanged(row,column,-1,-1);
    }
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::changeTextStatusBar(QString str,int timeout){
    if(timeout > 0)
        this->ui->statusBar->showMessage(str,timeout);
    else
        this->ui->statusBar->showMessage(str);
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_btnAmpliar_clicked()
{
    this->graficoAmpliado.show();
}

////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////

void qUECAS::on_tablaUsuarios_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    int row = currentRow;

    if(row >= 0){
        this->ui->tablaUsuarios->selectRow(row);

        QString query = "";
        query = "select * from usuarios where idUsuario = " + this->ui->tablaUsuarios->item(row,0)->text();

        this->idUsuarioActual = this->ui->tablaUsuarios->item(row,0)->text().toInt();

        if(this->dataBaseManager->queryDB(query) ==  true){

            QVector< QVector<QString> > resultQuery = this->dataBaseManager->getLastResult();

            if(resultQuery[0].size() == 5){
                QString realUser = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,resultQuery[1][1].toStdString()));
                QString realName = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,resultQuery[1][2].toStdString()));
                QString realPass = QString::fromStdString(this->cripto.desencriptar(KEY_PASSWORD_USUARIO,IV_PASSWORD_USUARIO,resultQuery[1][4].toStdString()));

                this->ui->idUsuarioInput->setText(resultQuery[1][0]);
                this->ui->Usuario->setText(realUser);
                this->ui->NombreUsuario->setText(realName);

                int indexSelect = this->ui->SelectPerfilUsuario->findData(resultQuery[1][3]);
                this->ui->SelectPerfilUsuario->setCurrentIndex(indexSelect);

                this->ui->PassUsuario->setText(realPass);

                this->ui->btnDeleteUser->setEnabled(true);
                this->ui->btnUpdateUser->setEnabled(true);
            }
        }
    }
}

void qUECAS::on_actionVersion_triggered()
{

    QMessageBox::about(this,"Informacion del qUECAS","Version: " + QString(VERSION_NUMBER));
}

void qUECAS::on_pushButton_2_clicked()
{
    cmdPcCom	cmdSend;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

    pcComInitMsg(&cmdSend,CMD_PCCOM_REALIZAR_DESCARGA);
    sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
    this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));

    this->logCmdSend(cmdSend);

    sleep(1);

}

void qUECAS::logCmdSend(cmdPcCom cmd){

    QString temp = "";
    temp += "<--[ ";
    temp += QString(QByteArray((char*)&cmd.start,1).toHex()) + " ";
    temp += QString(QByteArray((char*)&cmd.cmdId,1).toHex()) + " ";
    temp += QString(QByteArray((char*)&cmd.len,1).toHex()) + " ";

    for(int j = 0; j < cmd.len; j++){
        temp += QString(QByteArray((char*)&cmd.data[j],1).toHex()) + " ";
    }

    temp += QString(QByteArray((char*)&cmd.crcHL[0],1).toHex()) + " ";
    temp += QString(QByteArray((char*)&cmd.crcHL[1],1).toHex()) + " ";
    temp += QString(QByteArray((char*)&cmd.end,1).toHex()) + " ";

    temp += " ]";

    this->SendMsgFromUART(temp);

}

void qUECAS::on_pushButton_10_clicked()
{
    cmdPcCom	cmdSend;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

    pcComInitMsg(&cmdSend,CMD_PCCOM_DESCARGA_TERMINADA);
    sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
    this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));

    this->logCmdSend(cmdSend);

    sleep(1);

}


void qUECAS::saveMediciones(QVector<short>* indexMuestas, QVector<short>* muestras){

    QString query;

    for(unsigned int i=0; i < muestras->size(); i++){
        query = "insert into resultados (idExperimento, Value) values (" + QString::number(this->idExperimentoActual) + "," + QString::number(muestras->at(i)) + ");";
//        qDebug() << query;
        this->dataBaseManager->queryDB(query);
    }

    emit this->datosGuardadosCorrectamente();
}


void qUECAS::setProgresoRecepcionDatos(int value, int total){

    this->ui->barraProgresoRecibiendoDatos->show();
    this->ui->labelProgressBarRecibiendoDatos->show();
    this->ui->barraProgresoRecibiendoDatos->setRange(0,total);
    this->ui->barraProgresoRecibiendoDatos->setValue(value);

}
