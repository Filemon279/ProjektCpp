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
    QByteArrayData data[11];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Shopped_podlicz_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Shopped_podlicz_t qt_meta_stringdata_Shopped_podlicz = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Shopped_podlicz"
QT_MOC_LITERAL(1, 16, 8), // "sendInfo"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "sendStatusNext"
QT_MOC_LITERAL(4, 41, 7), // "getCash"
QT_MOC_LITERAL(5, 49, 33), // "on_lineEdit_zaplacono_textCha..."
QT_MOC_LITERAL(6, 83, 4), // "arg1"
QT_MOC_LITERAL(7, 88, 27), // "on_pushButton_karta_clicked"
QT_MOC_LITERAL(8, 116, 9), // "getStatus"
QT_MOC_LITERAL(9, 126, 4), // "info"
QT_MOC_LITERAL(10, 131, 29) // "on_pushButton_gotowka_clicked"

    },
    "Shopped_podlicz\0sendInfo\0\0sendStatusNext\0"
    "getCash\0on_lineEdit_zaplacono_textChanged\0"
    "arg1\0on_pushButton_karta_clicked\0"
    "getStatus\0info\0on_pushButton_gotowka_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Shopped_podlicz[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   55,    2, 0x08 /* Private */,
       5,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void Shopped_podlicz::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Shopped_podlicz *_t = static_cast<Shopped_podlicz *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->sendInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->sendStatusNext((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->getCash((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_zaplacono_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_karta_clicked(); break;
        case 5: _t->getStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_gotowka_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (Shopped_podlicz::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Shopped_podlicz::sendInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (Shopped_podlicz::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Shopped_podlicz::sendStatusNext)) {
                *result = 1;
                return;
            }
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

// SIGNAL 0
int Shopped_podlicz::sendInfo(QString _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int Shopped_podlicz::sendStatusNext(QString _t1)
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
