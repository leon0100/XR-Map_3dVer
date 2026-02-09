/****************************************************************************
** Meta object code from reading C++ file 'tile_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/tile_engine/tile_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tile_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_map__TileManager_t {
    QByteArrayData data[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_map__TileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_map__TileManager_t qt_meta_stringdata_map__TileManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "map::TileManager"
QT_MOC_LITERAL(1, 17, 16), // "zoomLevelChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "level"
QT_MOC_LITERAL(4, 41, 14), // "getRectRequest"
QT_MOC_LITERAL(5, 56, 12), // "QVector<LLA>"
QT_MOC_LITERAL(6, 69, 7), // "request"
QT_MOC_LITERAL(7, 77, 13), // "isPerspective"
QT_MOC_LITERAL(8, 91, 6), // "LLARef"
QT_MOC_LITERAL(9, 98, 10), // "viewLlaRef"
QT_MOC_LITERAL(10, 109, 6), // "moveUp"
QT_MOC_LITERAL(11, 116, 15), // "map::CameraTilt"
QT_MOC_LITERAL(12, 132, 7), // "tiltCam"
QT_MOC_LITERAL(13, 140, 9) // "getLlaRef"

    },
    "map::TileManager\0zoomLevelChanged\0\0"
    "level\0getRectRequest\0QVector<LLA>\0"
    "request\0isPerspective\0LLARef\0viewLlaRef\0"
    "moveUp\0map::CameraTilt\0tiltCam\0getLlaRef"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_map__TileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    5,   32,    2, 0x0a /* Public */,
      13,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool, 0x80000000 | 8, QMetaType::Bool, 0x80000000 | 11,    6,    7,    9,   10,   12,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void map::TileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->getRectRequest((*reinterpret_cast< QVector<LLA>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< LLARef(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< map::CameraTilt(*)>(_a[5]))); break;
        case 2: _t->getLlaRef((*reinterpret_cast< LLARef(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TileManager::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileManager::zoomLevelChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject map::TileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_map__TileManager.data,
    qt_meta_data_map__TileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *map::TileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *map::TileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_map__TileManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int map::TileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void map::TileManager::zoomLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
