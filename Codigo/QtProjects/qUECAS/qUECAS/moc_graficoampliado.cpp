/****************************************************************************
** Meta object code from reading C++ file 'graficoampliado.h'
**
** Created: Fri Jun 14 01:56:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "graficoampliado.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graficoampliado.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GraficoAmpliado[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      50,   16,   16,   16, 0x08,
      82,   16,   16,   16, 0x08,
     114,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GraficoAmpliado[] = {
    "GraficoAmpliado\0\0on_actionArchivo_PDF_triggered()\0"
    "on_actionImagen_JPG_triggered()\0"
    "on_actionImagen_PNG_triggered()\0"
    "on_actionCerrar_triggered()\0"
};

void GraficoAmpliado::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GraficoAmpliado *_t = static_cast<GraficoAmpliado *>(_o);
        switch (_id) {
        case 0: _t->on_actionArchivo_PDF_triggered(); break;
        case 1: _t->on_actionImagen_JPG_triggered(); break;
        case 2: _t->on_actionImagen_PNG_triggered(); break;
        case 3: _t->on_actionCerrar_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GraficoAmpliado::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GraficoAmpliado::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GraficoAmpliado,
      qt_meta_data_GraficoAmpliado, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GraficoAmpliado::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GraficoAmpliado::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GraficoAmpliado::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GraficoAmpliado))
        return static_cast<void*>(const_cast< GraficoAmpliado*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GraficoAmpliado::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
