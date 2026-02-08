/****************************************************************************
** Meta object code from reading C++ file 'tile_downloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tile_engine/tile_downloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile_downloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_map__TileDownloader_t {
    QByteArrayData data[13];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map__TileDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map__TileDownloader_t qt_meta_stringdata_map__TileDownloader = {
    {
QT_MOC_LITERAL(0, 0, 19), // "map::TileDownloader"
QT_MOC_LITERAL(1, 20, 14), // "tileDownloaded"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "map::TileIndex"
QT_MOC_LITERAL(4, 51, 8), // "tileIndx"
QT_MOC_LITERAL(5, 60, 5), // "image"
QT_MOC_LITERAL(6, 66, 14), // "downloadFailed"
QT_MOC_LITERAL(7, 81, 11), // "errorString"
QT_MOC_LITERAL(8, 93, 15), // "downloadStopped"
QT_MOC_LITERAL(9, 109, 16), // "onTileDownloaded"
QT_MOC_LITERAL(10, 126, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 141, 5), // "reply"
QT_MOC_LITERAL(12, 147, 29) // "checkNetworkAvailabilityAsync"

    },
    "map::TileDownloader\0tileDownloaded\0\0"
    "map::TileIndex\0tileIndx\0image\0"
    "downloadFailed\0errorString\0downloadStopped\0"
    "onTileDownloaded\0QNetworkReply*\0reply\0"
    "checkNetworkAvailabilityAsync"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map__TileDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   52,    2, 0x08 /* Private */,
      12,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void map::TileDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileDownloaded((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->downloadFailed((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->downloadStopped((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 3: _t->onTileDownloaded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->checkNetworkAvailabilityAsync(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileDownloader::*)(const map::TileIndex & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDownloader::tileDownloaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileDownloader::*)(const map::TileIndex & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDownloader::downloadFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileDownloader::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDownloader::downloadStopped)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject map::TileDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_map__TileDownloader.data,
    qt_meta_data_map__TileDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *map::TileDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map::TileDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_map__TileDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int map::TileDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void map::TileDownloader::tileDownloaded(const map::TileIndex & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void map::TileDownloader::downloadFailed(const map::TileIndex & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void map::TileDownloader::downloadStopped(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
