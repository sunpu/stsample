/****************************************************************************
** Meta object code from reading C++ file 'stscreenshot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stscreenshot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stscreenshot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STScreenshot_t {
    QByteArrayData data[10];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STScreenshot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STScreenshot_t qt_meta_stringdata_tahiti__STScreenshot = {
    {
QT_MOC_LITERAL(0, 0, 20), // "tahiti::STScreenshot"
QT_MOC_LITERAL(1, 21, 15), // "cursorPosChange"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "doubleClick"
QT_MOC_LITERAL(4, 50, 13), // "findChildWind"
QT_MOC_LITERAL(5, 64, 16), // "finishScreenshot"
QT_MOC_LITERAL(6, 81, 16), // "cancelScreenshot"
QT_MOC_LITERAL(7, 98, 18), // "onFinishScreenshot"
QT_MOC_LITERAL(8, 117, 18), // "onCancelScreenshot"
QT_MOC_LITERAL(9, 136, 10) // "onEgoistic"

    },
    "tahiti::STScreenshot\0cursorPosChange\0"
    "\0doubleClick\0findChildWind\0finishScreenshot\0"
    "cancelScreenshot\0onFinishScreenshot\0"
    "onCancelScreenshot\0onEgoistic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STScreenshot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       3,    0,   59,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       6,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   67,    2, 0x0a /* Public */,
       8,    0,   70,    2, 0x0a /* Public */,
       9,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STScreenshot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STScreenshot *_t = static_cast<STScreenshot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPosChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->doubleClick(); break;
        case 2: _t->findChildWind((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 3: _t->finishScreenshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->cancelScreenshot(); break;
        case 5: _t->onFinishScreenshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onCancelScreenshot(); break;
        case 7: _t->onEgoistic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STScreenshot::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshot::cursorPosChange)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STScreenshot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshot::doubleClick)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (STScreenshot::*_t)(QRect );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshot::findChildWind)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (STScreenshot::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshot::finishScreenshot)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (STScreenshot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshot::cancelScreenshot)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STScreenshot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STScreenshot.data,
      qt_meta_data_tahiti__STScreenshot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STScreenshot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STScreenshot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STScreenshot.stringdata0))
        return static_cast<void*>(const_cast< STScreenshot*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STScreenshot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void tahiti::STScreenshot::cursorPosChange(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STScreenshot::doubleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void tahiti::STScreenshot::findChildWind(QRect _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tahiti::STScreenshot::finishScreenshot(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tahiti::STScreenshot::cancelScreenshot()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
struct qt_meta_stringdata_tahiti__SSSizeShow_t {
    QByteArrayData data[8];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__SSSizeShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__SSSizeShow_t qt_meta_stringdata_tahiti__SSSizeShow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "tahiti::SSSizeShow"
QT_MOC_LITERAL(1, 19, 15), // "onPostionChange"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 1), // "x"
QT_MOC_LITERAL(4, 38, 1), // "y"
QT_MOC_LITERAL(5, 40, 12), // "onSizeChange"
QT_MOC_LITERAL(6, 53, 1), // "w"
QT_MOC_LITERAL(7, 55, 1) // "h"

    },
    "tahiti::SSSizeShow\0onPostionChange\0\0"
    "x\0y\0onSizeChange\0w\0h"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__SSSizeShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       5,    2,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

       0        // eod
};

void tahiti::SSSizeShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SSSizeShow *_t = static_cast<SSSizeShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPostionChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onSizeChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject tahiti::SSSizeShow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__SSSizeShow.data,
      qt_meta_data_tahiti__SSSizeShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::SSSizeShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::SSSizeShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__SSSizeShow.stringdata0))
        return static_cast<void*>(const_cast< SSSizeShow*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::SSSizeShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_tahiti__SSToolbar_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__SSToolbar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__SSToolbar_t qt_meta_stringdata_tahiti__SSToolbar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "tahiti::SSToolbar"
QT_MOC_LITERAL(1, 18, 16), // "finishScreenshot"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 16), // "cancelScreenshot"
QT_MOC_LITERAL(4, 53, 19), // "on_pbFinish_clicked"
QT_MOC_LITERAL(5, 73, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(6, 93, 11), // "onPosChange"
QT_MOC_LITERAL(7, 105, 1), // "x"
QT_MOC_LITERAL(8, 107, 1) // "y"

    },
    "tahiti::SSToolbar\0finishScreenshot\0\0"
    "cancelScreenshot\0on_pbFinish_clicked\0"
    "on_pbCancel_clicked\0onPosChange\0x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__SSToolbar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    2,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void tahiti::SSToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SSToolbar *_t = static_cast<SSToolbar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishScreenshot(); break;
        case 1: _t->cancelScreenshot(); break;
        case 2: _t->on_pbFinish_clicked(); break;
        case 3: _t->on_pbCancel_clicked(); break;
        case 4: _t->onPosChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SSToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSToolbar::finishScreenshot)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SSToolbar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSToolbar::cancelScreenshot)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::SSToolbar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__SSToolbar.data,
      qt_meta_data_tahiti__SSToolbar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::SSToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::SSToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__SSToolbar.stringdata0))
        return static_cast<void*>(const_cast< SSToolbar*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::SSToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void tahiti::SSToolbar::finishScreenshot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tahiti::SSToolbar::cancelScreenshot()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_tahiti__SSScreen_t {
    QByteArrayData data[14];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__SSScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__SSScreen_t qt_meta_stringdata_tahiti__SSScreen = {
    {
QT_MOC_LITERAL(0, 0, 16), // "tahiti::SSScreen"
QT_MOC_LITERAL(1, 17, 9), // "posChange"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "sizeChange"
QT_MOC_LITERAL(4, 39, 13), // "postionChange"
QT_MOC_LITERAL(5, 53, 11), // "doubleClick"
QT_MOC_LITERAL(6, 65, 16), // "finishScreenshot"
QT_MOC_LITERAL(7, 82, 16), // "cancelScreenshot"
QT_MOC_LITERAL(8, 99, 13), // "onMouseChange"
QT_MOC_LITERAL(9, 113, 1), // "x"
QT_MOC_LITERAL(10, 115, 1), // "y"
QT_MOC_LITERAL(11, 117, 12), // "onSaveScreen"
QT_MOC_LITERAL(12, 130, 17), // "onSaveScreenOther"
QT_MOC_LITERAL(13, 148, 14) // "quitScreenshot"

    },
    "tahiti::SSScreen\0posChange\0\0sizeChange\0"
    "postionChange\0doubleClick\0finishScreenshot\0"
    "cancelScreenshot\0onMouseChange\0x\0y\0"
    "onSaveScreen\0onSaveScreenOther\0"
    "quitScreenshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__SSScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    2,   69,    2, 0x06 /* Public */,
       4,    2,   74,    2, 0x06 /* Public */,
       5,    0,   79,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   84,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::SSScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SSScreen *_t = static_cast<SSScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->posChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->sizeChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->postionChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->doubleClick(); break;
        case 4: _t->finishScreenshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->cancelScreenshot(); break;
        case 6: _t->onMouseChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->onSaveScreen(); break;
        case 8: _t->onSaveScreenOther(); break;
        case 9: _t->quitScreenshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SSScreen::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::posChange)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SSScreen::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::sizeChange)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SSScreen::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::postionChange)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SSScreen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::doubleClick)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SSScreen::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::finishScreenshot)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SSScreen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SSScreen::cancelScreenshot)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject tahiti::SSScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__SSScreen.data,
      qt_meta_data_tahiti__SSScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::SSScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::SSScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__SSScreen.stringdata0))
        return static_cast<void*>(const_cast< SSScreen*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::SSScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void tahiti::SSScreen::posChange(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::SSScreen::sizeChange(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tahiti::SSScreen::postionChange(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tahiti::SSScreen::doubleClick()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void tahiti::SSScreen::finishScreenshot(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tahiti::SSScreen::cancelScreenshot()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
