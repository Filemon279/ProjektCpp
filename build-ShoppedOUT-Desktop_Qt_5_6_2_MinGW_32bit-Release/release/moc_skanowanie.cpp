/****************************************************************************
** Meta object code from reading C++ file 'skanowanie.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppedOUT/skanowanie.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'skanowanie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Skanowanie_t {
    QByteArrayData data[6];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Skanowanie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Skanowanie_t qt_meta_stringdata_Skanowanie = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Skanowanie"
QT_MOC_LITERAL(1, 11, 11), // "receiveBaza"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "QSqlDatabase"
QT_MOC_LITERAL(4, 37, 4), // "Baza"
QT_MOC_LITERAL(5, 42, 24) // "on_zaplac_button_clicked"

    },
    "Skanowanie\0receiveBaza\0\0QSqlDatabase\0"
    "Baza\0on_zaplac_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Skanowanie[] = {

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
       5,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void Skanowanie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Skanowanie *_t = static_cast<Skanowanie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveBaza((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 1: _t->on_zaplac_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Skanowanie::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Skanowanie.data,
      qt_meta_data_Skanowanie,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Skanowanie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Skanowanie::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Skanowanie.stringdata0))
        return static_cast<void*>(const_cast< Skanowanie*>(this));
    return QDialog::qt_metacast(_clname);
}

int Skanowanie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
