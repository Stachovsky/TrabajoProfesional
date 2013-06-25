/****************************************************************************
** Meta object code from reading C++ file 'GraficManager.hpp'
**
** Created: Fri Jun 14 01:56:45 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GraficManager.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraficManager.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramaBloques[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   17,   16,   16, 0x08,
      53,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiagramaBloques[] = {
    "DiagramaBloques\0\0paintEvent\0"
    "paintEvent(QPaintEvent*)\0"
    "loadDiagramaElements()\0"
};

void DiagramaBloques::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramaBloques *_t = static_cast<DiagramaBloques *>(_o);
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->loadDiagramaElements(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagramaBloques::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramaBloques::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DiagramaBloques,
      qt_meta_data_DiagramaBloques, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramaBloques::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramaBloques::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramaBloques::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramaBloques))
        return static_cast<void*>(const_cast< DiagramaBloques*>(this));
    return QWidget::qt_metacast(_clname);
}

int DiagramaBloques::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_DiagramaBloquesManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DiagramaBloquesManager[] = {
    "DiagramaBloquesManager\0\0state\0"
    "setState(int)\0"
};

void DiagramaBloquesManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramaBloquesManager *_t = static_cast<DiagramaBloquesManager *>(_o);
        switch (_id) {
        case 0: _t->setState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DiagramaBloquesManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramaBloquesManager::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DiagramaBloquesManager,
      qt_meta_data_DiagramaBloquesManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramaBloquesManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramaBloquesManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramaBloquesManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramaBloquesManager))
        return static_cast<void*>(const_cast< DiagramaBloquesManager*>(this));
    return QThread::qt_metacast(_clname);
}

int DiagramaBloquesManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
