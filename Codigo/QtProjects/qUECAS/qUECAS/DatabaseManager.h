#ifndef SQLDRIVER_H
#define SQLDRIVER_H

#include <QObject>
#include <QDir>
#include <QFile>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QString>
#include <QDebug>
#include <QVariant>
#include <QVector>
#include <string>

#include "Crypto3Des.h"
#include "quecasConfig.h"

using namespace std;

class DatabaseManager : public QObject
{
public:
    DatabaseManager(QObject *parent = 0);
    ~DatabaseManager();

public:
    bool openDB();
    void closeDB();
    QSqlError getLastError();
    bool queryDB(QString query);
    QVector< QVector<QString> > getLastResult();
    void showLastResults();
    void setDataBaseName(QString dbname){ this->dataBaseName = dbname; }
    bool checkDataBase();

private:
    QSqlDatabase db;
    QString dataBaseName;
    QVector< QVector<QString> > lastResult;
    void cleanLastResult();
};

#endif // SQLDRIVER_H
