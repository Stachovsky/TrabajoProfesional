/********************************************************************************
** Form generated from reading UI file 'nuevoexperimento.ui'
**
** Created: Sat May 25 10:50:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVOEXPERIMENTO_H
#define UI_NUEVOEXPERIMENTO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_nuevoExperimento
{
public:
    QTextEdit *descripcion;
    QLabel *label;
    QTextEdit *comentario;
    QLabel *label_2;
    QSlider *scrollParametrosValue;
    QLineEdit *parametroValue;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *Usuario;
    QLineEdit *unidadValue;
    QGroupBox *unidadSelection;
    QRadioButton *unidadPorcentaje;
    QRadioButton *unidadCarga;
    QRadioButton *unidadTension;
    QPushButton *btnComenzar;
    QLabel *label_6;

    void setupUi(QDialog *nuevoExperimento)
    {
        if (nuevoExperimento->objectName().isEmpty())
            nuevoExperimento->setObjectName(QString::fromUtf8("nuevoExperimento"));
        nuevoExperimento->resize(567, 427);
        descripcion = new QTextEdit(nuevoExperimento);
        descripcion->setObjectName(QString::fromUtf8("descripcion"));
        descripcion->setGeometry(QRect(160, 100, 241, 51));
        label = new QLabel(nuevoExperimento);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 100, 81, 21));
        comentario = new QTextEdit(nuevoExperimento);
        comentario->setObjectName(QString::fromUtf8("comentario"));
        comentario->setGeometry(QRect(160, 160, 241, 51));
        label_2 = new QLabel(nuevoExperimento);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 160, 101, 21));
        scrollParametrosValue = new QSlider(nuevoExperimento);
        scrollParametrosValue->setObjectName(QString::fromUtf8("scrollParametrosValue"));
        scrollParametrosValue->setGeometry(QRect(150, 270, 191, 41));
        scrollParametrosValue->setMaximum(100);
        scrollParametrosValue->setOrientation(Qt::Horizontal);
        parametroValue = new QLineEdit(nuevoExperimento);
        parametroValue->setObjectName(QString::fromUtf8("parametroValue"));
        parametroValue->setGeometry(QRect(350, 270, 51, 31));
        label_3 = new QLabel(nuevoExperimento);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 10, 181, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        label_4 = new QLabel(nuevoExperimento);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 230, 181, 31));
        label_4->setFont(font);
        label_5 = new QLabel(nuevoExperimento);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 60, 41, 21));
        Usuario = new QLineEdit(nuevoExperimento);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setGeometry(QRect(160, 60, 241, 27));
        unidadValue = new QLineEdit(nuevoExperimento);
        unidadValue->setObjectName(QString::fromUtf8("unidadValue"));
        unidadValue->setGeometry(QRect(400, 270, 31, 31));
        unidadSelection = new QGroupBox(nuevoExperimento);
        unidadSelection->setObjectName(QString::fromUtf8("unidadSelection"));
        unidadSelection->setGeometry(QRect(450, 260, 111, 91));
        unidadPorcentaje = new QRadioButton(unidadSelection);
        unidadPorcentaje->setObjectName(QString::fromUtf8("unidadPorcentaje"));
        unidadPorcentaje->setGeometry(QRect(0, 40, 116, 22));
        unidadCarga = new QRadioButton(unidadSelection);
        unidadCarga->setObjectName(QString::fromUtf8("unidadCarga"));
        unidadCarga->setGeometry(QRect(0, 60, 116, 22));
        unidadTension = new QRadioButton(unidadSelection);
        unidadTension->setObjectName(QString::fromUtf8("unidadTension"));
        unidadTension->setGeometry(QRect(0, 20, 116, 22));
        btnComenzar = new QPushButton(nuevoExperimento);
        btnComenzar->setObjectName(QString::fromUtf8("btnComenzar"));
        btnComenzar->setEnabled(true);
        btnComenzar->setGeometry(QRect(420, 370, 121, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        btnComenzar->setFont(font1);
        btnComenzar->setMouseTracking(false);
        btnComenzar->setAutoDefault(false);
        label_6 = new QLabel(nuevoExperimento);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 280, 101, 21));

        retranslateUi(nuevoExperimento);

        QMetaObject::connectSlotsByName(nuevoExperimento);
    } // setupUi

    void retranslateUi(QDialog *nuevoExperimento)
    {
        nuevoExperimento->setWindowTitle(QApplication::translate("nuevoExperimento", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("nuevoExperimento", "Descripcion", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("nuevoExperimento", "Comenterio", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("nuevoExperimento", "Informaci\303\263n", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("nuevoExperimento", "Par\303\241mentos", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("nuevoExperimento", "Autor", 0, QApplication::UnicodeUTF8));
        unidadSelection->setTitle(QApplication::translate("nuevoExperimento", "Unidad", 0, QApplication::UnicodeUTF8));
        unidadPorcentaje->setText(QApplication::translate("nuevoExperimento", "Porcentaje", 0, QApplication::UnicodeUTF8));
        unidadCarga->setText(QApplication::translate("nuevoExperimento", "Carga", 0, QApplication::UnicodeUTF8));
        unidadTension->setText(QApplication::translate("nuevoExperimento", "Tension", 0, QApplication::UnicodeUTF8));
        btnComenzar->setText(QApplication::translate("nuevoExperimento", "Comenzar", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("nuevoExperimento", "Nivel de carga", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nuevoExperimento: public Ui_nuevoExperimento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVOEXPERIMENTO_H
