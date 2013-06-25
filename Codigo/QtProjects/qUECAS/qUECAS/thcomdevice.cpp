#include "thcomdevice.h"

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

ThComDevice::ThComDevice(){

    this->finish = false;
    this->port.setPortName("/dev/ttyUSB0");
    this->port.setBaudRate(115200);
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

ThComDevice::~ThComDevice(){
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThComDevice::run(){

    unsigned char bufferRecive[MAX_SIZE_RX_BUFFER_UART];
    int bytesReceive = 0; // byte recibido
    cmdPcCom	cmd;
    stateReceptionMsg stateMsgRx = SRM_RECEIVING_START;
    int result = 0;

    while(true){
        this->port.setPortName("/dev/ttyUSB0");
        if(this->port.openPort()){
            qDebug() << "Port use: /dev/ttyUSB0";
            break;
        }

        this->port.setPortName("/dev/ttyUSB1");
        if(this->port.openPort()){
            qDebug() << "Port use: /dev/ttyUSB1";
            break;
        }
    }

    memset(bufferRecive,MAX_SIZE_RX_BUFFER_UART,0x00);
    bytesReceive = 0;

    while(true){

        bytesReceive = this->port.receiveFromPort(bufferRecive, MAX_SIZE_RX_BUFFER_UART, 2000);

        if(bytesReceive != 0){

            for(int i = 0; i < bytesReceive; i++){

//                qDebug() << QString(QByteArray((char*)&bufferRecive[i],1).toHex());

                result = pcComMachineState(&cmd, &stateMsgRx, bufferRecive[i]);

                // Se se puedo cargar el mensaje se encola
                if(result == PCCOM_RX_MSG_TERMINATE){

                    emit this->cmdReceiveFromDevice(cmd);

                }
            }
        }

    this->msleep(100);

    }
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThComDevice::SendMsgToUART(QString msg){

    //        this->port.sendToPort((char*)msg.toStdString().c_str());

    if(msg  == "Start"){

        unsigned char cmd = 0x02;
        this->port.sendToPort( cmd );
    }

}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////


void ThComDevice::SendMsgToUART(QByteArray msg){

    this->port.sendToPort((unsigned char*)msg.constData(),msg.size());
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void ThComDevice::quit(){

    this->finish = true;
}

////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
