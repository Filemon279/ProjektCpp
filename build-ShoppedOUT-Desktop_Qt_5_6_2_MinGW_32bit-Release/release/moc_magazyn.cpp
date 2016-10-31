/****************************************************************************
** Meta object code from reading C++ file 'magazyn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppedOUT/magazyn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magazyn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Magazyn_t {
    QByteArrayData data[11];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Magazyn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Magazyn_t qt_meta_stringdata_Magazyn = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Magazyn"
QT_MOC_LITERAL(1, 8, 11), // "receiveBaza"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "QSqlDatabase"
QT_MOC_LITERAL(4, 34, 4), // "Baza"
QT_MOC_LITERAL(5, 39, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(6, 65, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(7, 94, 26), // "on_pushButton_save_clicked"
QT_MOC_LITERAL(8, 121, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(9, 151, 24), // "on_pushButton_up_clicked"
QT_MOC_LITERAL(10, 176, 26) // "on_pushButton_down_clicked"

    },
    "Magazyn\0receiveBaza\0\0QSqlDatabase\0"
    "Baza\0on_pushButton_add_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_save_clicked\0"
    "on_pushButton_refresh_clicked\0"
    "on_pushButton_up_clicked\0"
    "on_pushButton_down_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Magazyn[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Magazyn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Magazyn *_t = static_cast<Magazyn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveBaza((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_add_clicked(); break;
        case 2: _t->on_pushButton_delete_clicked(); break;
        case 3: _t->on_pushButton_save_clicked(); break;
        case 4: _t->on_pushButton_refresh_clicked(); break;
        case 5: _t->on_pushButton_up_clicked(); break;
        case 6: _t->on_pushButton_down_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Magazyn::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Magazyn.data,
      qt_meta_data_Magazyn,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Magazyn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Magazyn::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Magazyn.stringdata0))
        return static_cast<void*>(const_cast< Magazyn*>(this));
    return QDialog::qt_metacast(_clname);
}

int Magazyn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
