/****************************************************************************
** Meta object code from reading C++ file 'thcore.h'
**
** Created: Sat May 25 12:32:38 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qUECAS/thcore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThCore[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    8,    7,    7, 0x05,
      42,   36,    7,    7, 0x05,
      74,    7,    7,    7, 0x05,
      95,    7,    7,    7, 0x05,
     117,    7,    7,    7, 0x05,
     153,  148,    7,    7, 0x05,
     197,  183,    7,    7, 0x05,
     252,  233,    7,    7, 0x05,
     303,  293,    7,    7, 0x05,
     334,  293,    7,    7, 0x05,
     365,  293,    7,    7, 0x05,
     400,  396,    7,    7, 0x05,
     423,  396,    7,    7, 0x05,
     456,  449,    7,    7, 0x05,
     488,  484,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
     509,    7,    7,    7, 0x0a,
     530,    7,    7,    7, 0x0a,
     552,    7,    7,    7, 0x0a,
     570,    7,    7,    7, 0x0a,
     587,    7,    7,    7, 0x0a,
     600,  484,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThCore[] = {
    "ThCore\0\0state\0setStateDiagrama(int)\0"
    "value\0setNivelCargaBarraProgreso(int)\0"
    "setCargaCompletada()\0setProcesoTerminado()\0"
    "setProcesoDetensionTerminado()\0str,\0"
    "setTextStatusBar(QString,int)\0"
    "tensionFuente\0setValueTensionFuenteDiagrama(uint)\0"
    "tensionCapacitores\0"
    "setValueTensionCapacitoresDiagrama(uint)\0"
    "corriente\0ReceiveADC2ValueDiagrama(uint)\0"
    "ReceiveADC3ValueDiagrama(uint)\0"
    "ReceiveADC4ValueDiagrama(uint)\0msg\0"
    "SendMsgToUART(QString)\0SendMsgToUART(QByteArray)\0"
    "cmdLog\0ReceiveMsgFromUART(QString)\0"
    "cmd\0logCmdSend(cmdPcCom)\0pausarProcesoCarga()\0"
    "reasumeProcesoCarga()\0disparoDescarga()\0"
    "detenerProceso()\0monitorear()\0"
    "cmdReceiveFromDevice(cmdPcCom)\0"
};

void ThCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThCore *_t = static_cast<ThCore *>(_o);
        switch (_id) {
        case 0: _t->setStateDiagrama((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNivelCargaBarraProgreso((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCargaCompletada(); break;
        case 3: _t->setProcesoTerminado(); break;
        case 4: _t->setProcesoDetensionTerminado(); break;
        case 5: _t->setTextStatusBar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setValueTensionFuenteDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->setValueTensionCapacitoresDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 8: _t->ReceiveADC2ValueDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 9: _t->ReceiveADC3ValueDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->ReceiveADC4ValueDiagrama((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->SendMsgToUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->SendMsgToUART((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 13: _t->ReceiveMsgFromUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->logCmdSend((*reinterpret_cast< cmdPcCom(*)>(_a[1]))); break;
        case 15: _t->pausarProcesoCarga(); break;
        case 16: _t->reasumeProcesoCarga(); break;
        case 17: _t->disparoDescarga(); break;
        case 18: _t->detenerProceso(); break;
        case 19: _t->monitorear(); break;
        case 20: _t->cmdReceiveFromDevice((*reinterpret_cast< cmdPcCom(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThCore::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThCore::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThCore,
      qt_meta_data_ThCore, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThCore::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThCore))
        return static_cast<void*>(const_cast< ThCore*>(this));
    return QThread::qt_metacast(_clname);
}

int ThCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void ThCore::setStateDiagrama(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ThCore::setNivelCargaBarraProgreso(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ThCore::setCargaCompletada()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void ThCore::setProcesoTerminado()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void ThCore::setProcesoDetensionTerminado()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ThCore::setTextStatusBar(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ThCore::setValueTensionFuenteDiagrama(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ThCore::setValueTensionCapacitoresDiagrama(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ThCore::ReceiveADC2ValueDiagrama(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ThCore::ReceiveADC3ValueDiagrama(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ThCore::ReceiveADC4ValueDiagrama(unsigned int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ThCore::SendMsgToUART(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ThCore::SendMsgToUART(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ThCore::ReceiveMsgFromUART(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ThCore::logCmdSend(cmdPcCom _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
