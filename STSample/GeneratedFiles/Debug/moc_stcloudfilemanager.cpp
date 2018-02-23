/****************************************************************************
** Meta object code from reading C++ file 'stcloudfilemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stcloudfilemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stcloudfilemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tahiti__STCloudFileManager_t {
    QByteArrayData data[16];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudFileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudFileManager_t qt_meta_stringdata_tahiti__STCloudFileManager = {
    {
QT_MOC_LITERAL(0, 0, 26), // "tahiti::STCloudFileManager"
QT_MOC_LITERAL(1, 27, 19), // "on_pbUpload_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "on_pbNew_clicked"
QT_MOC_LITERAL(4, 65, 17), // "on_pbCopy_clicked"
QT_MOC_LITERAL(5, 83, 17), // "on_pbMove_clicked"
QT_MOC_LITERAL(6, 101, 16), // "on_pbDel_clicked"
QT_MOC_LITERAL(7, 118, 20), // "on_pbSupport_clicked"
QT_MOC_LITERAL(8, 139, 14), // "changeRowColor"
QT_MOC_LITERAL(9, 154, 3), // "row"
QT_MOC_LITERAL(10, 158, 6), // "column"
QT_MOC_LITERAL(11, 165, 17), // "onFileItemClicked"
QT_MOC_LITERAL(12, 183, 15), // "onFolderClicked"
QT_MOC_LITERAL(13, 199, 14), // "processMessage"
QT_MOC_LITERAL(14, 214, 13), // "handleNewFile"
QT_MOC_LITERAL(15, 228, 16) // "handleFolderView"

    },
    "tahiti::STCloudFileManager\0"
    "on_pbUpload_clicked\0\0on_pbNew_clicked\0"
    "on_pbCopy_clicked\0on_pbMove_clicked\0"
    "on_pbDel_clicked\0on_pbSupport_clicked\0"
    "changeRowColor\0row\0column\0onFileItemClicked\0"
    "onFolderClicked\0processMessage\0"
    "handleNewFile\0handleFolderView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudFileManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    2,   80,    2, 0x0a /* Public */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      15,    2,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void tahiti::STCloudFileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STCloudFileManager *_t = static_cast<STCloudFileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbUpload_clicked(); break;
        case 1: _t->on_pbNew_clicked(); break;
        case 2: _t->on_pbCopy_clicked(); break;
        case 3: _t->on_pbMove_clicked(); break;
        case 4: _t->on_pbDel_clicked(); break;
        case 5: _t->on_pbSupport_clicked(); break;
        case 6: _t->changeRowColor((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->onFileItemClicked(); break;
        case 8: _t->onFolderClicked(); break;
        case 9: _t->processMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->handleNewFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->handleFolderView((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject tahiti::STCloudFileManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STCloudFileManager.data,
      qt_meta_data_tahiti__STCloudFileManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudFileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudFileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudFileManager.stringdata0))
        return static_cast<void*>(const_cast< STCloudFileManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STCloudFileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_tahiti__STCloudUploadClient_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudUploadClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudUploadClient_t qt_meta_stringdata_tahiti__STCloudUploadClient = {
    {
QT_MOC_LITERAL(0, 0, 27), // "tahiti::STCloudUploadClient"
QT_MOC_LITERAL(1, 28, 15), // "onUploadProcess"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "percent"
QT_MOC_LITERAL(4, 53, 16), // "onUploadFinished"
QT_MOC_LITERAL(5, 70, 12), // "sendFileInfo"
QT_MOC_LITERAL(6, 83, 14) // "uploadFileData"

    },
    "tahiti::STCloudUploadClient\0onUploadProcess\0"
    "\0percent\0onUploadFinished\0sendFileInfo\0"
    "uploadFileData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudUploadClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,

       0        // eod
};

void tahiti::STCloudUploadClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STCloudUploadClient *_t = static_cast<STCloudUploadClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUploadProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onUploadFinished(); break;
        case 2: _t->sendFileInfo(); break;
        case 3: _t->uploadFileData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STCloudUploadClient::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STCloudUploadClient::onUploadProcess)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (STCloudUploadClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STCloudUploadClient::onUploadFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STCloudUploadClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tahiti__STCloudUploadClient.data,
      qt_meta_data_tahiti__STCloudUploadClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudUploadClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudUploadClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudUploadClient.stringdata0))
        return static_cast<void*>(const_cast< STCloudUploadClient*>(this));
    return QObject::qt_metacast(_clname);
}

int tahiti::STCloudUploadClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tahiti::STCloudUploadClient::onUploadProcess(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tahiti::STCloudUploadClient::onUploadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_tahiti__STCloudSupport_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudSupport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudSupport_t qt_meta_stringdata_tahiti__STCloudSupport = {
    {
QT_MOC_LITERAL(0, 0, 22) // "tahiti::STCloudSupport"

    },
    "tahiti::STCloudSupport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudSupport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void tahiti::STCloudSupport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject tahiti::STCloudSupport::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_tahiti__STCloudSupport.data,
      qt_meta_data_tahiti__STCloudSupport,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudSupport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudSupport::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudSupport.stringdata0))
        return static_cast<void*>(const_cast< STCloudSupport*>(this));
    return QWidget::qt_metacast(_clname);
}

