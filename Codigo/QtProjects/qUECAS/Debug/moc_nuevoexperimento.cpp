/****************************************************************************
** Meta object code from reading C++ file 'nuevoexperimento.h'
**
** Created: Sat May 25 13:05:08 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qUECAS/nuevoexperimento.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nuevoexperimento.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NuevoExperimento[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      67,   17,   17,   17, 0x08,
     108,  103,   17,   17, 0x08,
     147,   17,   17,   17, 0x08,
     172,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NuevoExperimento[] = {
    "NuevoExperimento\0\0value\0"
    "on_scrollParametrosValue_valueChanged(int)\0"
    "on_parametroValue_editingFinished()\0"
    "arg1\0on_parametroValue_textChanged(QString)\0"
    "on_btnComenzar_clicked()\0sameRadioChange()\0"
};

void NuevoExperimento::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NuevoExperimento *_t = static_cast<NuevoExperimento *>(_o);
        switch (_id) {
        case 0: _t->on_scrollParametrosValue_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_parametroValue_editingFinished(); break;
        case 2: _t->on_parametroValue_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_btnComenzar_clicked(); break;
        case 4: _t->sameRadioChange(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NuevoExperimento::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NuevoExperimento::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_NuevoExperimento,
      qt_meta_data_NuevoExperimento, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NuevoExperimento::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NuevoExperimento::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NuevoExperimento::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NuevoExperimento))
        return static_cast<void*>(const_cast< NuevoExperimento*>(this));
    return QDialog::qt_metacast(_clname);
}

int NuevoExperimento::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
