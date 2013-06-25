/********************************************************************************
** Form generated from reading UI file 'graficoampliado.ui'
**
** Created: Sat May 25 10:50:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICOAMPLIADO_H
#define UI_GRAFICOAMPLIADO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraficoAmpliado
{
public:
    QAction *actionImagen_PNG;
    QAction *actionImagen_JPG;
    QAction *actionArchivo_PDF;
    QAction *actionCerrar;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QMenu *menuExportar;

    void setupUi(QMainWindow *GraficoAmpliado)
    {
        if (GraficoAmpliado->objectName().isEmpty())
            GraficoAmpliado->setObjectName(QString::fromUtf8("GraficoAmpliado"));
        GraficoAmpliado->resize(1252, 557);
        actionImagen_PNG = new QAction(GraficoAmpliado);
        actionImagen_PNG->setObjectName(QString::fromUtf8("actionImagen_PNG"));
        actionImagen_JPG = new QAction(GraficoAmpliado);
        actionImagen_JPG->setObjectName(QString::fromUtf8("actionImagen_JPG"));
        actionArchivo_PDF = new QAction(GraficoAmpliado);
        actionArchivo_PDF->setObjectName(QString::fromUtf8("actionArchivo_PDF"));
        actionCerrar = new QAction(GraficoAmpliado);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        centralwidget = new QWidget(GraficoAmpliado);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 1231, 511));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        GraficoAmpliado->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraficoAmpliado);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1252, 25));
        menuExportar = new QMenu(menubar);
        menuExportar->setObjectName(QString::fromUtf8("menuExportar"));
        GraficoAmpliado->setMenuBar(menubar);

        menubar->addAction(menuExportar->menuAction());
        menuExportar->addAction(actionImagen_PNG);
        menuExportar->addAction(actionImagen_JPG);
        menuExportar->addAction(actionArchivo_PDF);
        menuExportar->addAction(actionCerrar);

        retranslateUi(GraficoAmpliado);

        QMetaObject::connectSlotsByName(GraficoAmpliado);
    } // setupUi

    void retranslateUi(QMainWindow *GraficoAmpliado)
    {
        GraficoAmpliado->setWindowTitle(QApplication::translate("GraficoAmpliado", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionImagen_PNG->setText(QApplication::translate("GraficoAmpliado", "Imagen PNG", 0, QApplication::UnicodeUTF8));
        actionImagen_JPG->setText(QApplication::translate("GraficoAmpliado", "Imagen JPG", 0, QApplication::UnicodeUTF8));
        actionArchivo_PDF->setText(QApplication::translate("GraficoAmpliado", "Archivo PDF", 0, QApplication::UnicodeUTF8));
        actionCerrar->setText(QApplication::translate("GraficoAmpliado", "Cerrar", 0, QApplication::UnicodeUTF8));
        menuExportar->setTitle(QApplication::translate("GraficoAmpliado", "Exportar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GraficoAmpliado: public Ui_GraficoAmpliado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICOAMPLIADO_H
