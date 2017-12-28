/****************************************************************************
** Meta object code from reading C++ file 'stsample.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stsample.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stsample.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STSample_t {
    QByteArrayData data[20];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STSample_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STSample_t qt_meta_stringdata_tahiti__STSample = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tahiti::STSample"
QT_MOC_LITERAL(1, 17, 15), // "newStreamSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "id"
QT_MOC_LITERAL(4, 37, 5), // "width"
QT_MOC_LITERAL(5, 43, 6), // "height"
QT_MOC_LITERAL(6, 50, 18), // "updateRenderSignal"
QT_MOC_LITERAL(7, 69, 29), // "std::shared_ptr<RemoteStream>"
QT_MOC_LITERAL(8, 99, 6), // "stream"
QT_MOC_LITERAL(9, 106, 18), // "on_pbLogin_clicked"
QT_MOC_LITERAL(10, 125, 19), // "on_pbLogout_clicked"
QT_MOC_LITERAL(11, 145, 28), // "on_pbSendLocalCamera_clicked"
QT_MOC_LITERAL(12, 174, 28), // "on_pbStopLocalCamera_clicked"
QT_MOC_LITERAL(13, 203, 29), // "on_pbSendLocalDesktop_clicked"
QT_MOC_LITERAL(14, 233, 29), // "on_pbStopLocalDesktop_clicked"
QT_MOC_LITERAL(15, 263, 28), // "on_pbSendLocalWindow_clicked"
QT_MOC_LITERAL(16, 292, 28), // "on_pbStopLocalWindow_clicked"
QT_MOC_LITERAL(17, 321, 13), // "newStreamSlot"
QT_MOC_LITERAL(18, 335, 16), // "updateRenderSlot"
QT_MOC_LITERAL(19, 352, 11) // "checkChange"

    },
    "tahiti::STSample\0newStreamSignal\0\0id\0"
    "width\0height\0updateRenderSignal\0"
    "std::shared_ptr<RemoteStream>\0stream\0"
    "on_pbLogin_clicked\0on_pbLogout_clicked\0"
    "on_pbSendLocalCamera_clicked\0"
    "on_pbStopLocalCamera_clicked\0"
    "on_pbSendLocalDesktop_clicked\0"
    "on_pbStopLocalDesktop_clicked\0"
    "on_pbSendLocalWindow_clicked\0"
    "on_pbStopLocalWindow_clicked\0newStreamSlot\0"
    "updateRenderSlot\0checkChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STSample[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       6,    2,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,
      16,    0,   98,    2, 0x0a /* Public */,
      17,    3,   99,    2, 0x0a /* Public */,
      18,    2,  106,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    3,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 7,    3,    8,
    QMetaType::Void,

       0        // eod
};

void tahiti::STSample::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STSample *_t = static_cast<STSample *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newStreamSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->updateRenderSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< std::shared_ptr<RemoteStream>(*)>(_a[2]))); break;
        case 2: _t->on_pbLogin_clicked(); break;
        case 3: _t->on_pbLogout_clicked(); break;
        case 4: _t->on_pbSendLocalCamera_clicked(); break;
        case 5: _t->on_pbStopLocalCamera_clicked(); break;
        case 6: _t->on_pbSendLocalDesktop_clicked(); break;
        case 7: _t->on_pbStopLocalDesktop_clicked(); break;
        case 8: _t->on_pbSendLocalWindow_clicked(); break;
        case 9: _t->on_pbStopLocalWindow_clicked(); break;
        case 10: _t->newStreamSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 11: _t->updateRenderSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< std::shared_ptr<RemoteStream>(*)>(_a[2]))); break;
        case 12: _t->checkChange(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<RemoteStream> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<RemoteStream> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STSample::*_t)(QString , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STSample::newStreamSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STSample::*_t)(QString , std::shared_ptr<RemoteStream> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STSample::updateRenderSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STSample::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tahiti__STSample.data,
      qt_meta_data_tahiti__STSample,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STSample::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STSample::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STSample.stringdata0))
        return static_cast<void*>(const_cast< STSample*>(this));
    if (!strcmp(_clname, "ConferenceClientObserver"))
        return static_cast< ConferenceClientObserver*>(const_cast< STSample*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tahiti::STSample::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STSample::newStreamSignal(QString _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STSample::updateRenderSignal(QString _t1, std::shared_ptr<RemoteStream> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
