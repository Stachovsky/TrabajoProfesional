#include "GraficManager.hpp"

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

DiagramaBloques::DiagramaBloques(){

    QPalette Pal(palette());
    Pal.setColor(QPalette::Background, Qt::white);
    this->setAutoFillBackground(true);
    this->setPalette(Pal);

    this->loadDiagramaElements();

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

DiagramaBloques::~DiagramaBloques(){

    // Se libera la memoria
    for(int i = 0; i < this->elements.size();i++){
        delete this->elements[i];
    }

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloques::addElement( GraficElement* element){

    this->elements.push_back(element);

}
//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

GraficElement* DiagramaBloques::getElementByIndex(int index){

    GraficElement* r = NULL;

    if(index > 0 && index <= this->elements.size()){
        r = this->elements[index];
    }

    return r;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloques::loadDiagramaElements(){

    this->linea220v = new Box(0, 40, 75, 50, "Linea\n220v/50Hz");
    this->wire1 = new Wire(75,65,40,0);
    this->fuente1000v = new Box(125, 40,75, 50, "Fuente de\n1000v");
    this->wire2 = new Wire(200,65,40,0);
    this->contactor1 = new ContactorHorizontal(250,40,80,50, "Contactor 1", NA,STATE_OPEN);
    this->wire3 = new Wire(330,65,55,0);
    this->wire10 = new Wire(395,65,150,0);
    this->bancoCapacitores = new Box(520,90,80, 50, "Banco de\n Capacitores");
    this->wire4 = new Wire(565,65,75,0);
    this->wire11 = new Wire(555,65,0,20);
    this->contactor2 = new ContactorHorizontal(650,40,80,50,"Contactor 2", NA, STATE_OPEN);
    this->wire5 = new Wire(730,65,40,0);
    this->muestra = new Box(780, 40,80,50, "Muestra");

    this->wire6 = new Wire(395,75,0,140);
    this->wire12 = new Wire(395,225,55,0);
    this->contactor3 = new ContactorHorizontal(460,200,80,50, "Contactor 3", NC, STATE_OPEN,TEXT_DOWN);
    this->wire7 = new Wire(540,225,70,0);
    this->bancoResistencias = new Box(620,200,80,50, "Banco\nResistencias");


    this->lightGreen = new Light(60,160,40);
    lightGreen->setColor(GraficElement::C_GREEN);
    lightGreen->setState(STATE_OFF);
    lightGreen->setBlinkingPeriod(1);

    this->lightYellow = new Light(60,220,40);
    lightYellow->setColor(GraficElement::C_YELLOW);
    lightYellow->setState(STATE_OFF);
    lightYellow->setBlinkingPeriod(1);

    this->lightRed = new Light(60,280,40);
    lightRed->setColor(GraficElement::C_RED);
    lightRed->setState(STATE_OFF);
    lightRed->setBlinkingPeriod(1);


    this->wire8 = new Wire(225,6,0,54,2);
    wire8->setPenStyle(Qt::DashLine);
    this->sensorTensionFuente = new Box(185,-45,80,50, "0V");

    this->wire9 = new Wire(558,6,0,54,2);
    wire9->setPenStyle(Qt::DashLine);
    this->sensorTensionCapactiores= new Box(518,-45,80,50, "0V");

    this->addElement(this->linea220v);
    this->addElement(this->wire1);
    this->addElement(this->fuente1000v);
    this->addElement(this->wire2);
    this->addElement(this->contactor1);
    this->addElement(this->wire3);
    this->addElement(this->wire10);
    this->addElement(this->bancoCapacitores);
    this->addElement(this->wire4);
    this->addElement(this->wire11);
    this->addElement(this->contactor2);
    this->addElement(this->wire5);
    this->addElement(this->muestra);

    this->addElement(this->wire6);
    this->addElement(this->wire12);
    this->addElement(this->contactor3);
    this->addElement(this->wire7);
    this->addElement(this->bancoResistencias);

    this->addElement(this->lightRed);
    this->addElement(this->lightYellow);
    this->addElement(this->lightGreen);

    this->addElement(this->wire8);
    this->addElement(this->sensorTensionFuente);
    this->addElement(this->wire9);
    this->addElement(this->sensorTensionCapactiores);




}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloques::paintEvent(QPaintEvent * paintEvent){

    this->setGeometry(50,0,900,450);

    for(int i = 0; i < this->elements.size();i++){
        this->elements[i]->draw(this,10,70);
    }

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

DiagramaBloquesManager::DiagramaBloquesManager(){

    this->diagrama = new DiagramaBloques();
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

DiagramaBloquesManager::~DiagramaBloquesManager(){

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloquesManager::run(){

    while(1){
        this->diagrama->update();
        msleep(250);
    }

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloquesManager::setValueSensorTensionFuente(float value){

    this->diagrama->sensorTensionFuente->setText(QString::number(value) + "V");

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloquesManager::setValueSensorTensionCapactiores(float value){

    this->diagrama->sensorTensionCapactiores->setText(QString::number(value) + "V");

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void DiagramaBloquesManager::setState(int state){

    this->state = (state_Diagrama)state;

    switch(this->state){

        case STATE_DESACTIVADO:

            this->getDiagrama()->contactor1->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire1->setColor(0);
            this->getDiagrama()->wire2->setColor(0);
            this->getDiagrama()->wire3->setColor(0);
            this->getDiagrama()->wire10->setColor(0);
            this->getDiagrama()->wire11->setColor(0);
            this->getDiagrama()->wire1->setState(STATE_OFF);
            this->getDiagrama()->wire2->setState(STATE_OFF);
            this->getDiagrama()->wire3->setState(STATE_OFF);
            this->getDiagrama()->wire10->setState(STATE_OFF);
            this->getDiagrama()->wire11->setState(STATE_OFF);

            this->getDiagrama()->contactor2->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire4->setColor(0);
            this->getDiagrama()->wire5->setColor(0);
            this->getDiagrama()->wire4->setState(STATE_OFF);
            this->getDiagrama()->wire5->setState(STATE_OFF);

            this->getDiagrama()->contactor3->setState(STATE_CLOSE,STATE_NO_PRESENT);
            this->getDiagrama()->wire6->setColor(0);
            this->getDiagrama()->wire7->setColor(0);
            this->getDiagrama()->wire12->setColor(0);
            this->getDiagrama()->wire6->setState(STATE_OFF);
            this->getDiagrama()->wire7->setState(STATE_OFF);
            this->getDiagrama()->wire12->setState(STATE_OFF);

            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_OFF);
            this->getDiagrama()->lightGreen->setState(STATE_OFF);

            this->getDiagrama()->wire8->setColor(0);
            this->getDiagrama()->wire9->setColor(0);

            break;

        case STATE_HV_ENABLED:

            this->getDiagrama()->contactor1->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire1->setColor(1);
            this->getDiagrama()->wire2->setColor(1);
            this->getDiagrama()->wire3->setColor(0);
            this->getDiagrama()->wire10->setColor(0);
            this->getDiagrama()->wire11->setColor(0);
            this->getDiagrama()->wire1->setState(STATE_OFF);
            this->getDiagrama()->wire2->setState(STATE_OFF);
            this->getDiagrama()->wire3->setState(STATE_OFF);
            this->getDiagrama()->wire10->setState(STATE_OFF);
            this->getDiagrama()->wire11->setState(STATE_OFF);

            this->getDiagrama()->contactor2->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire4->setColor(0);
            this->getDiagrama()->wire5->setColor(0);
            this->getDiagrama()->wire4->setState(STATE_OFF);
            this->getDiagrama()->wire5->setState(STATE_OFF);

            this->getDiagrama()->contactor3->setState(STATE_CLOSE,STATE_NO_PRESENT);
            this->getDiagrama()->wire6->setColor(0);
            this->getDiagrama()->wire7->setColor(0);
            this->getDiagrama()->wire12->setColor(0);
            this->getDiagrama()->wire6->setState(STATE_OFF);
            this->getDiagrama()->wire7->setState(STATE_OFF);
            this->getDiagrama()->wire12->setState(STATE_OFF);

            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_BLINKING);
            this->getDiagrama()->lightGreen->setState(STATE_OFF);

            this->getDiagrama()->wire8->setColor(1);
            this->getDiagrama()->wire9->setColor(0);

            break;

        case  STATE_CARGANDO:

            this->getDiagrama()->contactor1->setState(STATE_CLOSE,STATE_PRESENT);
            this->getDiagrama()->wire1->setColor(1);
            this->getDiagrama()->wire2->setColor(1);
            this->getDiagrama()->wire3->setColor(1);
            this->getDiagrama()->wire10->setColor(1);
            this->getDiagrama()->wire11->setColor(1);

            this->getDiagrama()->wire1->setState(STATE_BLINKING);
            this->getDiagrama()->wire2->setState(STATE_BLINKING);
            this->getDiagrama()->wire3->setState(STATE_BLINKING);
            this->getDiagrama()->wire10->setState(STATE_BLINKING);
            this->getDiagrama()->wire11->setState(STATE_BLINKING);

            this->getDiagrama()->contactor2->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire4->setColor(0);
            this->getDiagrama()->wire5->setColor(0);
            this->getDiagrama()->wire4->setState(STATE_OFF);
            this->getDiagrama()->wire5->setState(STATE_OFF);

            this->getDiagrama()->contactor3->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire6->setColor(0);
            this->getDiagrama()->wire7->setColor(0);
            this->getDiagrama()->wire12->setColor(0);
            this->getDiagrama()->wire6->setState(STATE_OFF);
            this->getDiagrama()->wire7->setState(STATE_OFF);
            this->getDiagrama()->wire12->setState(STATE_OFF);


            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_BLINKING);
            this->getDiagrama()->lightGreen->setState(STATE_BLINKING);

            this->getDiagrama()->wire8->setColor(1);
            this->getDiagrama()->wire9->setColor(1);

            break;

        case STATE_CARGADO:
            this->getDiagrama()->contactor1->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire1->setColor(0);
            this->getDiagrama()->wire2->setColor(0);
            this->getDiagrama()->wire3->setColor(0);
            this->getDiagrama()->wire10->setColor(0);
            this->getDiagrama()->wire11->setColor(1);

            this->getDiagrama()->wire1->setState(STATE_OFF);
            this->getDiagrama()->wire2->setState(STATE_OFF);
            this->getDiagrama()->wire3->setState(STATE_OFF);
            this->getDiagrama()->wire10->setState(STATE_OFF);
            this->getDiagrama()->wire11->setState(STATE_ON);

            this->getDiagrama()->contactor2->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire4->setColor(1);
            this->getDiagrama()->wire5->setColor(0);
            this->getDiagrama()->wire4->setState(STATE_ON);
            this->getDiagrama()->wire5->setState(STATE_OFF);

            this->getDiagrama()->contactor3->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire6->setColor(0);
            this->getDiagrama()->wire7->setColor(0);
            this->getDiagrama()->wire12->setColor(0);
            this->getDiagrama()->wire6->setState(STATE_OFF);
            this->getDiagrama()->wire7->setState(STATE_OFF);
            this->getDiagrama()->wire12->setState(STATE_OFF);

            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_OFF);
            this->getDiagrama()->lightGreen->setState(STATE_BLINKING);

            this->getDiagrama()->wire8->setColor(0);
            this->getDiagrama()->wire9->setColor(1);

            break;

        case STATE_DESCARGADO:

            this->getDiagrama()->contactor1->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire1->setColor(0);
            this->getDiagrama()->wire2->setColor(0);
            this->getDiagrama()->wire3->setColor(0);
            this->getDiagrama()->wire10->setColor(1);
            this->getDiagrama()->wire11->setColor(1);

            this->getDiagrama()->wire1->setState(STATE_OFF);
            this->getDiagrama()->wire2->setState(STATE_OFF);
            this->getDiagrama()->wire3->setState(STATE_OFF);
            this->getDiagrama()->wire10->setState(STATE_BLINKING);
            this->getDiagrama()->wire11->setState(STATE_BLINKING);

            this->getDiagrama()->contactor2->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire4->setColor(0);
            this->getDiagrama()->wire5->setColor(0);
            this->getDiagrama()->wire4->setState(STATE_OFF);
            this->getDiagrama()->wire5->setState(STATE_OFF);

            this->getDiagrama()->contactor3->setState(STATE_CLOSE,STATE_PRESENT);
            this->getDiagrama()->wire6->setColor(1);
            this->getDiagrama()->wire7->setColor(1);
            this->getDiagrama()->wire12->setColor(1);
            this->getDiagrama()->wire6->setState(STATE_BLINKING);
            this->getDiagrama()->wire7->setState(STATE_BLINKING);
            this->getDiagrama()->wire12->setState(STATE_BLINKING);

            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_BLINKING);
            this->getDiagrama()->lightGreen->setState(STATE_OFF);

            this->getDiagrama()->wire8->setColor(0);
            this->getDiagrama()->wire9->setColor(1);

            break;

        case STATE_DESCARGA:

            this->getDiagrama()->contactor1->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire1->setColor(0);
            this->getDiagrama()->wire2->setColor(0);
            this->getDiagrama()->wire3->setColor(0);
            this->getDiagrama()->wire10->setColor(0);
            this->getDiagrama()->wire11->setColor(1);
            this->getDiagrama()->wire1->setState(STATE_OFF);
            this->getDiagrama()->wire2->setState(STATE_OFF);
            this->getDiagrama()->wire3->setState(STATE_OFF);
            this->getDiagrama()->wire10->setState(STATE_OFF);
            this->getDiagrama()->wire11->setState(STATE_BLINKING);

            this->getDiagrama()->contactor2->setState(STATE_CLOSE,STATE_PRESENT);
            this->getDiagrama()->wire4->setColor(1);
            this->getDiagrama()->wire5->setColor(1);
            this->getDiagrama()->wire4->setState(STATE_BLINKING);
            this->getDiagrama()->wire5->setState(STATE_BLINKING);

            this->getDiagrama()->contactor3->setState(STATE_OPEN,STATE_NO_PRESENT);
            this->getDiagrama()->wire6->setColor(0);
            this->getDiagrama()->wire7->setColor(0);
            this->getDiagrama()->wire12->setColor(0);
            this->getDiagrama()->wire6->setState(STATE_OFF);
            this->getDiagrama()->wire7->setState(STATE_OFF);
            this->getDiagrama()->wire12->setState(STATE_OFF);

            this->getDiagrama()->lightRed->setState(STATE_OFF);
            this->getDiagrama()->lightYellow->setState(STATE_BLINKING);
            this->getDiagrama()->lightGreen->setState(STATE_BLINKING);

            this->getDiagrama()->wire8->setColor(0);
            this->getDiagrama()->wire9->setColor(1);

            break;

    }

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
