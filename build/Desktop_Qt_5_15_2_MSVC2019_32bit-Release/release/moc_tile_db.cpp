/****************************************************************************
** Meta object code from reading C++ file 'tile_db.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tile_engine/tile_db.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile_db.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_map__TileDB_t {
    QByteArrayData data[18];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map__TileDB_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map__TileDB_t qt_meta_stringdata_map__TileDB = {
    {
QT_MOC_LITERAL(0, 0, 11), // "map::TileDB"
QT_MOC_LITERAL(1, 12, 10), // "tileLoaded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "map::TileIndex"
QT_MOC_LITERAL(4, 39, 8), // "tileIndx"
QT_MOC_LITERAL(5, 48, 5), // "image"
QT_MOC_LITERAL(6, 54, 14), // "tileLoadFailed"
QT_MOC_LITERAL(7, 69, 11), // "errorString"
QT_MOC_LITERAL(8, 81, 15), // "tileLoadStopped"
QT_MOC_LITERAL(9, 97, 9), // "tileSaved"
QT_MOC_LITERAL(10, 107, 4), // "init"
QT_MOC_LITERAL(11, 112, 9), // "loadTiles"
QT_MOC_LITERAL(12, 122, 20), // "QSet<map::TileIndex>"
QT_MOC_LITERAL(13, 143, 11), // "tileIndices"
QT_MOC_LITERAL(14, 155, 8), // "saveTile"
QT_MOC_LITERAL(15, 164, 11), // "stopLoading"
QT_MOC_LITERAL(16, 176, 20), // "stopAndClearRequests"
QT_MOC_LITERAL(17, 197, 15) // "processNextTile"

    },
    "map::TileDB\0tileLoaded\0\0map::TileIndex\0"
    "tileIndx\0image\0tileLoadFailed\0errorString\0"
    "tileLoadStopped\0tileSaved\0init\0loadTiles\0"
    "QSet<map::TileIndex>\0tileIndices\0"
    "saveTile\0stopLoading\0stopAndClearRequests\0"
    "processNextTile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map__TileDB[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    2,   69,    2, 0x06 /* Public */,
       8,    1,   74,    2, 0x06 /* Public */,
       9,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   80,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      14,    2,   84,    2, 0x0a /* Public */,
      15,    1,   89,    2, 0x0a /* Public */,
      16,    0,   92,    2, 0x0a /* Public */,
      17,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QImage,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void map::TileDB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileDB *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tileLoaded((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 1: _t->tileLoadFailed((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->tileLoadStopped((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 3: _t->tileSaved((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 4: _t->init(); break;
        case 5: _t->loadTiles((*reinterpret_cast< const QSet<map::TileIndex>(*)>(_a[1]))); break;
        case 6: _t->saveTile((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 7: _t->stopLoading((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 8: _t->stopAndClearRequests(); break;
        case 9: _t->processNextTile(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<map::TileIndex> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileDB::*)(const map::TileIndex & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDB::tileLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileDB::*)(const map::TileIndex & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDB::tileLoadFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileDB::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDB::tileLoadStopped)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TileDB::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileDB::tileSaved)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject map::TileDB::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_map__TileDB.data,
    qt_meta_data_map__TileDB,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *map::TileDB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map::TileDB::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_map__TileDB.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int map::TileDB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void map::TileDB::tileLoaded(const map::TileIndex & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void map::TileDB::tileLoadFailed(const map::TileIndex & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void map::TileDB::tileLoadStopped(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void map::TileDB::tileSaved(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
