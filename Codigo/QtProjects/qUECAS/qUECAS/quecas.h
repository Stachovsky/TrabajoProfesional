#ifndef QUECAS_H
#define QUECAS_H

#include <QMainWindow>
#include <QLayout>
#include <QVector>
#include <QPair>
#include <QByteArray>
#include <qmath.h>
#include <QDesktopWidget>
#include <QDialog>
#include <QList>
#include <QListWidget>
#include <QTableWidget>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <QTextStream>
#include <QDate>

#include "thcore.h"
#include "thcomdevice.h"
#include "DatabaseManager.h"
#include "qcustomplot.h"
#include "GraficManager.hpp"
#include "Crypto3Des.h"
#include "graficoampliado.h"

#include "quecasConfig.h"
#include "loginwindows.h"
#include "nuevoexperimento.h"

extern "C" {
    #include "ProtocolPCComunication.h"
}

// Solucion permisos: http://askubuntu.com/questions/112568/how-do-i-allow-a-non-default-user-to-use-serial-device-ttyusb0

namespace Ui {
    class qUECAS;
}

class qUECAS : public QMainWindow
{
    Q_OBJECT

public:
    explicit qUECAS(QWidget *parent = 0);
    ~qUECAS();

    bool login();
    bool checkLogin(QString user, QString pass);

    bool iniciar();
    bool crearNuevoExperimento(QString descripcion, QString comentario, int nivelCarga, QString unidad);

    void setParametrosExperimentos(int parametroNivelCargaActual,QString unidadParametroSeleccionada){
        this->parametroNivelCargaActual = parametroNivelCargaActual;
        this->unidadParametroSeleccionada = unidadParametroSeleccionada;
    }

private:
    Ui::qUECAS *ui;
    DatabaseManager* dataBaseManager;
    QCustomPlot* grafico;
    QCustomPlot* graficoPreview;
    GraficoAmpliado graficoAmpliado;

    ThComDevice thComDevice;
    ThCore thCore;
    DiagramaBloquesManager diagramaBloquesManager;
    Crypto3Des cripto;

    bool loadTableExperimentos();
    bool loadTableUsuarios();

    int idPerfil;
    int idExperimentoActual;
    int idExperimentoSeleccionado;
    int idUsuarioActual;
    QString userName;

    int parametroNivelCargaActual;
    QString unidadParametroSeleccionada;

    QTimer* timerCountDownCarga;
    bool processPuased;

    bool saveMediciones();

private slots:
    void on_actionVersion_triggered();
    void on_tablaUsuarios_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void on_btnAmpliar_clicked();
    void on_tablaExperimentos_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void on_btnDeleteExperimento_clicked();
    void on_btnDisparo_clicked();
    void on_btnPause_clicked();
    void on_btnStop_clicked();
    void on_btnNuevoExperimento_clicked();
    void on_Actuador3_toggled(bool checked);
    void on_Actuador2_toggled(bool checked);
    void on_Actuador1_toggled(bool checked);
    void on_cleanLogRecieve_clicked();
    void on_cleanLogSend_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_btnExportCSV_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_9_clicked();

    void on_tablaUsuarios_cellClicked(int row, int column);

    void on_btnAddUser_clicked();

    void on_btnDeleteUser_clicked();

    void on_btnUpdateUser_clicked();

    void setNivelCarga(int value);

    void procesoTermiando();

    void procesoCargaTerminado();

    void on_tablaExperimentos_cellClicked(int row, int column);

    void changeTextStatusBar(QString str,int timeout=-1);

    void setProcesoDetensionTerminado();

    void on_pushButton_2_clicked();

    void on_pushButton_10_clicked();

    void setProgresoRecepcionDatos(int value, int total);

signals:
    void SendMsgToUART(QString msg);
    void SendMsgToUART(QByteArray msg);
    void datosGuardadosCorrectamente();

public slots:
    void closeEvent(QCloseEvent *event);
    void ReceiveMsgFromUART(QString msg);
    void SendMsgFromUART(QString msg);
    void setValueTensionFuenteDiagrama(unsigned int value);
    void setValueTensionCapacitoresDiagrama(unsigned int value);
    void ReceiveADC2Value(unsigned int value);
    void logCmdSend(cmdPcCom cmd);
    void saveMediciones(QVector<short>* indexMuestas, QVector<short>* muestras);
};

#endif // QUECAS_H
