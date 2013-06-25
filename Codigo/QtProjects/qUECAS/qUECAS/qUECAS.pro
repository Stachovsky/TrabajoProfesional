#-------------------------------------------------
#
# Project created by QtCreator 2012-07-22T16:24:43
#
#-------------------------------------------------

QT       += core gui std sql

TARGET = qUECAS
TEMPLATE = app

SOURCES +=  main.cpp\
            quecas.cpp \
            qcustomplot.cpp \
            SerialPort.cpp \
            thcomdevice.cpp \
            ../../../workspaceLpc/UECAS/src/Tasks/PcCommunication/ProtocolPCComunication.c \
    GraficManager.cpp \
    GraficElement.cpp \
    DatabaseManager.cpp \
    Crypto3Des.cpp \
    des.c \
    base64.cpp \
    loginwindows.cpp \
    nuevoexperimento.cpp \
    thcore.cpp \
    graficoampliado.cpp

HEADERS  += quecas.h \
            qcustomplot.h \
            SerialPort.h \
            thcomdevice.h \
            ../../../workspaceLpc/UECAS/src/Tasks/PcCommunication/ProtocolPCComunication.h \
    GraficManager.hpp \
    GraficElement.hpp \
    DatabaseManager.h \
    Crypto3Des.h \
    des.h \
    base64.h \
    des_config.h \
    quecasConfig.h \
    loginwindows.h \
    nuevoexperimento.h \
    thcore.h \
    graficoampliado.h

INCLUDEPATH    =   ../../../workspaceLpc/UECAS/src/Tasks/PcCommunication/

FORMS    = \
    quecas.ui \
    loginwindows.ui \
    nuevoexperimento.ui \
    graficoampliado.ui
