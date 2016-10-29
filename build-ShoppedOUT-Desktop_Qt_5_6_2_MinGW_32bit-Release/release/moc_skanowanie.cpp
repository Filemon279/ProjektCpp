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
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Skanowanie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Skanowanie_t qt_meta_stringdata_Skanowanie = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Skanowanie"
QT_MOC_LITERAL(1, 11, 9), // "sendItems"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "QTableWidget*"
QT_MOC_LITERAL(4, 36, 11), // "receiveBaza"
QT_MOC_LITERAL(5, 48, 12), // "QSqlDatabase"
QT_MOC_LITERAL(6, 61, 4), // "Baza"
QT_MOC_LITERAL(7, 66, 23), // "on_zaplacButton_clicked"
QT_MOC_LITERAL(8, 90, 23) // "on_pushButton_2_clicked"

    },
    "Skanowanie\0sendItems\0\0QTableWidget*\0"
    "receiveBaza\0QSqlDatabase\0Baza\0"
    "on_zaplacButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Skanowanie[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Skanowanie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Skanowanie *_t = static_cast<Skanowanie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendItems((*reinterpret_cast< QTableWidget*(*)>(_a[1]))); break;
        case 1: _t->receiveBaza((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 2: _t->on_zaplacButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTableWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Skanowanie::*_t)(QTableWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Skanowanie::sendItems)) {
                *result = 0;
                return;
            }
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Skanowanie::sendItems(QTableWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
