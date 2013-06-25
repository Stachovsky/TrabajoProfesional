#ifndef ThComDevice_H
#define ThComDevice_H

#include <QThread>
#include <QString>
#include <QDebug>
#include "SerialPort.h"

#define MAX_SIZE_RX_BUFFER_UART  27

extern "C" {
    #include "ProtocolPCComunication.h"
}


// sudo gedit /etc/udev/rules.d/50-ttyusb.rules
// KERNEL=="ttyUSB[0-9]*",NAME="tts/USB%n",SYMLINK+="%k",GROUP="uucp",MODE="0666"

class ThComDevice : public QThread
{
    Q_OBJECT
public:
    ThComDevice();
    ~ThComDevice();
    void run();

signals:
//    void ReceiveMsgFromUART(QString msg);
//    void setValueTensionFuente(unsigned int value);
//    void setValueTensionCapacitores(unsigned int value);
//    void ReceiveADC2Value(unsigned int value);
//    void ReceiveADC3Value(unsigned int value);
//    void ReceiveADC4Value(unsigned int value);

    void cmdReceiveFromDevice(cmdPcCom cmd);

public slots:
    void SendMsgToUART(QString msg);
    void SendMsgToUART(QByteArray msg);
    void quit();

private:
    SerialPort  port;
    bool finish;
};

#endif // ThComDevice_H
