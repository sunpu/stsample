/****************************************************************************
** Meta object code from reading C++ file 'stpersonalinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stpersonalinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stpersonalinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STPersonalInfo_t {
    QByteArrayData data[15];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STPersonalInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STPersonalInfo_t qt_meta_stringdata_tahiti__STPersonalInfo = {
    {
QT_MOC_LITERAL(0, 0, 22), // "tahiti::STPersonalInfo"
QT_MOC_LITERAL(1, 23, 20), // "personalInfoFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "updateSelfPic"
QT_MOC_LITERAL(4, 59, 7), // "picPath"
QT_MOC_LITERAL(5, 67, 17), // "on_pbEdit_clicked"
QT_MOC_LITERAL(6, 85, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(7, 103, 25), // "on_pbModifyPasswd_clicked"
QT_MOC_LITERAL(8, 129, 19), // "on_pbModify_clicked"
QT_MOC_LITERAL(9, 149, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(10, 169, 22), // "updatePersonalInfoData"
QT_MOC_LITERAL(11, 192, 8), // "UserInfo"
QT_MOC_LITERAL(12, 201, 4), // "info"
QT_MOC_LITERAL(13, 206, 17), // "uploadPicFinished"
QT_MOC_LITERAL(14, 224, 4) // "path"

    },
    "tahiti::STPersonalInfo\0personalInfoFinished\0"
    "\0updateSelfPic\0picPath\0on_pbEdit_clicked\0"
    "on_pbSave_clicked\0on_pbModifyPasswd_clicked\0"
    "on_pbModify_clicked\0on_pbCancel_clicked\0"
    "updatePersonalInfoData\0UserInfo\0info\0"
    "uploadPicFinished\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STPersonalInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x0a /* Public */,
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    0,   67,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void tahiti::STPersonalInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STPersonalInfo *_t = static_cast<STPersonalInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->personalInfoFinished(); break;
        case 1: _t->updateSelfPic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pbEdit_clicked(); break;
        case 3: _t->on_pbSave_clicked(); break;
        case 4: _t->on_pbModifyPasswd_clicked(); break;
        case 5: _t->on_pbModify_clicked(); break;
        case 6: _t->on_pbCancel_clicked(); break;
        case 7: _t->updatePersonalInfoData((*reinterpret_cast< UserInfo(*)>(_a[1]))); break;
        case 8: _t->uploadPicFinished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UserInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STPersonalInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STPersonalInfo::personalInfoFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STPersonalInfo::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STPersonalInfo::updateSelfPic)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STPersonalInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STPersonalInfo.data,
      qt_meta_data_tahiti__STPersonalInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STPersonalInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STPersonalInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STPersonalInfo.stringdata0))
        return static_cast<void*>(const_cast< STPersonalInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STPersonalInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void tahiti::STPersonalInfo::personalInfoFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void tahiti::STPersonalInfo::updateSelfPic(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE