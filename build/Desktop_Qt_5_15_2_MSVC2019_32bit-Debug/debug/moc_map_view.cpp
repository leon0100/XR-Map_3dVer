/****************************************************************************
** Meta object code from reading C++ file 'map_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/map_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapView_t {
    QByteArrayData data[19];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapView_t qt_meta_stringdata_MapView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MapView"
QT_MOC_LITERAL(1, 8, 11), // "QML.Element"
QT_MOC_LITERAL(2, 20, 13), // "sendTextureId"
QT_MOC_LITERAL(3, 34, 0), // ""
QT_MOC_LITERAL(4, 35, 14), // "map::TileIndex"
QT_MOC_LITERAL(5, 50, 8), // "tileIndx"
QT_MOC_LITERAL(6, 59, 6), // "GLuint"
QT_MOC_LITERAL(7, 66, 9), // "textureId"
QT_MOC_LITERAL(8, 76, 17), // "deletedFromAppend"
QT_MOC_LITERAL(9, 94, 12), // "onTileAppend"
QT_MOC_LITERAL(10, 107, 9), // "map::Tile"
QT_MOC_LITERAL(11, 117, 4), // "tile"
QT_MOC_LITERAL(12, 122, 12), // "onTileDelete"
QT_MOC_LITERAL(13, 135, 18), // "onTileImageUpdated"
QT_MOC_LITERAL(14, 154, 5), // "image"
QT_MOC_LITERAL(15, 160, 21), // "onTileVerticesUpdated"
QT_MOC_LITERAL(16, 182, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(17, 201, 8), // "vertices"
QT_MOC_LITERAL(18, 210, 18) // "onClearAppendTasks"

    },
    "MapView\0QML.Element\0sendTextureId\0\0"
    "map::TileIndex\0tileIndx\0GLuint\0textureId\0"
    "deletedFromAppend\0onTileAppend\0map::Tile\0"
    "tile\0onTileDelete\0onTileImageUpdated\0"
    "image\0onTileVerticesUpdated\0"
    "QVector<QVector3D>\0vertices\0"
    "onClearAppendTasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapView[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags
       2,    2,   51,    3, 0x06 /* Public */,
       8,    1,   56,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   59,    3, 0x0a /* Public */,
      12,    1,   62,    3, 0x0a /* Public */,
      13,    2,   65,    3, 0x0a /* Public */,
      15,    2,   70,    3, 0x0a /* Public */,
      18,    0,   75,    3, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QImage,    5,   14,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 16,    5,   17,
    QMetaType::Void,

       0        // eod
};

void MapView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendTextureId((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 1: _t->deletedFromAppend((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 2: _t->onTileAppend((*reinterpret_cast< const map::Tile(*)>(_a[1]))); break;
        case 3: _t->onTileDelete((*reinterpret_cast< const map::TileIndex(*)>(_a[1]))); break;
        case 4: _t->onTileImageUpdated((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 5: _t->onTileVerticesUpdated((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< const QVector<QVector3D>(*)>(_a[2]))); break;
        case 6: _t->onClearAppendTasks(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::Tile >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapView::*)(const map::TileIndex & , GLuint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapView::sendTextureId)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapView::*)(const map::TileIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapView::deletedFromAppend)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapView::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_MapView.data,
    qt_meta_data_MapView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapView.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int MapView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MapView::sendTextureId(const map::TileIndex & _t1, GLuint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MapView::deletedFromAppend(const map::TileIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
