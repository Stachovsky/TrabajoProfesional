#include "sensoresbaseboard.h"
#include "ui_sensoresbaseboard.h"
#include "serialport.h"

#include "QDebug"
#include "QString"
#include "QStringList"
#include "string"

using namespace std;

SensoresBaseBoard::SensoresBaseBoard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SensoresBaseBoard)
{
    ui->setupUi(this);

    // se configura el evento del timer
    this->timer = new QTimer(this);
    connect(this->timer, SIGNAL(timeout()), this, SLOT(pulling()));
    timer->start(100);

    ui->ledValue->setText("All Off");
}

SensoresBaseBoard::~SensoresBaseBoard()
{
    delete ui;
}

void SensoresBaseBoard::pulling(void){

    char bufferTransmit[1];
    char bufferRecive[20];
    int n;

    SerialPort puerto;
    puerto.openPort();


    // valor acelerometro
    bufferTransmit[0] = 'A';
    puerto.sendToPort(bufferTransmit,1);

    n = puerto.readFromPort(bufferRecive,20);

    if(n != 0){
        bufferRecive[n] = '\0';
        QString dataAcelerometro = bufferRecive;

        QStringList coordenadas = dataAcelerometro.split(';');

        ui->ejeXValue->setText(coordenadas[0]);
        ui->ejeXvalueBar->setValue(coordenadas[0].toInt());

        ui->ejeYValue->setText(coordenadas[1]);
        ui->ejeYvalueBar->setValue(coordenadas[1].toInt());

        ui->ejeZValue->setText(coordenadas[2]);
        ui->ejeZvalueBar->setValue(coordenadas[2].toInt());
    }


    // valor sensor de luz

    bufferTransmit[0] = 'L';
    puerto.sendToPort(bufferTransmit,1);

    n = puerto.readFromPort(bufferRecive,10);

    if(n != 0){
        bufferRecive[n] = '\0';
        QString luzValor = bufferRecive;
        ui->luzValue->setText(luzValor);
        ui->luzValueBar->setValue(luzValor.toUInt());
    }


    // valor ADC

    bufferTransmit[0] = 'C';
    puerto.sendToPort(bufferTransmit,1);

    n = puerto.readFromPort(bufferRecive,10);

    if(n != 0){
        short adcValueInt;
        unsigned char* paux;
        paux = (unsigned char*)&adcValueInt;

        paux[0] = bufferRecive[1];
        paux[1] = bufferRecive[0];

        ui->adcValue->setText(QString::number(adcValueInt));
        ui->adcValueBar->setValue(adcValueInt);

    }

    // valor Temperatura

    bufferTransmit[0] = 'T';
    puerto.sendToPort(bufferTransmit,1);

    n = puerto.readFromPort(bufferRecive,10);

    if(n != 0){
        short tempValueInt;
        unsigned char* paux;
        paux = (unsigned char*)&tempValueInt;

        qDebug() << "T0: " << (int)bufferRecive[0];
        qDebug() << "T1: "  << (int)bufferRecive[1];

        paux[0] = bufferRecive[0];
        paux[1] = bufferRecive[1];

        ui->tempValue->setText(QString::number(tempValueInt));
        ui->tempValueBar->setValue(tempValueInt);

    }


    puerto.closePort();

    // se resetea el timer
    timer->start(100);

}

void SensoresBaseBoard::on_ledsValue_valueChanged(int value)
{
    char bufferTransmit[1];

    SerialPort puerto;
    puerto.openPort();

    bufferTransmit[0] = 'E';
    puerto.sendToPort(bufferTransmit,1);

    if(value != -1){
        ui->ledValue->setText("Led " + QString::number(value) + " On");
    }else{
        ui->ledValue->setText("All Off");
    }

//    qDebug() << value;
    bufferTransmit[0] = value;
    puerto.sendToPort(bufferTransmit,1);

    puerto.closePort();
}

void SensoresBaseBoard::on_seg7ValueBar_valueChanged(int value)
{
    char bufferTransmit[1];

    SerialPort puerto;
    puerto.openPort();

    bufferTransmit[0] = 'D';
    puerto.sendToPort(bufferTransmit,1);

    ui->seg7Value->setText(QString::number(value));

//    qDebug() << value;
    bufferTransmit[0] = value;
    puerto.sendToPort(bufferTransmit,1);

    puerto.closePort();

}

void SensoresBaseBoard::on_ledRed_toggled(bool checked)
{
    char bufferTransmit[1];

    SerialPort puerto;
    puerto.openPort();

    bufferTransmit[0] = 'r';
    puerto.sendToPort(bufferTransmit,1);

    puerto.closePort();
}

void SensoresBaseBoard::on_ledGreen_toggled(bool checked)
{
    char bufferTransmit[1];

    SerialPort puerto;
    puerto.openPort();

    bufferTransmit[0] = 'g';
    puerto.sendToPort(bufferTransmit,1);

    puerto.closePort();
}

void SensoresBaseBoard::on_ledBlue_toggled(bool checked)
{
    char bufferTransmit[1];

    SerialPort puerto;
    puerto.openPort();

    bufferTransmit[0] = 'b';
    puerto.sendToPort(bufferTransmit,1);

    puerto.closePort();
}
