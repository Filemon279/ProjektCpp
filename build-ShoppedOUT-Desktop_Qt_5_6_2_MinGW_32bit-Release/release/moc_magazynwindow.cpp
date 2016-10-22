/****************************************************************************
** Meta object code from reading C++ file 'magazynwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ShoppedOUT/magazynwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magazynwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_magazynWindow_t {
    QByteArrayData data[12];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_magazynWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_magazynWindow_t qt_meta_stringdata_magazynWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "magazynWindow"
QT_MOC_LITERAL(1, 14, 11), // "receiveBaza"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "QSqlDatabase"
QT_MOC_LITERAL(4, 40, 4), // "Baza"
QT_MOC_LITERAL(5, 45, 11), // "odswiezBaze"
QT_MOC_LITERAL(6, 57, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(7, 81, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 105, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(9, 129, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 153, 26), // "on_szukajField_textChanged"
QT_MOC_LITERAL(11, 180, 4) // "arg1"

    },
    "magazynWindow\0receiveBaza\0\0QSqlDatabase\0"
    "Baza\0odswiezBaze\0on_pushButton_5_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_3_clicked\0"
    "on_szukajField_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_magazynWindow[] = {

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
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void magazynWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        magazynWindow *_t = static_cast<magazynWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receiveBaza((*reinterpret_cast< QSqlDatabase(*)>(_a[1]))); break;
        case 1: _t->odswiezBaze(); break;
        case 2: _t->on_pushButton_5_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_6_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_szukajField_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject magazynWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_magazynWindow.data,
      qt_meta_data_magazynWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *magazynWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *magazynWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_magazynWindow.stringdata0))
        return static_cast<void*>(const_cast< magazynWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int magazynWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