int tahiti::STCloudSupport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_tahiti__STCloudUploadFile_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudUploadFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudUploadFile_t qt_meta_stringdata_tahiti__STCloudUploadFile = {
    {
QT_MOC_LITERAL(0, 0, 25), // "tahiti::STCloudUploadFile"
QT_MOC_LITERAL(1, 26, 9), // "confirmOK"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "on_pbOK_clicked"
QT_MOC_LITERAL(4, 53, 17), // "on_pbGoon_clicked"
QT_MOC_LITERAL(5, 71, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(6, 91, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(7, 110, 19), // "on_pbUpload_clicked"
QT_MOC_LITERAL(8, 130, 16), // "onUploadFinished"
QT_MOC_LITERAL(9, 147, 15), // "onUploadProcess"
QT_MOC_LITERAL(10, 163, 7) // "percent"

    },
    "tahiti::STCloudUploadFile\0confirmOK\0"
    "\0on_pbOK_clicked\0on_pbGoon_clicked\0"
    "on_pbCancel_clicked\0on_pbClose_clicked\0"
    "on_pbUpload_clicked\0onUploadFinished\0"
    "onUploadProcess\0percent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudUploadFile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x0a /* Public */,
       4,    0,   58,    2, 0x0a /* Public */,
       5,    0,   59,    2, 0x0a /* Public */,
       6,    0,   60,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void tahiti::STCloudUploadFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STCloudUploadFile *_t = static_cast<STCloudUploadFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmOK((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pbOK_clicked(); break;
        case 2: _t->on_pbGoon_clicked(); break;
        case 3: _t->on_pbCancel_clicked(); break;
        case 4: _t->on_pbClose_clicked(); break;
        case 5: _t->on_pbUpload_clicked(); break;
        case 6: _t->onUploadFinished(); break;
        case 7: _t->onUploadProcess((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STCloudUploadFile::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STCloudUploadFile::confirmOK)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STCloudUploadFile::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STCloudUploadFile.data,
      qt_meta_data_tahiti__STCloudUploadFile,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudUploadFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudUploadFile::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudUploadFile.stringdata0))
        return static_cast<void*>(const_cast< STCloudUploadFile*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STCloudUploadFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void tahiti::STCloudUploadFile::confirmOK(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_tahiti__STCloudNewFolder_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudNewFolder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudNewFolder_t qt_meta_stringdata_tahiti__STCloudNewFolder = {
    {
QT_MOC_LITERAL(0, 0, 24), // "tahiti::STCloudNewFolder"
QT_MOC_LITERAL(1, 25, 9), // "confirmOK"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15), // "on_pbOK_clicked"
QT_MOC_LITERAL(4, 52, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(5, 72, 18) // "on_pbClose_clicked"

    },
    "tahiti::STCloudNewFolder\0confirmOK\0\0"
    "on_pbOK_clicked\0on_pbCancel_clicked\0"
    "on_pbClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudNewFolder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x0a /* Public */,
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STCloudNewFolder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STCloudNewFolder *_t = static_cast<STCloudNewFolder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmOK((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pbOK_clicked(); break;
        case 2: _t->on_pbCancel_clicked(); break;
        case 3: _t->on_pbClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STCloudNewFolder::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STCloudNewFolder::confirmOK)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STCloudNewFolder::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STCloudNewFolder.data,
      qt_meta_data_tahiti__STCloudNewFolder,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudNewFolder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudNewFolder::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudNewFolder.stringdata0))
        return static_cast<void*>(const_cast< STCloudNewFolder*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STCloudNewFolder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tahiti::STCloudNewFolder::confirmOK(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_tahiti__STCloudFolderView_t {
    QByteArrayData data[6];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tahiti__STCloudFolderView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tahiti__STCloudFolderView_t qt_meta_stringdata_tahiti__STCloudFolderView = {
    {
QT_MOC_LITERAL(0, 0, 25), // "tahiti::STCloudFolderView"
QT_MOC_LITERAL(1, 26, 9), // "confirmOK"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "on_pbOK_clicked"
QT_MOC_LITERAL(4, 53, 19), // "on_pbCancel_clicked"
QT_MOC_LITERAL(5, 73, 18) // "on_pbClose_clicked"

    },
    "tahiti::STCloudFolderView\0confirmOK\0"
    "\0on_pbOK_clicked\0on_pbCancel_clicked\0"
    "on_pbClose_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tahiti__STCloudFolderView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   39,    2, 0x0a /* Public */,
       4,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tahiti::STCloudFolderView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        STCloudFolderView *_t = static_cast<STCloudFolderView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->confirmOK((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_pbOK_clicked(); break;
        case 2: _t->on_pbCancel_clicked(); break;
        case 3: _t->on_pbClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (STCloudFolderView::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&STCloudFolderView::confirmOK)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject tahiti::STCloudFolderView::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tahiti__STCloudFolderView.data,
      qt_meta_data_tahiti__STCloudFolderView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tahiti::STCloudFolderView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tahiti::STCloudFolderView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tahiti__STCloudFolderView.stringdata0))
        return static_cast<void*>(const_cast< STCloudFolderView*>(this));
    return QDialog::qt_metacast(_clname);
}

int tahiti::STCloudFolderView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void tahiti::STCloudFolderView::confirmOK(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
