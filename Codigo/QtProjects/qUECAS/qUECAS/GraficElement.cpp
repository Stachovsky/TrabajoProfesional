
#include "GraficElement.hpp"

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

GraficElement::GraficElement(){
    this->color = 0;
    this->x = 0;
    this->y = 0;
    this->blinkPeriod = DEFAULT_BLINKING_HALF_PERIOD;
    this->penStyle = Qt::SolidLine;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

GraficElement::~GraficElement(){

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Light::Light(){

    this->x = 0;
    this->y = 0;
    this->r = 0;
    this->state = STATE_ON;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////


Light::Light(int x, int y, int r){

    this->x = x;
    this->y = y;
    this->r = r;
    this->counter = 0;
    this->state = STATE_ON;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Light::~Light(){

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void Light::draw(QWidget* drawArea,int offset_x,int offset_y){

    int currentColor;

    QPainter painter(drawArea);

    QRect rec(this->x - this->r/2 + offset_x,this->y - this->r/2 + offset_y,this->r,this->r);

    switch(this->state){

        case STATE_ON:
            currentColor = this->color;
            break;

        case STATE_OFF:
            currentColor = C_BLACK;
            break;

        case STATE_BLINKING:
            this->counter = 0;
            this->state = STATE_BLINKING_ON;
            break;

        case STATE_BLINKING_ON:
            this->counter++;
            currentColor = this->color;
            if(this->counter > this->blinkPeriod){
                this->counter = 0;
                this->state = STATE_BLINKING_OFF;
            }
            break;

        case STATE_BLINKING_OFF:
            this->counter++;
            currentColor = C_BLACK;
            if(this->counter > this->blinkPeriod){
                this->counter = 0;
                this->state = STATE_BLINKING_ON;
            }
            break;

    }

    QPen pen;
    pen.setStyle(this->penStyle);
    pen.setWidth(2);

    QBrush brush;
    brush.setStyle(Qt::SolidPattern);

    switch(currentColor){
        case 0:
            brush.setColor(QColor("black"));
            pen.setColor(QColor("black"));
            break;
        case 1:
            brush.setColor(QColor(255,0,0,255));
            pen.setColor(QColor(255,0,0,255));
            break;
        case 2:
            brush.setColor(QColor(0,0,255,255));
            pen.setColor(QColor(0,0,255,255));
            break;
        case 3:
            brush.setColor(QColor("yellow"));
            pen.setColor(QColor("yellow"));
            break;
        case 4:
            pen.setColor(QColor(0,255,0,255));
            brush.setColor(QColor(0,255,0,255));
            break;
    }

    pen.setColor(QColor("black"));

    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawEllipse(rec);

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Wire::Wire(int xo, int yo, int w, int h, int ps){
    this->x = xo;
    this->y = yo;
    this->width = w;
    this->heigth = h;
    this->penSize = ps;
    this->state = STATE_OFF;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Wire::Wire(){

    this->x = 0;
    this->y = 0;
    this->width = 0;
    this->heigth = 0;
    this->penSize = 10;
    this->state = STATE_OFF;
}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Wire::~Wire(){

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

void Wire::draw(QWidget* drawArea, int offset_x, int offset_y){

    QPainter painter(drawArea);

    QLine line(this->x + this->penSize/2 + offset_x,this->y + offset_y,this->x + this->width + this->penSize/2 + offset_x,this->y + this->heigth + offset_y);

    QPen pen;
    pen.setStyle(this->penStyle);
    pen.setWidth(this->penSize);

    switch(this->color){
        case 0:
            pen.setColor(QColor("black"));
            break;
        case 1:
            pen.setColor(QColor("red"));
            break;
        case 2:
            pen.setColor(QColor("blue"));
            break;
        case 3:
            pen.setColor(QColor("yellow"));
            break;
        case 4:
            pen.setColor(QColor("green"));
            break;
    }


    switch(this->state){

        case STATE_ON:
            pen.setStyle(this->penStyle);
            break;

        case STATE_OFF:
            pen.setStyle(this->penStyle);
            break;

        case STATE_BLINKING:
            this->counter = 0;
            this->state = STATE_BLINKING_ON;
            break;

        case STATE_BLINKING_ON:
            this->counter++;
            pen.setStyle(Qt::DotLine);
            if(this->counter > this->blinkPeriod){
                this->counter = 0;
                this->state = STATE_BLINKING_OFF;

            }
            break;

        case STATE_BLINKING_OFF:
            this->counter++;
            if(this->counter > this->blinkPeriod){
                this->counter = 0;
                this->state =  STATE_BLINKING_ON;

            }
            break;

    }


    painter.setPen(pen);

    painter.drawLine(line);

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

Box::Box(){
}


Box::~Box(){
}

Box::Box(int x, int y, int w, int h,QString text){

    this->x = x;
    this->y = y;
    this->width = w;
    this->heigth = h;
    this->text = text;
    this->penSize = 1;

}

void Box::draw(QWidget* drawArea,int offset_x ,int offset_y){

    QPainter painter(drawArea);

    QRect rect(this->x + offset_x,this->y + offset_y,this->width,this->heigth);


    QPen pen;
    pen.setStyle(this->penStyle);

    switch(this->color){
        case 0:
            pen.setColor(QColor("black"));
            break;
        case 1:
            pen.setColor(QColor("red"));
            break;
        case 2:
            pen.setColor(QColor("blue"));
            break;
        case 3:
            pen.setColor(QColor("yellow"));
            break;
        case 4:
            pen.setColor(QColor("green"));
            break;
    }

    pen.setWidth(this->penSize);
    painter.setPen(pen);

    painter.drawRect(rect);
    painter.drawText(rect, Qt::AlignCenter, this->text);

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

ContactorHorizontal::ContactorHorizontal(){
}


ContactorHorizontal::~ContactorHorizontal(){
}

ContactorHorizontal::ContactorHorizontal(int x, int y, int w, int h,QString text, contactorType type, statesContactor state,textContactorPosition textPosition,statesCurrent stateCurrent){

    this->x = x;
    this->y = y;
    this->width = w;
    this->heigth = h;
    this->text = text;
    this->penSize = 1;
    this->state = state;
    this->stateCurrent = stateCurrent;
    this->textPosition = textPosition;
    this->type = type;

}

void ContactorHorizontal::draw(QWidget* drawArea,int offset_x ,int offset_y){

    QPainter painter(drawArea);

    QPen pen;
    pen.setStyle(this->penStyle);

    switch(this->color){
        case 0:
            pen.setColor(QColor("black"));
            break;
        case 1:
            pen.setColor(QColor("red"));
            break;
        case 2:
            pen.setColor(QColor("blue"));
            break;
        case 3:
            pen.setColor(QColor("yellow"));
            break;
        case 4:
        pen.setColor(QColor(QRgb("#00FF00")));
            break;
    }

    pen.setWidth(this->penSize);
    painter.setPen(pen);

    QRect rect(this->x + offset_x,this->y + offset_y,this->width,this->heigth);
    painter.drawRect(rect);

    this->penSize = 6;
    pen.setWidth(this->penSize);
    painter.setPen(pen);

    if(this->stateCurrent == STATE_PRESENT){
        pen.setColor(QColor("red"));
        painter.setPen(pen);
    }
    else if(this->stateCurrent == STATE_NO_PRESENT){
        pen.setColor(QColor("black"));
        painter.setPen(pen);
    }

    QLine l0(
                this->x + offset_x + this->penSize/2,
                this->y + offset_y + this->heigth*0.5,
                this->x + offset_x + this->width* 0.3 - this->penSize/2,
                this->y + offset_y + this->heigth*0.5
             );
    painter.drawLine(l0);

    QLine l1(
                this->x + offset_x +  this->width*0.7 + this->penSize/2,
                this->y + offset_y + this->heigth*0.5,
                this->x + offset_x + this->width  - this->penSize/2,
                this->y + offset_y + this->heigth*0.5
             );
    painter.drawLine(l1);


    if(this->type == NA){
        switch(this->state){
            case STATE_OPEN:
                   painter.drawLine(QLine(
                        this->x + offset_x + this->width* 0.3,
                        this->y + offset_y + this->heigth*0.5,
                        this->x + offset_x + this->width* 0.7,
                        this->y + offset_y + this->heigth*0.3
                     ));
                break;

            case STATE_CLOSE:
                    painter.drawLine(QLine(
                        this->x + offset_x + this->width* 0.3,
                        this->y + offset_y + this->heigth*0.5,
                        this->x + offset_x + this->width* 0.7,
                        this->y + offset_y + this->heigth*0.5
                     ));

               break;
        }
    }
    else if(this->type == NC){
        switch(this->state){
            case STATE_OPEN:
                   painter.drawLine(QLine(
                        this->x + offset_x + this->width* 0.3,
                        this->y + offset_y + this->heigth*0.5,
                        this->x + offset_x + this->width* 0.7,
                        this->y + offset_y + this->heigth*0.3
                     ));
                break;

            case STATE_CLOSE:
                    painter.drawLine(QLine(
                         this->x + offset_x + this->width* 0.3,
                         this->y + offset_y + this->heigth*0.5,
                         this->x + offset_x + this->width* 0.7,
                         this->y + offset_y + this->heigth*0.3
                      ));

                    painter.drawLine(QLine(
                        this->x + offset_x + this->width* 0.71,
                        this->y + offset_y + this->heigth*0.3,
                        this->x + offset_x + this->width* 0.71,
                        this->y + offset_y + this->heigth*0.5
                     ));

               break;
        }
    }

    pen.setColor(QColor("black"));
    this->penSize = 1;
    pen.setWidth(this->penSize);
    painter.setPen(pen);

    switch(this->textPosition){

        case TEXT_UP:
            painter.drawText(QRect(this->x + offset_x,this->y + offset_y - 20, this->width, 20),Qt::AlignCenter, this->text);
            break;

        case TEXT_DOWN:
            painter.drawText(QRect(this->x + offset_x,this->y + offset_y + this->heigth, this->width, 20),Qt::AlignCenter, this->text);
            break;
    }

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

ContactorVertical::ContactorVertical(){
}


ContactorVertical::~ContactorVertical(){
}

ContactorVertical::ContactorVertical(int x, int y, int w, int h,QString text, statesContactor state){

    this->x = x;
    this->y = y;
    this->width = w;
    this->heigth = h;
    this->text = text;
    this->penSize = 1;
    this->state = state;

}

void ContactorVertical::draw(QWidget* drawArea,int offset_x ,int offset_y){

    QPainter painter(drawArea);

    QPen pen;
    pen.setStyle(this->penStyle);

    switch(this->color){
        case 0:
            pen.setColor(QColor("black"));
            break;
        case 1:
            pen.setColor(QColor("red"));
            break;
        case 2:
            pen.setColor(QColor("blue"));
            break;
        case 3:
            pen.setColor(QColor("yellow"));
            break;
        case 4:
            pen.setColor(QColor("green"));
            break;
    }

    pen.setWidth(this->penSize);
    painter.setPen(pen);

    QRect rect(this->x + offset_x,this->y + offset_y,this->width,this->heigth);
    painter.drawRect(rect);

    this->penSize = 3;
    pen.setWidth(this->penSize);
    painter.setPen(pen);

    QLine l0(
                this->x + offset_x + this->width*0.5,
                this->y + offset_y,
                this->x + offset_x + this->width*0.5,
                this->y + offset_y + this->heigth*0.3
             );
    painter.drawLine(l0);

    QLine l1(
                this->x + offset_x + this->width*0.5,
                this->y + offset_y + this->heigth*0.7,
                this->x + offset_x + this->width*0.5,
                this->y + offset_y + this->heigth
             );
    painter.drawLine(l1);

    switch(this->state){
        case STATE_OPEN:
               painter.drawLine(QLine(
                    this->x + offset_x + this->width*0.5,
                    this->y + offset_y + this->heigth*0.3,
                    this->x + offset_x + this->width*0.65,
                    this->y + offset_y + this->heigth*0.7
                 ));
            break;

        case STATE_CLOSE:
               painter.drawLine(QLine(
                    this->x + offset_x + this->width*0.5,
                    this->y + offset_y + this->heigth*0.3,
                    this->x + offset_x + this->width*0.5,
                    this->y + offset_y + this->heigth*0.7
                 ));
           break;
    }

    this->penSize = 1;
    pen.setWidth(this->penSize);
    painter.setPen(pen);


    painter.drawText(QRect(this->x + offset_x + this->width/2 + 10,this->y + offset_y + this->heigth + 10, this->width, 10),Qt::AlignCenter, this->text);

}

//////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
