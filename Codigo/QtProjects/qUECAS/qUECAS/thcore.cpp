#include "thcore.h"

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

ThCore::ThCore()
{
    this->state = STATE_INICIANDO;
    this->dataBaseManager = NULL;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

ThCore::~ThCore(){

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::run(){

    int espera = 100;
    cmdPcCom	cmdSend;
    unsigned char bufferPackedCmd[50];
    int sizeBufferPackedCmd;

//    if(this->dataBaseManager == NULL){
//        qDebug() << "Error en DataBase Manager";
//        return;
//    }

    while(true){

        switch(this->state){

            case STATE_INICIANDO:

                emit this->setTextStatusBar("Esperando Sincronismo",-1);
                state = STATE_ESPERANDO_SINCRONISMO;
                break;

            case STATE_ESPERANDO_SINCRONISMO:
                break;

            case STATE_SINCRONISMO_ESTABLECIDO:

                emit this->setStateDiagrama(STATE_DESACTIVADO);
                this->state = STATE_APAGADO;
                break;

            case STATE_APAGADO:

                espera = 100;
                this->state = STATE_MONITOREANDO;
                break;

            case STATE_MONITOREANDO:

                emit this->setTextStatusBar("Monitoreando",-1);
                break;

            case STATE_INICIALIZANDO:

                emit this->setStateDiagrama(STATE_DESACTIVADO);
                emit this->setTextStatusBar("Activando Fuente de Alta Tension",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_INIT_PROCESS);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                this->nivelCargaActual = 0;
                espera = 1000;
                this->state = STATE_FUENTE_HV_ACTIVADA;

                break;

            case STATE_FUENTE_HV_ACTIVADA:

                emit this->setStateDiagrama(STATE_HV_ENABLED);
                emit this->setTextStatusBar("Iniciando Proceso de Carga",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_ACTIVAR_HV);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                espera = 2000;
                this->state = STATE_INICIALIZANDO_CARGA;

                break;

            case STATE_INICIALIZANDO_CARGA:

                emit this->setStateDiagrama(STATE_CARGANDO);
                emit this->setTextStatusBar("Cargando Capacitores",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_INICIAR_CARGA);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                espera = 100;
                this->state = STATE_CARGANDO_CAPACITORES;

                break;

            case STATE_CARGANDO_CAPACITORES:

                this->nivelCargaActual = (this->tensionCapacitores*1500)/4095;

//                if(this->unidad == "V")
//                    this->nivelCargaActual += 25;
//                else if(this->unidad == "mQ")
//                    this->nivelCargaActual += 20;
//                else if(this->unidad == "%")
//                    this->nivelCargaActual += 2;

                if(this->nivelCarga != 0){
                    emit this->setNivelCargaBarraProgreso((this->nivelCargaActual*100)/this->nivelCarga);
                }else{
                    emit this->setNivelCargaBarraProgreso(0);
                }

                if(this->nivelCargaActual >= this->nivelCarga){
                    emit this->setCargaCompletada();
                    this->state = STATE_CAPACITORES_CARGADOS;
                }

                espera = 250;

                break;

            case STATE_CAPACITORES_CARGADOS:

                emit this->setStateDiagrama(STATE_CARGADO);
                emit this->setTextStatusBar("Capacitores cargados, Esperando Disparo",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_CARGA_TERMINADA);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                this->state = STATE_ESPERANDO_DISPARO;
                break;

            case STATE_REALIZANDO_DESCARGA:

                emit this->setStateDiagrama(STATE_DESCARGA);
                emit this->setTextStatusBar("Realizando Descarga sobre la Muestra",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_REALIZAR_DESCARGA);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                espera = 3000;
                this->state = STATE_DESCARGANDO_CAPACITORES;
                break;

            case STATE_DESCARGANDO_CAPACITORES:

                emit this->setStateDiagrama(STATE_DESCARGADO);
                emit this->setTextStatusBar("Descargando Capacitores",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_DESCARGA_TERMINADA);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                espera = 6000;
                this->state = STATE_PROCESANDO_DATOS;
                break;

            case STATE_PROCESANDO_DATOS:

                emit this->setStateDiagrama(STATE_DESACTIVADO);
                emit this->setTextStatusBar("Recibiendo Datos",-1);

                pcComInitMsg(&cmdSend,CMD_PCCOM_EVIAR_DATOS_DESCARGA);
                sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
                this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
                emit this->logCmdSend(cmdSend);
                this->msleep(100);

                this->muestras.clear();
                this->indiceMuestas.clear();

                espera = 2000;
                this->state = STATE_RECIBIENDO_DATOS;
                break;

            case STATE_RECIBIENDO_DATOS:

                espera = 100;
                break;

            case STATE_ESPERANDO_DISPARO:

                espera = 100;
                break;

            case STATE_PROCESO_PAUSADO:

                espera = 100;
                break;

            case STATE_PROCESO_EXITOSO:

                this->setTextStatusBar("Proceso Finalizado Exitosamente",-1);
                emit this->setProcesoTerminado();

                espera = 2000;
                this->state = STATE_APAGADO;
                break;

            case STATE_DETENIENDO_PROCESO:

                emit this->setStateDiagrama(STATE_DESCARGADO);
                emit this->setTextStatusBar("Deteniendo Proceso",-1);

                espera = 6000;
                this->state = STATE_DETENCION_EXITOSA;
                break;

            case STATE_DETENCION_EXITOSA:

                emit this->setProcesoDetensionTerminado();
                emit this->setStateDiagrama(STATE_DESACTIVADO);
                emit this->setTextStatusBar("Proceso Detenido Exitosamente",-1);

                espera = 2000;
                this->state = STATE_APAGADO;
                break;

            case STATE_GUARDANDO_DATOS:
                emit this->setTextStatusBar("Guardando Datos",-1);
//                emit this->sendMediciones( &this->indiceMuestas, &this->muestras );

                this->saveMediciones();

                  espera = 100;
                  this->state = STATE_PROCESO_EXITOSO;
//                espera = 100;
//                this->state = STATE_ESPERANDO_GUARDADO_DATOS;
                break;

            case STATE_ESPERANDO_GUARDADO_DATOS:
                espera = 100;
                break;

            case STATE_ERROR:

                emit this->setTextStatusBar("Error",-1);
                break;
        }

        this->msleep(espera);
    }
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::cmdReceiveFromDevice(cmdPcCom cmd){

    cmdPcCom	cmdSend;
    unsigned int valueADC;
    int sizeBufferPackedCmd;
    unsigned char bufferPackedCmd[50];

    this->logCmdRecieve(cmd);

    // Se procesa el comando

    if(cmd.cmdId == CMD_PCCOM_READ_ADC_0){
        valueADC = (int)cmd.data[0];
        valueADC |= (int)(cmd.data[1] << 8);
        this->tensionFuente = valueADC;
        emit this->setValueTensionFuenteDiagrama(valueADC);
    }

    if(cmd.cmdId == CMD_PCCOM_READ_ADC_1){
        valueADC = (int)cmd.data[0];
        valueADC |= (int)(cmd.data[1] << 8);
        this->tensionCapacitores = valueADC;
        emit this->setValueTensionCapacitoresDiagrama(valueADC);
    }

    if(cmd.cmdId == CMD_PCCOM_READ_ADC_2){
        valueADC = (int)cmd.data[0];
        valueADC |= (int)(cmd.data[1] << 8);
        this->corriente = valueADC;
        emit this->ReceiveADC2ValueDiagrama(valueADC);
    }

    if(cmd.cmdId == CMD_PCCOM_READ_ADC_3){
        valueADC = (int)cmd.data[0];
        valueADC |= (int)(cmd.data[1] << 8);
        emit this->ReceiveADC3ValueDiagrama(valueADC);
    }

    if(cmd.cmdId == CMD_PCCOM_READ_ADC_4){
        valueADC = (int)cmd.data[0];
        valueADC |= (int)(cmd.data[1] << 8);
        emit this->ReceiveADC4ValueDiagrama(valueADC);
    }

    if(cmd.cmdId == CMD_PCCOM_SYNC_REQUEST){
        pcComInitMsg(&cmdSend,CMD_PCCOM_SYNC_RESPONSE);
        sizeBufferPackedCmd = pcComPackMsg(&cmdSend,bufferPackedCmd,50);
        emit this->logCmdRecieve(cmdSend);
        this->SendMsgToUART(QByteArray::fromRawData((char*)bufferPackedCmd, sizeBufferPackedCmd));
        this->msleep(100);
        this->state = STATE_SINCRONISMO_ESTABLECIDO;

    }

    if(cmd.cmdId == CMD_PCCOM_VALUE_CURRENT){

        short indexMuestra;
        short muestra;
        short muestasRestantes;
        unsigned char* p;

        p = (unsigned char*)&indexMuestra;
        p[0] = cmd.data[0];
        p[1] = cmd.data[1];
        this->indiceMuestas.push_back(indexMuestra);

        p = (unsigned char*)&muestra;
        p[0] = cmd.data[2];
        p[1] = cmd.data[3];
        this->muestras.push_back(muestra);

        p = (unsigned char*)&muestasRestantes;
        p[0] = cmd.data[4];
        p[1] = cmd.data[5];

        emit this->setProgresoRecepcionDatos(NUMERO_MUESTRAS_SENSADO_DESCARGA - muestasRestantes, NUMERO_MUESTRAS_SENSADO_DESCARGA);

        if(muestasRestantes == 0){
            this->state = STATE_GUARDANDO_DATOS;
        }
    }

    if(cmd.cmdId == CMD_PCCOM_MONITOR){

    }
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::logCmdRecieve(cmdPcCom cmd){

    QString temp = "";
    temp += "-->[ ";
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
    emit this->ReceiveMsgFromUART(temp);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::iniciarProceso(int nivel, QString unidad){
    this->state = STATE_INICIALIZANDO;
    this->nivelCarga = nivel;
    this->unidad = unidad;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::pausarProcesoCarga(){
    this->state = STATE_PROCESO_PAUSADO;
    emit this->setStateDiagrama(STATE_HV_ENABLED);
    emit this->setTextStatusBar("Proceso Pausado",-1);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::reasumeProcesoCarga(){
    this->state = STATE_CARGANDO_CAPACITORES;
    emit this->setStateDiagrama(STATE_CARGANDO);
    emit this->setTextStatusBar("Cargando Capacitores",-1);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::disparoDescarga(){
    this->state = STATE_REALIZANDO_DESCARGA;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::detenerProceso(){
    this->state = STATE_DETENIENDO_PROCESO;
}

////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void ThCore::monitorear(){
    this->state = STATE_MONITOREANDO;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::setValueTensionFuente(unsigned int tensionFuente){

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::setValueTensionCapacitores(unsigned int tensionCapacitores){

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::ReceiveADC2Value(unsigned int corriente){

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::datosGuardadosCorrectamente(){

    this->state = STATE_PROCESO_EXITOSO;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThCore::saveMediciones(){

    QString query;

    query = "BEGIN TRANSACTION";
    this->dataBaseManager->queryDB(query);

    for(unsigned int i=0; i < this->muestras.size(); i++){
        query = "insert into resultados (idExperimento, Value) values (" + QString::number(this->idExperimentoActual) + "," + QString::number(muestras.at(i)) + ");";
        this->dataBaseManager->queryDB(query);
    }

    query = "END TRANSACTION";
    this->dataBaseManager->queryDB(query);

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

