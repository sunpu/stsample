/****************************************************************************
** Meta object code from reading C++ file 'stloginrotate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stloginrotate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stloginrotate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STLogin_t {
    QByteArrayData data[11];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STLogin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STLogin_t qt_meta_stringdata_tahiti__STLogin = {
    {
QT_MOC_LITERAL(0, 0, 15), // "tahiti::STLogin"
QT_MOC_LITERAL(1, 16, 12), // "rotateWindow"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "changeMainWindow"
QT_MOC_LITERAL(4, 47, 17), // "onUserNameChanged"
QT_MOC_LITERAL(5, 65, 18), // "on_pbLogin_clicked"
QT_MOC_LITERAL(6, 84, 20), // "on_pb2Regist_clicked"
QT_MOC_LITERAL(7, 105, 20), // "on_pbMinimum_clicked"
QT_MOC_LITERAL(8, 126, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(9, 145, 17), // "handleLoginResult"
QT_MOC_LITERAL(10, 163, 6) // "result"

    },
    "tahiti::STLogin\0rotateWindow\0\0"
    "changeMainWindow\0onUserNameChanged\0"
    "on_pbLogin_clicked\0on_pb2Regist_clicked\0"
    "on_pbMinimum_clicked\0on_pbClose_clicked\0"
    "handleLoginResult\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STLogin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void tahiti::STLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STLogin *_t = static_cast<STLogin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotateWindow(); break;
        case 1: _t->changeMainWindow(); break;
        case 2: _t->onUserNameChanged(); break;
        case 3: _t->on_pbLogin_clicked(); break;
        case 4: _t->on_pb2Regist_clicked(); break;
        case 5: _t->on_pbMinimum_clicked(); break;
        case 6: _t->on_pbClose_clicked(); break;
        case 7: _t->handleLoginResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STLogin::rotateWindow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STLogin::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STLogin::changeMainWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STLogin::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STLogin.data,
      qt_meta_data_tahiti__STLogin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STLogin.stringdata0))
        return static_cast<void*>(const_cast< STLogin*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STLogin::rotateWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tahiti::STLogin::changeMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_tahiti__STRegist_t {
    QByteArrayData data[9];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STRegist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STRegist_t qt_meta_stringdata_tahiti__STRegist = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tahiti::STRegist"
QT_MOC_LITERAL(1, 17, 12), // "rotateWindow"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "on_pb2Login_clicked"
QT_MOC_LITERAL(4, 51, 19), // "on_pbRegist_clicked"
QT_MOC_LITERAL(5, 71, 20), // "on_pbMinimum_clicked"
QT_MOC_LITERAL(6, 92, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(7, 111, 18), // "handleRegistResult"
QT_MOC_LITERAL(8, 130, 6) // "result"

    },
    "tahiti::STRegist\0rotateWindow\0\0"
    "on_pb2Login_clicked\0on_pbRegist_clicked\0"
    "on_pbMinimum_clicked\0on_pbClose_clicked\0"
    "handleRegistResult\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STRegist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void tahiti::STRegist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STRegist *_t = static_cast<STRegist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotateWindow(); break;
        case 1: _t->on_pb2Login_clicked(); break;
        case 2: _t->on_pbRegist_clicked(); break;
        case 3: _t->on_pbMinimum_clicked(); break;
        case 4: _t->on_pbClose_clicked(); break;
        case 5: _t->handleRegistResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STRegist::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STRegist::rotateWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STRegist::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STRegist.data,
      qt_meta_data_tahiti__STRegist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STRegist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STRegist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STRegist.stringdata0))
        return static_cast<void*>(const_cast< STRegist*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STRegist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STRegist::rotateWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_tahiti__STLoginRotate_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STLoginRotate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STLoginRotate_t qt_meta_stringdata_tahiti__STLoginRotate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "tahiti::STLoginRotate"
QT_MOC_LITERAL(1, 22, 18), // "onChangeMainWindow"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 19), // "onChangeLoginWindow"
QT_MOC_LITERAL(4, 62, 14), // "onRotateWindow"
QT_MOC_LITERAL(5, 77, 16) // "onRotateFinished"

    },
    "tahiti::STLoginRotate\0onChangeMainWindow\0"
    "\0onChangeLoginWindow\0onRotateWindow\0"
    "onRotateFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STLoginRotate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STLoginRotate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STLoginRotate *_t = static_cast<STLoginRotate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChangeMainWindow(); break;
        case 1: _t->onChangeLoginWindow(); break;
        case 2: _t->onRotateWindow(); break;
        case 3: _t->onRotateFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tahiti::STLoginRotate::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_tahiti__STLoginRotate.data,
      qt_meta_data_tahiti__STLoginRotate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STLoginRotate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STLoginRotate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STLoginRotate.stringdata0))
        return static_cast<void*>(const_cast< STLoginRotate*>(this));
    return QStackedWidget::qt_metacast(_clname);
}

int tahiti::STLoginRotate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
