/****************************************************************************
** Meta object code from reading C++ file 'produkt_info.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppedOUT/produkt_info.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'produkt_info.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_produkt_info_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_produkt_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_produkt_info_t qt_meta_stringdata_produkt_info = {
    {
QT_MOC_LITERAL(0, 0, 12), // "produkt_info"
QT_MOC_LITERAL(1, 13, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "get_productKey"
QT_MOC_LITERAL(4, 51, 5), // "kodIN"
QT_MOC_LITERAL(5, 57, 11), // "receiveBaza"
QT_MOC_LITERAL(6, 69, 12), // "QSqlDatabase"
QT_MOC_LITERAL(7, 82, 4) // "Baza"

    },
    "produkt_info\0on_pushButton_clicked\0\0"
    "get_productKey\0kodIN\0receiveBaza\0"
    "QSqlDatabase\0Baza"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_produkt_info[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void produkt_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        produkt_info *_t = static_cast<produkt_info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->get_productKey((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->receiveBaza((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject produkt_info::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_produkt_info.data,
      qt_meta_data_produkt_info,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *produkt_info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *produkt_info::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_produkt_info.stringdata0))
        return static_cast<void*>(const_cast< produkt_info*>(this));
    return QDialog::qt_metacast(_clname);
}

int produkt_info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE