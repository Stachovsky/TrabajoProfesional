/****************************************************************************
** Meta object code from reading C++ file 'sensoresbaseboard.h'
**
** Created: Tue Jun 5 21:42:19 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sensoresbaseboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sensoresbaseboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SensoresBaseBoard[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      35,   29,   18,   18, 0x08,
      66,   29,   18,   18, 0x08,
     108,  100,   18,   18, 0x08,
     132,  100,   18,   18, 0x08,
     158,  100,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SensoresBaseBoard[] = {
    "SensoresBaseBoard\0\0pulling()\0value\0"
    "on_ledsValue_valueChanged(int)\0"
    "on_seg7ValueBar_valueChanged(int)\0"
    "checked\0on_ledRed_toggled(bool)\0"
    "on_ledGreen_toggled(bool)\0"
    "on_ledBlue_toggled(bool)\0"
};

const QMetaObject SensoresBaseBoard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SensoresBaseBoard,
      qt_meta_data_SensoresBaseBoard, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SensoresBaseBoard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SensoresBaseBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SensoresBaseBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SensoresBaseBoard))
        return static_cast<void*>(const_cast< SensoresBaseBoard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SensoresBaseBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: pulling(); break;
        case 1: on_ledsValue_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: on_seg7ValueBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: on_ledRed_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_ledGreen_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: on_ledBlue_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
