/********************************************************************************
** Form generated from reading UI file 'quecas.ui'
**
** Created: Fri Jun 14 01:56:23 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUECAS_H
#define UI_QUECAS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qUECAS
{
public:
    QAction *actionVersion;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabComunicion;
    QTextEdit *logUartRecieve;
    QLabel *label;
    QPushButton *cleanLogRecieve;
    QSlider *ADC0ValueBar;
    QLabel *label_2;
    QLineEdit *ADC0Value;
    QLabel *label_3;
    QLineEdit *ADC1Value;
    QSlider *ADC1ValueBar;
    QLabel *label_4;
    QSlider *ADC2ValueBar;
    QLineEdit *ADC2Value;
    QCheckBox *Actuador1;
    QCheckBox *Actuador3;
    QCheckBox *Actuador2;
    QPushButton *pushButton_2;
    QTextEdit *logUartSend;
    QPushButton *cleanLogSend;
    QLabel *label_18;
    QPushButton *pushButton_10;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *layaoutDiagrama;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *btnNuevoExperimento;
    QPushButton *btnStop;
    QPushButton *btnPause;
    QPushButton *btnDisparo;
    QProgressBar *barraProgresoCargar;
    QLabel *labelProgresoCargar;
    QLabel *labelProgresoCargar_2;
    QLabel *labelParametroActual;
    QLabel *parametroActual;
    QProgressBar *barraProgresoRecibiendoDatos;
    QLabel *labelProgressBarRecibiendoDatos;
    QWidget *tab_2;
    QPlainTextEdit *plainTextEdit;
    QTableWidget *tablaExperimentos;
    QWidget *gridLayoutWidget_3;
    QGridLayout *previewGrafic;
    QPushButton *btnExportCSV;
    QPushButton *btnAmpliar;
    QPushButton *pushButton_3;
    QTableWidget *tablaResultados;
    QPushButton *pushButton_8;
    QPushButton *btnDeleteExperimento;
    QWidget *tab_3;
    QTableWidget *tablaUsuarios;
    QLineEdit *NombreUsuario;
    QLineEdit *PassUsuario;
    QLineEdit *idUsuarioInput;
    QPushButton *btnDeleteUser;
    QPushButton *btnAddUser;
    QPushButton *btnUpdateUser;
    QLineEdit *NombreUsuarioNew;
    QLineEdit *PassUsuarioNew;
    QComboBox *SelectPerfilUsuario;
    QComboBox *SelectPerfilUsuarioNew;
    QLineEdit *Usuario;
    QLineEdit *UsuarioNew;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qUECAS)
    {
        if (qUECAS->objectName().isEmpty())
            qUECAS->setObjectName(QString::fromUtf8("qUECAS"));
        qUECAS->resize(1055, 665);
        actionVersion = new QAction(qUECAS);
        actionVersion->setObjectName(QString::fromUtf8("actionVersion"));
        centralWidget = new QWidget(qUECAS);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1051, 601));
        tabComunicion = new QWidget();
        tabComunicion->setObjectName(QString::fromUtf8("tabComunicion"));
        logUartRecieve = new QTextEdit(tabComunicion);
        logUartRecieve->setObjectName(QString::fromUtf8("logUartRecieve"));
        logUartRecieve->setGeometry(QRect(20, 290, 271, 211));
        label = new QLabel(tabComunicion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 270, 121, 17));
        cleanLogRecieve = new QPushButton(tabComunicion);
        cleanLogRecieve->setObjectName(QString::fromUtf8("cleanLogRecieve"));
        cleanLogRecieve->setGeometry(QRect(240, 510, 51, 27));
        ADC0ValueBar = new QSlider(tabComunicion);
        ADC0ValueBar->setObjectName(QString::fromUtf8("ADC0ValueBar"));
        ADC0ValueBar->setEnabled(false);
        ADC0ValueBar->setGeometry(QRect(190, 40, 29, 160));
        ADC0ValueBar->setMaximum(4095);
        ADC0ValueBar->setOrientation(Qt::Vertical);
        label_2 = new QLabel(tabComunicion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 20, 41, 17));
        ADC0Value = new QLineEdit(tabComunicion);
        ADC0Value->setObjectName(QString::fromUtf8("ADC0Value"));
        ADC0Value->setEnabled(false);
        ADC0Value->setGeometry(QRect(180, 200, 51, 27));
        label_3 = new QLabel(tabComunicion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 20, 41, 17));
        ADC1Value = new QLineEdit(tabComunicion);
        ADC1Value->setObjectName(QString::fromUtf8("ADC1Value"));
        ADC1Value->setEnabled(false);
        ADC1Value->setGeometry(QRect(260, 200, 51, 27));
        ADC1ValueBar = new QSlider(tabComunicion);
        ADC1ValueBar->setObjectName(QString::fromUtf8("ADC1ValueBar"));
        ADC1ValueBar->setEnabled(false);
        ADC1ValueBar->setGeometry(QRect(270, 40, 29, 160));
        ADC1ValueBar->setMaximum(4095);
        ADC1ValueBar->setOrientation(Qt::Vertical);
        label_4 = new QLabel(tabComunicion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 20, 41, 17));
        ADC2ValueBar = new QSlider(tabComunicion);
        ADC2ValueBar->setObjectName(QString::fromUtf8("ADC2ValueBar"));
        ADC2ValueBar->setEnabled(false);
        ADC2ValueBar->setGeometry(QRect(350, 40, 29, 160));
        ADC2ValueBar->setMaximum(4095);
        ADC2ValueBar->setOrientation(Qt::Vertical);
        ADC2Value = new QLineEdit(tabComunicion);
        ADC2Value->setObjectName(QString::fromUtf8("ADC2Value"));
        ADC2Value->setEnabled(false);
        ADC2Value->setGeometry(QRect(340, 200, 51, 27));
        Actuador1 = new QCheckBox(tabComunicion);
        Actuador1->setObjectName(QString::fromUtf8("Actuador1"));
        Actuador1->setGeometry(QRect(40, 50, 111, 22));
        Actuador3 = new QCheckBox(tabComunicion);
        Actuador3->setObjectName(QString::fromUtf8("Actuador3"));
        Actuador3->setGeometry(QRect(40, 110, 111, 22));
        Actuador2 = new QCheckBox(tabComunicion);
        Actuador2->setObjectName(QString::fromUtf8("Actuador2"));
        Actuador2->setGeometry(QRect(40, 80, 111, 22));
        pushButton_2 = new QPushButton(tabComunicion);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 300, 141, 27));
        logUartSend = new QTextEdit(tabComunicion);
        logUartSend->setObjectName(QString::fromUtf8("logUartSend"));
        logUartSend->setGeometry(QRect(310, 290, 271, 211));
        cleanLogSend = new QPushButton(tabComunicion);
        cleanLogSend->setObjectName(QString::fromUtf8("cleanLogSend"));
        cleanLogSend->setGeometry(QRect(530, 510, 51, 27));
        label_18 = new QLabel(tabComunicion);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(310, 270, 121, 17));
        pushButton_10 = new QPushButton(tabComunicion);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(590, 340, 181, 27));
        tabWidget->addTab(tabComunicion, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 60, 921, 401));
        layaoutDiagrama = new QGridLayout(gridLayoutWidget_2);
        layaoutDiagrama->setSpacing(6);
        layaoutDiagrama->setContentsMargins(11, 11, 11, 11);
        layaoutDiagrama->setObjectName(QString::fromUtf8("layaoutDiagrama"));
        layaoutDiagrama->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(940, 140, 98, 27));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(940, 260, 98, 27));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(940, 220, 98, 27));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(940, 60, 98, 27));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(940, 100, 98, 27));
        pushButton_9 = new QPushButton(tab);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(940, 180, 98, 27));
        btnNuevoExperimento = new QPushButton(tab);
        btnNuevoExperimento->setObjectName(QString::fromUtf8("btnNuevoExperimento"));
        btnNuevoExperimento->setGeometry(QRect(770, 480, 161, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        btnNuevoExperimento->setFont(font);
        btnStop = new QPushButton(tab);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(660, 480, 101, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        btnStop->setFont(font1);
        btnPause = new QPushButton(tab);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setGeometry(QRect(550, 480, 101, 31));
        btnPause->setFont(font1);
        btnDisparo = new QPushButton(tab);
        btnDisparo->setObjectName(QString::fromUtf8("btnDisparo"));
        btnDisparo->setGeometry(QRect(550, 480, 101, 31));
        btnDisparo->setFont(font1);
        barraProgresoCargar = new QProgressBar(tab);
        barraProgresoCargar->setObjectName(QString::fromUtf8("barraProgresoCargar"));
        barraProgresoCargar->setGeometry(QRect(150, 470, 361, 41));
        barraProgresoCargar->setValue(24);
        labelProgresoCargar = new QLabel(tab);
        labelProgresoCargar->setObjectName(QString::fromUtf8("labelProgresoCargar"));
        labelProgresoCargar->setGeometry(QRect(20, 470, 131, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        labelProgresoCargar->setFont(font2);
        labelProgresoCargar_2 = new QLabel(tab);
        labelProgresoCargar_2->setObjectName(QString::fromUtf8("labelProgresoCargar_2"));
        labelProgresoCargar_2->setGeometry(QRect(320, 20, 281, 21));
        labelProgresoCargar_2->setFont(font2);
        labelParametroActual = new QLabel(tab);
        labelParametroActual->setObjectName(QString::fromUtf8("labelParametroActual"));
        labelParametroActual->setGeometry(QRect(20, 520, 201, 31));
        labelParametroActual->setFont(font2);
        parametroActual = new QLabel(tab);
        parametroActual->setObjectName(QString::fromUtf8("parametroActual"));
        parametroActual->setGeometry(QRect(230, 520, 201, 31));
        parametroActual->setFont(font2);
        barraProgresoRecibiendoDatos = new QProgressBar(tab);
        barraProgresoRecibiendoDatos->setObjectName(QString::fromUtf8("barraProgresoRecibiendoDatos"));
        barraProgresoRecibiendoDatos->setGeometry(QRect(700, 530, 231, 23));
        barraProgresoRecibiendoDatos->setValue(24);
        labelProgressBarRecibiendoDatos = new QLabel(tab);
        labelProgressBarRecibiendoDatos->setObjectName(QString::fromUtf8("labelProgressBarRecibiendoDatos"));
        labelProgressBarRecibiendoDatos->setGeometry(QRect(550, 530, 141, 17));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        labelProgressBarRecibiendoDatos->setFont(font3);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(240, 20, 551, 201));
        tablaExperimentos = new QTableWidget(tab_2);
        tablaExperimentos->setObjectName(QString::fromUtf8("tablaExperimentos"));
        tablaExperimentos->setGeometry(QRect(20, 20, 181, 291));
        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(510, 240, 471, 231));
        previewGrafic = new QGridLayout(gridLayoutWidget_3);
        previewGrafic->setSpacing(6);
        previewGrafic->setContentsMargins(11, 11, 11, 11);
        previewGrafic->setObjectName(QString::fromUtf8("previewGrafic"));
        previewGrafic->setContentsMargins(0, 0, 0, 0);
        btnExportCSV = new QPushButton(tab_2);
        btnExportCSV->setObjectName(QString::fromUtf8("btnExportCSV"));
        btnExportCSV->setGeometry(QRect(240, 480, 121, 27));
        btnAmpliar = new QPushButton(tab_2);
        btnAmpliar->setObjectName(QString::fromUtf8("btnAmpliar"));
        btnAmpliar->setGeometry(QRect(510, 480, 98, 27));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 480, 121, 27));
        tablaResultados = new QTableWidget(tab_2);
        tablaResultados->setObjectName(QString::fromUtf8("tablaResultados"));
        tablaResultados->setGeometry(QRect(240, 240, 251, 231));
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(760, 480, 121, 27));
        btnDeleteExperimento = new QPushButton(tab_2);
        btnDeleteExperimento->setObjectName(QString::fromUtf8("btnDeleteExperimento"));
        btnDeleteExperimento->setGeometry(QRect(20, 320, 151, 31));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tablaUsuarios = new QTableWidget(tab_3);
        tablaUsuarios->setObjectName(QString::fromUtf8("tablaUsuarios"));
        tablaUsuarios->setGeometry(QRect(30, 20, 201, 321));
        NombreUsuario = new QLineEdit(tab_3);
        NombreUsuario->setObjectName(QString::fromUtf8("NombreUsuario"));
        NombreUsuario->setGeometry(QRect(500, 120, 171, 27));
        PassUsuario = new QLineEdit(tab_3);
        PassUsuario->setObjectName(QString::fromUtf8("PassUsuario"));
        PassUsuario->setGeometry(QRect(500, 200, 121, 27));
        idUsuarioInput = new QLineEdit(tab_3);
        idUsuarioInput->setObjectName(QString::fromUtf8("idUsuarioInput"));
        idUsuarioInput->setGeometry(QRect(500, 40, 31, 27));
        btnDeleteUser = new QPushButton(tab_3);
        btnDeleteUser->setObjectName(QString::fromUtf8("btnDeleteUser"));
        btnDeleteUser->setGeometry(QRect(560, 240, 41, 31));
        btnAddUser = new QPushButton(tab_3);
        btnAddUser->setObjectName(QString::fromUtf8("btnAddUser"));
        btnAddUser->setGeometry(QRect(490, 480, 41, 31));
        btnUpdateUser = new QPushButton(tab_3);
        btnUpdateUser->setObjectName(QString::fromUtf8("btnUpdateUser"));
        btnUpdateUser->setGeometry(QRect(490, 240, 61, 31));
        NombreUsuarioNew = new QLineEdit(tab_3);
        NombreUsuarioNew->setObjectName(QString::fromUtf8("NombreUsuarioNew"));
        NombreUsuarioNew->setGeometry(QRect(510, 360, 171, 27));
        PassUsuarioNew = new QLineEdit(tab_3);
        PassUsuarioNew->setObjectName(QString::fromUtf8("PassUsuarioNew"));
        PassUsuarioNew->setGeometry(QRect(510, 440, 121, 27));
        SelectPerfilUsuario = new QComboBox(tab_3);
        SelectPerfilUsuario->setObjectName(QString::fromUtf8("SelectPerfilUsuario"));
        SelectPerfilUsuario->setGeometry(QRect(500, 160, 151, 27));
        SelectPerfilUsuarioNew = new QComboBox(tab_3);
        SelectPerfilUsuarioNew->setObjectName(QString::fromUtf8("SelectPerfilUsuarioNew"));
        SelectPerfilUsuarioNew->setGeometry(QRect(510, 400, 151, 27));
        Usuario = new QLineEdit(tab_3);
        Usuario->setObjectName(QString::fromUtf8("Usuario"));
        Usuario->setGeometry(QRect(500, 80, 113, 27));
        UsuarioNew = new QLineEdit(tab_3);
        UsuarioNew->setObjectName(QString::fromUtf8("UsuarioNew"));
        UsuarioNew->setGeometry(QRect(510, 320, 113, 27));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(420, 50, 66, 17));
        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(420, 90, 66, 17));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(420, 130, 66, 17));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(420, 170, 66, 17));
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(420, 210, 81, 20));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(430, 330, 66, 17));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(430, 370, 66, 17));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(430, 410, 66, 17));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(430, 450, 81, 20));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(430, 290, 111, 17));
        QFont font4;
        font4.setBold(true);
        font4.setWeight(75);
        label_16->setFont(font4);
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(420, 10, 151, 17));
        label_17->setFont(font4);
        tabWidget->addTab(tab_3, QString());
        qUECAS->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qUECAS);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1055, 25));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        qUECAS->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qUECAS);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setEnabled(true);
        mainToolBar->setMovable(false);
        qUECAS->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(qUECAS);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qUECAS->setStatusBar(statusBar);

        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionVersion);

        retranslateUi(qUECAS);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qUECAS);
    } // setupUi

    void retranslateUi(QMainWindow *qUECAS)
    {
        qUECAS->setWindowTitle(QApplication::translate("qUECAS", "qUECAS", 0, QApplication::UnicodeUTF8));
        actionVersion->setText(QApplication::translate("qUECAS", "Version", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("qUECAS", "Log Receive UART", 0, QApplication::UnicodeUTF8));
        cleanLogRecieve->setText(QApplication::translate("qUECAS", "Clean", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("qUECAS", "ADC0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("qUECAS", "ADC1", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("qUECAS", "ADC2", 0, QApplication::UnicodeUTF8));
        Actuador1->setText(QApplication::translate("qUECAS", "Contactor 1", 0, QApplication::UnicodeUTF8));
        Actuador3->setText(QApplication::translate("qUECAS", "Contactor 3", 0, QApplication::UnicodeUTF8));
        Actuador2->setText(QApplication::translate("qUECAS", "Contactor 2", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("qUECAS", "CMD Init Descarga", 0, QApplication::UnicodeUTF8));
        cleanLogSend->setText(QApplication::translate("qUECAS", "Clean", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("qUECAS", "Log Send UART", 0, QApplication::UnicodeUTF8));
        pushButton_10->setText(QApplication::translate("qUECAS", "CMD Descarga Terminada", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabComunicion), QApplication::translate("qUECAS", "Develop", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("qUECAS", "Cargando", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("qUECAS", "Descargando", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("qUECAS", "Descarga", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("qUECAS", "Desctivado", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("qUECAS", "HV Activado", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("qUECAS", "Cargado", 0, QApplication::UnicodeUTF8));
        btnNuevoExperimento->setText(QApplication::translate("qUECAS", "Nuevo Experimento", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("qUECAS", "Detener", 0, QApplication::UnicodeUTF8));
        btnPause->setText(QApplication::translate("qUECAS", "Pausar", 0, QApplication::UnicodeUTF8));
        btnDisparo->setText(QApplication::translate("qUECAS", "Disparar", 0, QApplication::UnicodeUTF8));
        labelProgresoCargar->setText(QApplication::translate("qUECAS", "Nivel Carga:", 0, QApplication::UnicodeUTF8));
        labelProgresoCargar_2->setText(QApplication::translate("qUECAS", "Estado Actual del Sistema", 0, QApplication::UnicodeUTF8));
        labelParametroActual->setText(QApplication::translate("qUECAS", "Nivel seleccionado:", 0, QApplication::UnicodeUTF8));
        parametroActual->setText(QApplication::translate("qUECAS", "0", 0, QApplication::UnicodeUTF8));
        labelProgressBarRecibiendoDatos->setText(QApplication::translate("qUECAS", "Recibiendo Datos", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("qUECAS", "Diagrama", 0, QApplication::UnicodeUTF8));
        btnExportCSV->setText(QApplication::translate("qUECAS", "Exportar en CSV", 0, QApplication::UnicodeUTF8));
        btnAmpliar->setText(QApplication::translate("qUECAS", "Ampliar", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("qUECAS", "Exportar en PNG", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("qUECAS", "Exportar en Pdf", 0, QApplication::UnicodeUTF8));
        btnDeleteExperimento->setText(QApplication::translate("qUECAS", "Borrar Experimento", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("qUECAS", "Resultados", 0, QApplication::UnicodeUTF8));
        btnDeleteUser->setText(QApplication::translate("qUECAS", "-", 0, QApplication::UnicodeUTF8));
        btnAddUser->setText(QApplication::translate("qUECAS", "+", 0, QApplication::UnicodeUTF8));
        btnUpdateUser->setText(QApplication::translate("qUECAS", "Update", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("qUECAS", "IdUsuario", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("qUECAS", "Usuario", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("qUECAS", "Nombre", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("qUECAS", "Perfil", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("qUECAS", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("qUECAS", "Usuario", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("qUECAS", "Nombre", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("qUECAS", "Perfil", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("qUECAS", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("qUECAS", "Nuevo usuario", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("qUECAS", "Usuario seleccionado", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("qUECAS", "Administracion Usuarios", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("qUECAS", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qUECAS: public Ui_qUECAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUECAS_H
