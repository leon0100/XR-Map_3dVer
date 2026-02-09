/****************************************************************************
** Meta object code from reading C++ file 'tile_set.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tile_engine/tile_set.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile_set.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_map__TileSet_t {
    QByteArrayData data[29];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map__TileSet_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map__TileSet_t qt_meta_stringdata_map__TileSet = {
    {
QT_MOC_LITERAL(0, 0, 12), // "map::TileSet"
QT_MOC_LITERAL(1, 13, 11), // "dbLoadTiles"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "QSet<map::TileIndex>"
QT_MOC_LITERAL(4, 47, 11), // "tileIndices"
QT_MOC_LITERAL(5, 59, 19), // "dbStopAndClearTasks"
QT_MOC_LITERAL(6, 79, 17), // "dbStopLoadingTile"
QT_MOC_LITERAL(7, 97, 14), // "map::TileIndex"
QT_MOC_LITERAL(8, 112, 8), // "tileIndx"
QT_MOC_LITERAL(9, 121, 10), // "dbSaveTile"
QT_MOC_LITERAL(10, 132, 5), // "image"
QT_MOC_LITERAL(11, 138, 12), // "mvAppendTile"
QT_MOC_LITERAL(12, 151, 9), // "map::Tile"
QT_MOC_LITERAL(13, 161, 4), // "tile"
QT_MOC_LITERAL(14, 166, 12), // "mvDeleteTile"
QT_MOC_LITERAL(15, 179, 17), // "mvUpdateTileImage"
QT_MOC_LITERAL(16, 197, 20), // "mvUpdateTileVertices"
QT_MOC_LITERAL(17, 218, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(18, 237, 8), // "vertices"
QT_MOC_LITERAL(19, 246, 18), // "mvClearAppendTasks"
QT_MOC_LITERAL(20, 265, 12), // "onTileLoaded"
QT_MOC_LITERAL(21, 278, 16), // "onTileLoadFailed"
QT_MOC_LITERAL(22, 295, 11), // "errorString"
QT_MOC_LITERAL(23, 307, 17), // "onTileLoadStopped"
QT_MOC_LITERAL(24, 325, 11), // "onTileSaved"
QT_MOC_LITERAL(25, 337, 16), // "onTileDownloaded"
QT_MOC_LITERAL(26, 354, 20), // "onTileDownloadFailed"
QT_MOC_LITERAL(27, 375, 21), // "onTileDownloadStopped"
QT_MOC_LITERAL(28, 397, 19) // "onDeletedFromAppend"

    },
    "map::TileSet\0dbLoadTiles\0\0"
    "QSet<map::TileIndex>\0tileIndices\0"
    "dbStopAndClearTasks\0dbStopLoadingTile\0"
    "map::TileIndex\0tileIndx\0dbSaveTile\0"
    "image\0mvAppendTile\0map::Tile\0tile\0"
    "mvDeleteTile\0mvUpdateTileImage\0"
    "mvUpdateTileVertices\0QVector<QVector3D>\0"
    "vertices\0mvClearAppendTasks\0onTileLoaded\0"
    "onTileLoadFailed\0errorString\0"
    "onTileLoadStopped\0onTileSaved\0"
    "onTileDownloaded\0onTileDownloadFailed\0"
    "onTileDownloadStopped\0onDeletedFromAppend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map__TileSet[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       5,    0,  102,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       9,    2,  106,    2, 0x06 /* Public */,
      11,    1,  111,    2, 0x06 /* Public */,
      14,    1,  114,    2, 0x06 /* Public */,
      15,    2,  117,    2, 0x06 /* Public */,
      16,    2,  122,    2, 0x06 /* Public */,
      19,    0,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    2,  128,    2, 0x0a /* Public */,
      21,    2,  133,    2, 0x0a /* Public */,
      23,    1,  138,    2, 0x0a /* Public */,
      24,    1,  141,    2, 0x0a /* Public */,
      25,    2,  144,    2, 0x0a /* Public */,
      26,    2,  149,    2, 0x0a /* Public */,
      27,    1,  154,    2, 0x0a /* Public */,
      28,    1,  157,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage,    8,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage,    8,   10,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 17,   13,   18,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage,    8,   10,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   22,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QImage,    8,   10,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,   22,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void map::TileSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileSet *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dbLoadTiles((*reinterpret_cast< const QSet<map::TileIndex>(*)>(_a[1]))); break;
        case 1: _t->dbStopAndClearTasks(); break;
        case 2: _t->dbStopLoadingTile((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 3: _t->dbSaveTile((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->mvAppendTile((*reinterpret_cast< const map::Tile(*)>(_a[1]))); break;
        case 5: _t->mvDeleteTile((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 6: _t->mvUpdateTileImage((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 7: _t->mvUpdateTileVertices((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QVector<QVector3D>(*)>(_a[2]))); break;
        case 8: _t->mvClearAppendTasks(); break;
        case 9: _t->onTileLoaded((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 10: _t->onTileLoadFailed((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->onTileLoadStopped((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 12: _t->onTileSaved((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 13: _t->onTileDownloaded((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 14: _t->onTileDownloadFailed((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 15: _t->onTileDownloadStopped((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 16: _t->onDeletedFromAppend((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<map::TileIndex> >(); break;
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::Tile >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 16:
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
            using _t = void (TileSet::*)(const QSet<map::TileIndex> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::dbLoadTiles)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TileSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::dbStopAndClearTasks)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::dbStopLoadingTile)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::TileIndex & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::dbSaveTile)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::Tile & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::mvAppendTile)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::mvDeleteTile)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::TileIndex & , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::mvUpdateTileImage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TileSet::*)(const map::TileIndex & , const QVector<QVector3D> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::mvUpdateTileVertices)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TileSet::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileSet::mvClearAppendTasks)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject map::TileSet::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_map__TileSet.data,
    qt_meta_data_map__TileSet,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *map::TileSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map::TileSet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_map__TileSet.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int map::TileSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void map::TileSet::dbLoadTiles(const QSet<map::TileIndex> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void map::TileSet::dbStopAndClearTasks()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void map::TileSet::dbStopLoadingTile(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void map::TileSet::dbSaveTile(const map::TileIndex & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void map::TileSet::mvAppendTile(const map::Tile & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void map::TileSet::mvDeleteTile(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void map::TileSet::mvUpdateTileImage(const map::TileIndex & _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void map::TileSet::mvUpdateTileVertices(const map::TileIndex & _t1, const QVector<QVector3D> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void map::TileSet::mvClearAppendTasks()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
