/****************************************************************************
** Meta object code from reading C++ file 'shopped_podlicz.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppedOUT/shopped_podlicz.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shopped_podlicz.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Shopped_podlicz_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Shopped_podlicz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Shopped_podlicz_t qt_meta_stringdata_Shopped_podlicz = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Shopped_podlicz"
QT_MOC_LITERAL(1, 16, 7), // "getCash"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 33), // "on_lineEdit_zaplacono_textCha..."
QT_MOC_LITERAL(4, 59, 4) // "arg1"

    },
    "Shopped_podlicz\0getCash\0\0"
    "on_lineEdit_zaplacono_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Shopped_podlicz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       3,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void Shopped_podlicz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Shopped_podlicz *_t = static_cast<Shopped_podlicz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getCash((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->on_lineEdit_zaplacono_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Shopped_podlicz::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Shopped_podlicz.data,
      qt_meta_data_Shopped_podlicz,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Shopped_podlicz::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Shopped_podlicz::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Shopped_podlicz.stringdata0))
        return static_cast<void*>(const_cast< Shopped_podlicz*>(this));
    return QDialog::qt_metacast(_clname);
}

int Shopped_podlicz::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE