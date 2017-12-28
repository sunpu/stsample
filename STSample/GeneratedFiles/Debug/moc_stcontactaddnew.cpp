/****************************************************************************
** Meta object code from reading C++ file 'stcontactaddnew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stcontactaddnew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stcontactaddnew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STContactAddNew_t {
    QByteArrayData data[7];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STContactAddNew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STContactAddNew_t qt_meta_stringdata_tahiti__STContactAddNew = {
    {
QT_MOC_LITERAL(0, 0, 23), // "tahiti::STContactAddNew"
QT_MOC_LITERAL(1, 24, 19), // "on_pbSearch_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 19), // "on_pbAddNew_clicked"
QT_MOC_LITERAL(4, 65, 20), // "onContactFoundResult"
QT_MOC_LITERAL(5, 86, 6), // "result"
QT_MOC_LITERAL(6, 93, 7) // "dataVar"

    },
    "tahiti::STContactAddNew\0on_pbSearch_clicked\0"
    "\0on_pbAddNew_clicked\0onContactFoundResult\0"
    "result\0dataVar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STContactAddNew[] = {

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
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    2,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    5,    6,

       0        // eod
};

void tahiti::STContactAddNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STContactAddNew *_t = static_cast<STContactAddNew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbSearch_clicked(); break;
        case 1: _t->on_pbAddNew_clicked(); break;
        case 2: _t->onContactFoundResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject tahiti::STContactAddNew::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STContactAddNew.data,
      qt_meta_data_tahiti__STContactAddNew,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STContactAddNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STContactAddNew::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STContactAddNew.stringdata0))
        return static_cast<void*>(const_cast< STContactAddNew*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STContactAddNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
