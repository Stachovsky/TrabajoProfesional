#ifndef GRAFICELEMENT_HPP
#define GRAFICELEMENT_HPP

#include <QDebug>
#include <QString>
#include <QWidget>
#include <QPainter>
#include <QVector>

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

#define DEFAULT_BLINKING_HALF_PERIOD 4 // En veces 250ms


//////////////////////////////////////////////////////////////////

typedef enum{ STATE_OPEN, STATE_CLOSE} statesContactor;
typedef enum{ NA, NC} contactorType;
typedef enum{ STATE_PRESENT, STATE_NO_PRESENT} statesCurrent;
typedef enum{ STATE_BLINKING, STATE_BLINKING_ON, STATE_BLINKING_OFF, STATE_OFF, STATE_ON} statesBlinking;
typedef enum{ TEXT_UP, TEXT_DOWN} textContactorPosition;

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class GraficElement
{

private:

protected:
   int color;
   int x;
   int y;
   QString text;
   int width;
   int heigth;
   int penSize;
   Qt::PenStyle penStyle;
   int blinkPeriod;

public:
    GraficElement();
    ~GraficElement();

    virtual void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0) = 0;
    void setColor(int i){ this->color = i; }
    void setPosition(int x,int y){ this->x = x;this->y = y; }
    void setPenSize(int ps){ this->penSize = ps; }
    void setPenStyle(Qt::PenStyle pstyle){ this->penStyle = pstyle; }

    typedef enum{C_BLACK, C_RED, C_BLUE, C_YELLOW, C_GREEN} colorType;

    void setBlinkingPeriod(int p){ this->blinkPeriod = p; }
    void setText(QString t){ this->text = t; }

};


//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class Light:public GraficElement
{

private:
    int r; // radio
    statesBlinking state;
    int counter;

public:
    Light();
    Light(int x, int y, int r);
   ~Light();
    void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0);
    void setColor(int i){ this->color = i; }
    void setState(statesBlinking s){ this->state = s; }

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class Wire:public GraficElement
{

private:
    int penSize;
    statesBlinking state;
    int counter;
public:
    Wire();
   ~Wire();
    Wire(int xo, int yo, int w, int h, int ps = 10);
    void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0);
    void setState(statesBlinking s){ this->state = s; }

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class Box:public GraficElement
{

private:

public:
    Box();
   ~Box();
    Box(int x, int y, int w, int h,QString text);
    void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0);

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class ContactorHorizontal:public GraficElement
{

private:
    statesContactor state;
    statesCurrent stateCurrent;
    textContactorPosition textPosition;
    contactorType type;

public:
    ContactorHorizontal();
   ~ContactorHorizontal();
    ContactorHorizontal(int x, int y, int w, int h,QString text = "", contactorType type = NA,statesContactor state = STATE_OPEN, textContactorPosition textPosition = TEXT_UP,statesCurrent stateCurrent = STATE_NO_PRESENT);
    void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0);

    void setState(statesContactor state,statesCurrent stateCurrent){this->state = state; this->stateCurrent=stateCurrent;}

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

class ContactorVertical:public GraficElement
{

private:
    statesContactor state;

public:
    ContactorVertical();
   ~ContactorVertical();
    ContactorVertical(int x, int y, int w, int h,QString text = "", statesContactor state = STATE_OPEN);
    void draw(QWidget* drawArea,int offset_x = 0,int offset_y = 0);

    void setState(statesContactor state){this->state = state;}

};

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

#endif // GRAFICELEMENT_HPP
