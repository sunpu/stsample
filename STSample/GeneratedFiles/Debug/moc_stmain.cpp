/****************************************************************************
** Meta object code from reading C++ file 'stmain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stmain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stmain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STMain_t {
    QByteArrayData data[21];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STMain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STMain_t qt_meta_stringdata_tahiti__STMain = {
    {
QT_MOC_LITERAL(0, 0, 14), // "tahiti::STMain"
QT_MOC_LITERAL(1, 15, 17), // "changeLoginWindow"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "on_pbChat_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_pbContact_clicked"
QT_MOC_LITERAL(5, 73, 23), // "on_pbAddContact_clicked"
QT_MOC_LITERAL(6, 97, 20), // "on_pbMessage_clicked"
QT_MOC_LITERAL(7, 118, 20), // "on_pbSetting_clicked"
QT_MOC_LITERAL(8, 139, 20), // "on_pbMinimum_clicked"
QT_MOC_LITERAL(9, 160, 20), // "on_pbMaximum_clicked"
QT_MOC_LITERAL(10, 181, 19), // "on_pbNormal_clicked"
QT_MOC_LITERAL(11, 201, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(12, 220, 20), // "on_pbRelogin_clicked"
QT_MOC_LITERAL(13, 241, 25), // "on_lwChatList_itemClicked"
QT_MOC_LITERAL(14, 267, 28), // "on_lwContactList_itemClicked"
QT_MOC_LITERAL(15, 296, 34), // "on_lwContactList_itemDoubleCl..."
QT_MOC_LITERAL(16, 331, 15), // "reorderChatList"
QT_MOC_LITERAL(17, 347, 3), // "jid"
QT_MOC_LITERAL(18, 351, 16), // "switchChatWindow"
QT_MOC_LITERAL(19, 368, 13), // "updateSelfPic"
QT_MOC_LITERAL(20, 382, 7) // "picPath"

    },
    "tahiti::STMain\0changeLoginWindow\0\0"
    "on_pbChat_clicked\0on_pbContact_clicked\0"
    "on_pbAddContact_clicked\0on_pbMessage_clicked\0"
    "on_pbSetting_clicked\0on_pbMinimum_clicked\0"
    "on_pbMaximum_clicked\0on_pbNormal_clicked\0"
    "on_pbClose_clicked\0on_pbRelogin_clicked\0"
    "on_lwChatList_itemClicked\0"
    "on_lwContactList_itemClicked\0"
    "on_lwContactList_itemDoubleClicked\0"
    "reorderChatList\0jid\0switchChatWindow\0"
    "updateSelfPic\0picPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STMain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    1,  113,    2, 0x08 /* Private */,
      18,    1,  116,    2, 0x08 /* Private */,
      19,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   20,

       0        // eod
};

void tahiti::STMain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STMain *_t = static_cast<STMain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeLoginWindow(); break;
        case 1: _t->on_pbChat_clicked(); break;
        case 2: _t->on_pbContact_clicked(); break;
        case 3: _t->on_pbAddContact_clicked(); break;
        case 4: _t->on_pbMessage_clicked(); break;
        case 5: _t->on_pbSetting_clicked(); break;
        case 6: _t->on_pbMinimum_clicked(); break;
        case 7: _t->on_pbMaximum_clicked(); break;
        case 8: _t->on_pbNormal_clicked(); break;
        case 9: _t->on_pbClose_clicked(); break;
        case 10: _t->on_pbRelogin_clicked(); break;
        case 11: _t->on_lwChatList_itemClicked(); break;
        case 12: _t->on_lwContactList_itemClicked(); break;
        case 13: _t->on_lwContactList_itemDoubleClicked(); break;
        case 14: _t->reorderChatList((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->switchChatWindow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->updateSelfPic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STMain::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STMain::changeLoginWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STMain::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STMain.data,
      qt_meta_data_tahiti__STMain,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STMain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STMain::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STMain.stringdata0))
        return static_cast<void*>(const_cast< STMain*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STMain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STMain::changeLoginWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
