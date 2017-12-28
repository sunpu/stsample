/****************************************************************************
** Meta object code from reading C++ file 'xmppclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../xmppclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmppclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__XmppClient_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__XmppClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__XmppClient_t qt_meta_stringdata_tahiti__XmppClient = {
    {
QT_MOC_LITERAL(0, 0, 18), // "tahiti::XmppClient"
QT_MOC_LITERAL(1, 19, 11), // "loginResult"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "result"
QT_MOC_LITERAL(4, 39, 18), // "contactFoundResult"
QT_MOC_LITERAL(5, 58, 7), // "dataVar"
QT_MOC_LITERAL(6, 66, 11), // "showMessage"
QT_MOC_LITERAL(7, 78, 3), // "jid"
QT_MOC_LITERAL(8, 82, 3) // "msg"

    },
    "tahiti::XmppClient\0loginResult\0\0result\0"
    "contactFoundResult\0dataVar\0showMessage\0"
    "jid\0msg"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__XmppClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,
       6,    2,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QVariant,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,

       0        // eod
};

void tahiti::XmppClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XmppClient *_t = static_cast<XmppClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->contactFoundResult((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 2: _t->showMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XmppClient::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XmppClient::loginResult)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (XmppClient::*_t)(int , QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XmppClient::contactFoundResult)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (XmppClient::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XmppClient::showMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject tahiti::XmppClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tahiti__XmppClient.data,
      qt_meta_data_tahiti__XmppClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::XmppClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::XmppClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__XmppClient.stringdata0))
        return static_cast<void*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "RegistrationHandler"))
        return static_cast< RegistrationHandler*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "RosterListener"))
        return static_cast< RosterListener*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "ConnectionListener"))
        return static_cast< ConnectionListener*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "MessageSessionHandler"))
        return static_cast< MessageSessionHandler*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "LogHandler"))
        return static_cast< LogHandler*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "MessageEventHandler"))
        return static_cast< MessageEventHandler*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "MessageHandler"))
        return static_cast< MessageHandler*>(const_cast< XmppClient*>(this));
    if (!strcmp(_clname, "VCardHandler"))
        return static_cast< VCardHandler*>(const_cast< XmppClient*>(this));
    return QObject::qt_metacast(_clname);
}

int tahiti::XmppClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void tahiti::XmppClient::loginResult(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::XmppClient::contactFoundResult(int _t1, QVariant _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tahiti::XmppClient::showMessage(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
