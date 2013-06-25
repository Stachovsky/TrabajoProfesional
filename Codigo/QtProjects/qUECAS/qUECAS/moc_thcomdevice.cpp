/****************************************************************************
** Meta object code from reading C++ file 'thcomdevice.h'
**
** Created: Fri Jun 14 01:56:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "thcomdevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'thcomdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ThComDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   48,   12,   12, 0x0a,
      75,   48,   12,   12, 0x0a,
     101,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ThComDevice[] = {
    "ThComDevice\0\0cmd\0cmdReceiveFromDevice(cmdPcCom)\0"
    "msg\0SendMsgToUART(QString)\0"
    "SendMsgToUART(QByteArray)\0quit()\0"
};

void ThComDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ThComDevice *_t = static_cast<ThComDevice *>(_o);
        switch (_id) {
        case 0: _t->cmdReceiveFromDevice((*reinterpret_cast< cmdPcCom(*)>(_a[1]))); break;
        case 1: _t->SendMsgToUART((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->SendMsgToUART((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->quit(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ThComDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ThComDevice::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ThComDevice,
      qt_meta_data_ThComDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ThComDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ThComDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ThComDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ThComDevice))
        return static_cast<void*>(const_cast< ThComDevice*>(this));
    return QThread::qt_metacast(_clname);
}

int ThComDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ThComDevice::cmdReceiveFromDevice(cmdPcCom _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
