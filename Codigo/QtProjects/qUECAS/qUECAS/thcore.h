#ifndef ThCore_H
#define ThCore_H

#include <QThread>
#include "GraficManager.hpp"
#include "thcomdevice.h"
#include "ProtocolPCComunication.h"
#include "DatabaseManager.h"

typedef enum{
    STATE_INICIANDO,
    STATE_ESPERANDO_SINCRONISMO,
    STATE_SINCRONISMO_ESTABLECIDO,
    STATE_APAGADO,
    STATE_MONITOREANDO,
    STATE_INICIALIZANDO,
    STATE_INICIALIZANDO_CARGA,
    STATE_FUENTE_HV_ACTIVADA,
    STATE_CARGANDO_CAPACITORES,
    STATE_CAPACITORES_CARGADOS,
    STATE_REALIZANDO_DESCARGA,
    STATE_RECIBIENDO_DATOS,
    STATE_DESCARGANDO_CAPACITORES,
    STATE_GUARDANDO_DATOS,
    STATE_PROCESO_PAUSADO,
    STATE_ESPERANDO_DISPARO,
    STATE_DETENIENDO_PROCESO,
    STATE_PROCESO_EXITOSO,
    STATE_DETENCION_EXITOSA,
    STATE_PROCESANDO_DATOS,
    STATE_ESPERANDO_GUARDADO_DATOS,
    STATE_ERROR
} stateCore;


class ThCore : public QThread
{
    Q_OBJECT
public:
    ThCore();
    ~ThCore();
    void run();

    void iniciarProceso(int nivel, QString unidad);
    void setDataBaseManager(DatabaseManager* dbm){ this->dataBaseManager = dbm;}
    void setCurrentIdExperimento(int idExperimento){ this->idExperimentoActual = idExperimento; }

signals:
    void setStateDiagrama(int state);
    void setNivelCargaBarraProgreso(int value);
    void setCargaCompletada();
    void setProcesoTerminado();
    void setProcesoDetensionTerminado();
    void setTextStatusBar(QString str,int);
    void setValueTensionFuenteDiagrama(unsigned int tensionFuente);
    void setValueTensionCapacitoresDiagrama(unsigned int tensionCapacitores);
    void ReceiveADC2ValueDiagrama(unsigned int corriente);
    void ReceiveADC3ValueDiagrama(unsigned int corriente);
    void ReceiveADC4ValueDiagrama(unsigned int corriente);
    void SendMsgToUART(QString msg);
    void SendMsgToUART(QByteArray msg);

    void ReceiveMsgFromUART(QString cmdLog);

    void logCmdSend(cmdPcCom cmd);

    void sendMediciones(QVector<short>* indexMuestas, QVector<short>* muestras);

    void setProgresoRecepcionDatos(int value, int total);

public slots:
    void pausarProcesoCarga();
    void reasumeProcesoCarga();
    void disparoDescarga();
    void detenerProceso();
    void monitorear();
    void cmdReceiveFromDevice(cmdPcCom cmd);
    void datosGuardadosCorrectamente();

private:
    stateCore   state;
    int nivelCargaActual;
    int nivelCarga;
    QString unidad;
    float escala;
    QVector<short> muestras;
    QVector<short> indiceMuestas;
    DatabaseManager* dataBaseManager;
    int idExperimentoActual;

    unsigned int tensionFuente;
    unsigned int tensionCapacitores;
    unsigned int corriente;

    void logCmdRecieve(cmdPcCom cmd);
    void setValueTensionFuente(unsigned int tensionFuente);
    void setValueTensionCapacitores(unsigned int tensionCapacitores);
    void ReceiveADC2Value(unsigned int corriente);
    void ReceiveADC3Value(unsigned int corriente);
    void ReceiveADC4Value(unsigned int corriente);

    void saveMediciones();

};

#endif // ThCore_H
