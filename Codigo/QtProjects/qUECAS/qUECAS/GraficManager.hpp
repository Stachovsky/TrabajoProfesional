#ifndef GRAFICMANAGER_HPP
#define GRAFICMANAGER_HPP

#include <QDebug>
#include <QString>
#include <QWidget>
#include <QPainter>
#include <QVector>
#include <QThread>

#include "GraficElement.hpp"

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

typedef enum {
    STATE_CARGANDO,
    STATE_DESCARGADO,
    STATE_DESCARGA,
    STATE_DESACTIVADO,
    STATE_HV_ENABLED,
    STATE_CARGADO
} state_Diagrama;

//////////////////////////////////////////////////////////////////

class DiagramaBloques:public QWidget{

    Q_OBJECT
public:

    DiagramaBloques();
    ~DiagramaBloques();

    void addElement( GraficElement* element);
    GraficElement* getElementByIndex(int index);

    // Elementos del diagrama
    Box* linea220v;
    Wire* wire1;
    Box* fuente1000v;
    Wire* wire2;
    ContactorHorizontal* contactor1;
    Wire* wire3;
    Wire* wire10;
    Box* bancoCapacitores;
    Wire* wire4;
    Wire* wire11;
    ContactorHorizontal* contactor2;
    Wire* wire5;
    Box* muestra;

    Wire* wire6;
    Wire* wire12;
    ContactorHorizontal* contactor3;
    Wire* wire7;
    Box* bancoResistencias;

    Light* lightRed;
    Light* lightYellow;
    Light* lightGreen;

    Wire* wire8;
    Box* sensorTensionFuente;
    Wire* wire9;
    Box* sensorTensionCapactiores;

private:

    QVector<GraficElement*> elements;


private slots:

    void paintEvent(QPaintEvent * paintEvent);
    void loadDiagramaElements();
};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class DiagramaBloquesManager:public QThread{
    Q_OBJECT
public:

    DiagramaBloquesManager();
    ~DiagramaBloquesManager();

    void run();

    DiagramaBloques* getDiagrama(){ return this->diagrama; }

    void setValueSensorTensionFuente(float value);
    void setValueSensorTensionCapactiores(float value);

public slots:
    void setState(int state);

private:

    DiagramaBloques* diagrama;
    state_Diagrama state;

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

#endif // GRAFICMANAGER_HPP
