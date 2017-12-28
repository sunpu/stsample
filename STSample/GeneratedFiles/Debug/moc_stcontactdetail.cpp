/****************************************************************************
** Meta object code from reading C++ file 'stcontactdetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stcontactdetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stcontactdetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STContactDetail_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STContactDetail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STContactDetail_t qt_meta_stringdata_tahiti__STContactDetail = {
    {
QT_MOC_LITERAL(0, 0, 23), // "tahiti::STContactDetail"
QT_MOC_LITERAL(1, 24, 14), // "openChatDetail"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "jid"
QT_MOC_LITERAL(4, 44, 24), // "on_pbSendMessage_clicked"
QT_MOC_LITERAL(5, 69, 22) // "on_pbOpenClass_clicked"

    },
    "tahiti::STContactDetail\0openChatDetail\0"
    "\0jid\0on_pbSendMessage_clicked\0"
    "on_pbOpenClass_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STContactDetail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STContactDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STContactDetail *_t = static_cast<STContactDetail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openChatDetail((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pbSendMessage_clicked(); break;
        case 2: _t->on_pbOpenClass_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STContactDetail::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STContactDetail::openChatDetail)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STContactDetail::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STContactDetail.data,
      qt_meta_data_tahiti__STContactDetail,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STContactDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STContactDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STContactDetail.stringdata0))
        return static_cast<void*>(const_cast< STContactDetail*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STContactDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void tahiti::STContactDetail::openChatDetail(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
