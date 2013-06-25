/********************************************************************************
** Form generated from reading UI file 'sensoresbaseboard.ui'
**
** Created: Tue Jun 5 21:42:16 2012
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENSORESBASEBOARD_H
#define UI_SENSORESBASEBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SensoresBaseBoard
{
public:
    QWidget *centralWidget;
    QLineEdit *ejeXValue;
    QLineEdit *ejeYValue;
    QLineEdit *ejeZValue;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *ejeXvalueBar;
    QSlider *ejeYvalueBar;
    QSlider *ejeZvalueBar;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *luzValueBar;
    QLabel *label_6;
    QLineEdit *luzValue;
    QLabel *label_7;
    QSlider *ledsValue;
    QLabel *label_8;
    QLineEdit *ledValue;
    QLabel *label_9;
    QLineEdit *seg7Value;
    QSlider *seg7ValueBar;
    QLabel *label_10;
    QLineEdit *adcValue;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *adcValueBar;
    QLabel *label_13;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_15;
    QFrame *line_5;
    QLabel *label_16;
    QLabel *label_17;
    QCheckBox *ledRed;
    QCheckBox *ledGreen;
    QCheckBox *ledBlue;
    QLabel *label_14;
    QFrame *line_6;
    QLineEdit *tempValue;
    QLabel *label_18;
    QSlider *tempValueBar;
    QLabel *label_19;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SensoresBaseBoard)
    {
        if (SensoresBaseBoard->objectName().isEmpty())
            SensoresBaseBoard->setObjectName(QString::fromUtf8("SensoresBaseBoard"));
        SensoresBaseBoard->resize(533, 578);
        centralWidget = new QWidget(SensoresBaseBoard);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ejeXValue = new QLineEdit(centralWidget);
        ejeXValue->setObjectName(QString::fromUtf8("ejeXValue"));
        ejeXValue->setGeometry(QRect(50, 40, 91, 27));
        ejeXValue->setReadOnly(true);
        ejeYValue = new QLineEdit(centralWidget);
        ejeYValue->setObjectName(QString::fromUtf8("ejeYValue"));
        ejeYValue->setGeometry(QRect(50, 70, 91, 27));
        ejeYValue->setReadOnly(true);
        ejeZValue = new QLineEdit(centralWidget);
        ejeZValue->setObjectName(QString::fromUtf8("ejeZValue"));
        ejeZValue->setGeometry(QRect(50, 100, 91, 27));
        ejeZValue->setReadOnly(true);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 21, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 21, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 21, 17));
        ejeXvalueBar = new QSlider(centralWidget);
        ejeXvalueBar->setObjectName(QString::fromUtf8("ejeXvalueBar"));
        ejeXvalueBar->setGeometry(QRect(160, 40, 341, 29));
        ejeXvalueBar->setMinimum(-127);
        ejeXvalueBar->setMaximum(128);
        ejeXvalueBar->setOrientation(Qt::Horizontal);
        ejeYvalueBar = new QSlider(centralWidget);
        ejeYvalueBar->setObjectName(QString::fromUtf8("ejeYvalueBar"));
        ejeYvalueBar->setGeometry(QRect(160, 70, 341, 29));
        ejeYvalueBar->setMinimum(-127);
        ejeYvalueBar->setMaximum(128);
        ejeYvalueBar->setOrientation(Qt::Horizontal);
        ejeZvalueBar = new QSlider(centralWidget);
        ejeZvalueBar->setObjectName(QString::fromUtf8("ejeZvalueBar"));
        ejeZvalueBar->setGeometry(QRect(160, 100, 341, 29));
        ejeZvalueBar->setMinimum(-127);
        ejeZvalueBar->setMaximum(128);
        ejeZvalueBar->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 20, 111, 17));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 150, 111, 17));
        label_5->setFont(font);
        luzValueBar = new QSlider(centralWidget);
        luzValueBar->setObjectName(QString::fromUtf8("luzValueBar"));
        luzValueBar->setGeometry(QRect(160, 170, 341, 29));
        luzValueBar->setMinimum(0);
        luzValueBar->setMaximum(256);
        luzValueBar->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 140, 21, 17));
        luzValue = new QLineEdit(centralWidget);
        luzValue->setObjectName(QString::fromUtf8("luzValue"));
        luzValue->setGeometry(QRect(40, 170, 91, 27));
        luzValue->setReadOnly(true);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 220, 111, 17));
        label_7->setFont(font);
        ledsValue = new QSlider(centralWidget);
        ledsValue->setObjectName(QString::fromUtf8("ledsValue"));
        ledsValue->setGeometry(QRect(160, 240, 341, 29));
        ledsValue->setMinimum(-1);
        ledsValue->setMaximum(15);
        ledsValue->setPageStep(1);
        ledsValue->setValue(-1);
        ledsValue->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 210, 21, 17));
        ledValue = new QLineEdit(centralWidget);
        ledValue->setObjectName(QString::fromUtf8("ledValue"));
        ledValue->setGeometry(QRect(40, 240, 91, 27));
        ledValue->setReadOnly(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 280, 21, 17));
        seg7Value = new QLineEdit(centralWidget);
        seg7Value->setObjectName(QString::fromUtf8("seg7Value"));
        seg7Value->setGeometry(QRect(40, 310, 91, 27));
        seg7Value->setReadOnly(true);
        seg7ValueBar = new QSlider(centralWidget);
        seg7ValueBar->setObjectName(QString::fromUtf8("seg7ValueBar"));
        seg7ValueBar->setGeometry(QRect(160, 310, 341, 29));
        seg7ValueBar->setMinimum(0);
        seg7ValueBar->setMaximum(9);
        seg7ValueBar->setPageStep(1);
        seg7ValueBar->setValue(0);
        seg7ValueBar->setOrientation(Qt::Horizontal);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 290, 151, 17));
        label_10->setFont(font);
        adcValue = new QLineEdit(centralWidget);
        adcValue->setObjectName(QString::fromUtf8("adcValue"));
        adcValue->setGeometry(QRect(40, 380, 91, 27));
        adcValue->setReadOnly(true);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 360, 21, 17));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(40, 360, 151, 17));
        label_12->setFont(font);
        adcValueBar = new QSlider(centralWidget);
        adcValueBar->setObjectName(QString::fromUtf8("adcValueBar"));
        adcValueBar->setGeometry(QRect(160, 380, 341, 29));
        adcValueBar->setMinimum(0);
        adcValueBar->setMaximum(4096);
        adcValueBar->setPageStep(1);
        adcValueBar->setValue(0);
        adcValueBar->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 10, 21, 17));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 130, 511, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 200, 511, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 270, 511, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 340, 511, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 450, 21, 17));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 410, 511, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(80, 450, 21, 17));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(140, 450, 21, 17));
        ledRed = new QCheckBox(centralWidget);
        ledRed->setObjectName(QString::fromUtf8("ledRed"));
        ledRed->setGeometry(QRect(40, 450, 21, 22));
        ledGreen = new QCheckBox(centralWidget);
        ledGreen->setObjectName(QString::fromUtf8("ledGreen"));
        ledGreen->setGeometry(QRect(100, 450, 21, 22));
        ledBlue = new QCheckBox(centralWidget);
        ledBlue->setObjectName(QString::fromUtf8("ledBlue"));
        ledBlue->setGeometry(QRect(160, 450, 21, 22));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 430, 151, 17));
        label_14->setFont(font);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(10, 470, 511, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        tempValue = new QLineEdit(centralWidget);
        tempValue->setObjectName(QString::fromUtf8("tempValue"));
        tempValue->setGeometry(QRect(40, 510, 91, 27));
        tempValue->setReadOnly(true);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 490, 21, 17));
        tempValueBar = new QSlider(centralWidget);
        tempValueBar->setObjectName(QString::fromUtf8("tempValueBar"));
        tempValueBar->setGeometry(QRect(160, 510, 341, 29));
        tempValueBar->setMinimum(0);
        tempValueBar->setMaximum(4096);
        tempValueBar->setPageStep(1);
        tempValueBar->setValue(0);
        tempValueBar->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(40, 490, 151, 17));
        label_19->setFont(font);
        SensoresBaseBoard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SensoresBaseBoard);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 25));
        SensoresBaseBoard->setMenuBar(menuBar);

        retranslateUi(SensoresBaseBoard);

        QMetaObject::connectSlotsByName(SensoresBaseBoard);
    } // setupUi

    void retranslateUi(QMainWindow *SensoresBaseBoard)
    {
        SensoresBaseBoard->setWindowTitle(QApplication::translate("SensoresBaseBoard", "SensoresBaseBoard", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SensoresBaseBoard", "X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SensoresBaseBoard", "Y", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SensoresBaseBoard", "Z", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SensoresBaseBoard", "Acelerometro", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SensoresBaseBoard", "Sensor de luz", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SensoresBaseBoard", "L", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SensoresBaseBoard", "Leds", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SensoresBaseBoard", "E", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SensoresBaseBoard", "D", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SensoresBaseBoard", "Display 7 segmentos", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("SensoresBaseBoard", "C", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("SensoresBaseBoard", "ADC", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("SensoresBaseBoard", "A", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("SensoresBaseBoard", "r", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("SensoresBaseBoard", "g", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("SensoresBaseBoard", "b", 0, QApplication::UnicodeUTF8));
        ledRed->setText(QString());
        ledGreen->setText(QString());
        ledBlue->setText(QString());
        label_14->setText(QApplication::translate("SensoresBaseBoard", "RGB", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("SensoresBaseBoard", "T", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("SensoresBaseBoard", "Temperatura", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SensoresBaseBoard: public Ui_SensoresBaseBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENSORESBASEBOARD_H
