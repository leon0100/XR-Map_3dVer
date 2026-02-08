/****************************************************************************
** Meta object code from reading C++ file 'mosaic_view_control_menu_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/mosaic_view_control_menu_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mosaic_view_control_menu_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MosaicViewControlMenuController_t {
    QByteArrayData data[18];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MosaicViewControlMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MosaicViewControlMenuController_t qt_meta_stringdata_MosaicViewControlMenuController = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MosaicViewControlMenuController"
QT_MOC_LITERAL(1, 32, 19), // "onVisibilityChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 5), // "state"
QT_MOC_LITERAL(4, 59, 18), // "onUseFilterChanged"
QT_MOC_LITERAL(5, 78, 20), // "onGridVisibleChanged"
QT_MOC_LITERAL(6, 99, 24), // "onMeasLineVisibleChanged"
QT_MOC_LITERAL(7, 124, 14), // "onClearClicked"
QT_MOC_LITERAL(8, 139, 20), // "onUpdateStateChanged"
QT_MOC_LITERAL(9, 160, 14), // "onThemeChanged"
QT_MOC_LITERAL(10, 175, 3), // "val"
QT_MOC_LITERAL(11, 179, 14), // "onLevelChanged"
QT_MOC_LITERAL(12, 194, 8), // "lowLevel"
QT_MOC_LITERAL(13, 203, 9), // "highLevel"
QT_MOC_LITERAL(14, 213, 15), // "onUpdateClicked"
QT_MOC_LITERAL(15, 229, 17), // "onSetLAngleOffset"
QT_MOC_LITERAL(16, 247, 17), // "onSetRAngleOffset"
QT_MOC_LITERAL(17, 265, 15) // "onSetResolution"

    },
    "MosaicViewControlMenuController\0"
    "onVisibilityChanged\0\0state\0"
    "onUseFilterChanged\0onGridVisibleChanged\0"
    "onMeasLineVisibleChanged\0onClearClicked\0"
    "onUpdateStateChanged\0onThemeChanged\0"
    "val\0onLevelChanged\0lowLevel\0highLevel\0"
    "onUpdateClicked\0onSetLAngleOffset\0"
    "onSetRAngleOffset\0onSetResolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MosaicViewControlMenuController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x02 /* Public */,
       4,    1,   77,    2, 0x02 /* Public */,
       5,    1,   80,    2, 0x02 /* Public */,
       6,    1,   83,    2, 0x02 /* Public */,
       7,    0,   86,    2, 0x02 /* Public */,
       8,    1,   87,    2, 0x02 /* Public */,
       9,    1,   90,    2, 0x02 /* Public */,
      11,    2,   93,    2, 0x02 /* Public */,
      14,    0,   98,    2, 0x02 /* Public */,
      15,    1,   99,    2, 0x02 /* Public */,
      16,    1,  102,    2, 0x02 /* Public */,
      17,    1,  105,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::Float,   10,

       0        // eod
};

void MosaicViewControlMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MosaicViewControlMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onUseFilterChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onGridVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onMeasLineVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onClearClicked(); break;
        case 5: _t->onUpdateStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onLevelChanged((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->onUpdateClicked(); break;
        case 9: _t->onSetLAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->onSetRAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->onSetResolution((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MosaicViewControlMenuController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_MosaicViewControlMenuController.data,
    qt_meta_data_MosaicViewControlMenuController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MosaicViewControlMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MosaicViewControlMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MosaicViewControlMenuController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int MosaicViewControlMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlComponentController::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
