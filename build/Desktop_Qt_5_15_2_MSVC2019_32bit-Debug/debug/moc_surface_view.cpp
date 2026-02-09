/****************************************************************************
** Meta object code from reading C++ file 'surface_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/surface_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'surface_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SurfaceView_t {
    QByteArrayData data[24];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SurfaceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SurfaceView_t qt_meta_stringdata_SurfaceView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SurfaceView"
QT_MOC_LITERAL(1, 12, 11), // "QML.Element"
QT_MOC_LITERAL(2, 24, 5), // "clear"
QT_MOC_LITERAL(3, 30, 0), // ""
QT_MOC_LITERAL(4, 31, 8), // "setTiles"
QT_MOC_LITERAL(5, 40, 24), // "QHash<QUuid,SurfaceTile>"
QT_MOC_LITERAL(6, 65, 5), // "tiles"
QT_MOC_LITERAL(7, 71, 11), // "useTextures"
QT_MOC_LITERAL(8, 83, 30), // "setMosaicColorTableTextureTask"
QT_MOC_LITERAL(9, 114, 20), // "std::vector<uint8_t>"
QT_MOC_LITERAL(10, 135, 21), // "colorTableTextureTask"
QT_MOC_LITERAL(11, 157, 7), // "setMinZ"
QT_MOC_LITERAL(12, 165, 4), // "minZ"
QT_MOC_LITERAL(13, 170, 7), // "setMaxZ"
QT_MOC_LITERAL(14, 178, 4), // "maxZ"
QT_MOC_LITERAL(15, 183, 14), // "setSurfaceStep"
QT_MOC_LITERAL(16, 198, 11), // "surfaceStep"
QT_MOC_LITERAL(17, 210, 14), // "setTextureTask"
QT_MOC_LITERAL(18, 225, 11), // "textureTask"
QT_MOC_LITERAL(19, 237, 21), // "setColorIntervalsSize"
QT_MOC_LITERAL(20, 259, 4), // "size"
QT_MOC_LITERAL(21, 264, 11), // "removeTiles"
QT_MOC_LITERAL(22, 276, 11), // "QSet<QUuid>"
QT_MOC_LITERAL(23, 288, 3) // "ids"

    },
    "SurfaceView\0QML.Element\0clear\0\0setTiles\0"
    "QHash<QUuid,SurfaceTile>\0tiles\0"
    "useTextures\0setMosaicColorTableTextureTask\0"
    "std::vector<uint8_t>\0colorTableTextureTask\0"
    "setMinZ\0minZ\0setMaxZ\0maxZ\0setSurfaceStep\0"
    "surfaceStep\0setTextureTask\0textureTask\0"
    "setColorIntervalsSize\0size\0removeTiles\0"
    "QSet<QUuid>\0ids"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SurfaceView[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // slots: name, argc, parameters, tag, flags
       2,    0,   61,    3, 0x0a /* Public */,
       4,    2,   62,    3, 0x0a /* Public */,
       8,    1,   67,    3, 0x0a /* Public */,
      11,    1,   70,    3, 0x0a /* Public */,
      13,    1,   73,    3, 0x0a /* Public */,
      15,    1,   76,    3, 0x0a /* Public */,
      17,    1,   79,    3, 0x0a /* Public */,
      19,    1,   82,    3, 0x0a /* Public */,
      21,    1,   85,    3, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Float,   12,
    QMetaType::Void, QMetaType::Float,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, 0x80000000 | 9,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, 0x80000000 | 22,   23,

       0        // eod
};

void SurfaceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SurfaceView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->setTiles((*reinterpret_cast< const QHash<QUuid,SurfaceTile>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setMosaicColorTableTextureTask((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 3: _t->setMinZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setMaxZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setSurfaceStep((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setTextureTask((*reinterpret_cast< const std::vector<uint8_t>(*)>(_a[1]))); break;
        case 7: _t->setColorIntervalsSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->removeTiles((*reinterpret_cast< const QSet<QUuid>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSet<QUuid> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SurfaceView::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_SurfaceView.data,
    qt_meta_data_SurfaceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SurfaceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SurfaceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SurfaceView.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int SurfaceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
