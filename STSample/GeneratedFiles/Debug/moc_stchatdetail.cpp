/****************************************************************************
** Meta object code from reading C++ file 'stchatdetail.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stchatdetail.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stchatdetail.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STChatDetail_t {
    QByteArrayData data[18];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STChatDetail_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STChatDetail_t qt_meta_stringdata_tahiti__STChatDetail = {
    {
QT_MOC_LITERAL(0, 0, 20), // "tahiti::STChatDetail"
QT_MOC_LITERAL(1, 21, 19), // "changeChatListOrder"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "jid"
QT_MOC_LITERAL(4, 46, 24), // "on_pbSendMessage_clicked"
QT_MOC_LITERAL(5, 71, 20), // "on_pbEmotion_clicked"
QT_MOC_LITERAL(6, 92, 23), // "on_pbScreenShot_clicked"
QT_MOC_LITERAL(7, 116, 29), // "on_pbScreenShotOption_clicked"
QT_MOC_LITERAL(8, 146, 19), // "on_pbLesson_clicked"
QT_MOC_LITERAL(9, 166, 19), // "updateOthersMessage"
QT_MOC_LITERAL(10, 186, 3), // "msg"
QT_MOC_LITERAL(11, 190, 12), // "onScreenshot"
QT_MOC_LITERAL(12, 203, 25), // "onScreenshotWithoutWindow"
QT_MOC_LITERAL(13, 229, 15), // "onChooseEmotion"
QT_MOC_LITERAL(14, 245, 5), // "index"
QT_MOC_LITERAL(15, 251, 18), // "onFinishScreenshot"
QT_MOC_LITERAL(16, 270, 4), // "path"
QT_MOC_LITERAL(17, 275, 18) // "onCancelScreenshot"

    },
    "tahiti::STChatDetail\0changeChatListOrder\0"
    "\0jid\0on_pbSendMessage_clicked\0"
    "on_pbEmotion_clicked\0on_pbScreenShot_clicked\0"
    "on_pbScreenShotOption_clicked\0"
    "on_pbLesson_clicked\0updateOthersMessage\0"
    "msg\0onScreenshot\0onScreenshotWithoutWindow\0"
    "onChooseEmotion\0index\0onFinishScreenshot\0"
    "path\0onCancelScreenshot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STChatDetail[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    0,   81,    2, 0x0a /* Public */,
       9,    2,   82,    2, 0x0a /* Public */,
      11,    0,   87,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x0a /* Public */,
      13,    1,   89,    2, 0x0a /* Public */,
      15,    1,   92,    2, 0x0a /* Public */,
      17,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,

       0        // eod
};

void tahiti::STChatDetail::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STChatDetail *_t = static_cast<STChatDetail *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeChatListOrder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pbSendMessage_clicked(); break;
        case 2: _t->on_pbEmotion_clicked(); break;
        case 3: _t->on_pbScreenShot_clicked(); break;
        case 4: _t->on_pbScreenShotOption_clicked(); break;
        case 5: _t->on_pbLesson_clicked(); break;
        case 6: _t->updateOthersMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->onScreenshot(); break;
        case 8: _t->onScreenshotWithoutWindow(); break;
        case 9: _t->onChooseEmotion((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onFinishScreenshot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->onCancelScreenshot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STChatDetail::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STChatDetail::changeChatListOrder)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STChatDetail::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STChatDetail.data,
      qt_meta_data_tahiti__STChatDetail,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STChatDetail::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STChatDetail::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STChatDetail.stringdata0))
        return static_cast<void*>(const_cast< STChatDetail*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STChatDetail::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STChatDetail::changeChatListOrder(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_tahiti__STScreenshotOption_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STScreenshotOption_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STScreenshotOption_t qt_meta_stringdata_tahiti__STScreenshotOption = {
    {
QT_MOC_LITERAL(0, 0, 26), // "tahiti::STScreenshotOption"
QT_MOC_LITERAL(1, 27, 10), // "screenshot"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23) // "screenshotWithoutWindow"

    },
    "tahiti::STScreenshotOption\0screenshot\0"
    "\0screenshotWithoutWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STScreenshotOption[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STScreenshotOption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STScreenshotOption *_t = static_cast<STScreenshotOption *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenshot(); break;
        case 1: _t->screenshotWithoutWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STScreenshotOption::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshotOption::screenshot)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STScreenshotOption::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STScreenshotOption::screenshotWithoutWindow)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tahiti::STScreenshotOption::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STScreenshotOption.data,
      qt_meta_data_tahiti__STScreenshotOption,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STScreenshotOption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STScreenshotOption::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STScreenshotOption.stringdata0))
        return static_cast<void*>(const_cast< STScreenshotOption*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STScreenshotOption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void tahiti::STScreenshotOption::screenshot()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tahiti::STScreenshotOption::screenshotWithoutWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
