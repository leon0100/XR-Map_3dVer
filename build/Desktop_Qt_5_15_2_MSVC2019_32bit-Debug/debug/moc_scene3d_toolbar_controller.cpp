/****************************************************************************
** Meta object code from reading C++ file 'scene3d_toolbar_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/scene3d_toolbar_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene3d_toolbar_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene3dToolBarController_t {
    QByteArrayData data[15];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene3dToolBarController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene3dToolBarController_t qt_meta_stringdata_Scene3dToolBarController = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Scene3dToolBarController"
QT_MOC_LITERAL(1, 25, 27), // "onFitAllInViewButtonClicked"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 37), // "onSetCameraIsometricViewButto..."
QT_MOC_LITERAL(4, 92, 31), // "onSetCameraMapViewButtonClicked"
QT_MOC_LITERAL(5, 124, 43), // "onBottomTrackVertexEditingMod..."
QT_MOC_LITERAL(6, 168, 7), // "checked"
QT_MOC_LITERAL(7, 176, 25), // "onCancelZoomButtonClicked"
QT_MOC_LITERAL(8, 202, 40), // "onTrackLastDataCheckButtonChe..."
QT_MOC_LITERAL(9, 243, 5), // "state"
QT_MOC_LITERAL(10, 249, 44), // "onUpdateBottomTrackCheckButto..."
QT_MOC_LITERAL(11, 294, 30), // "onGridVisibilityCheckedChanged"
QT_MOC_LITERAL(12, 325, 31), // "onUseAngleLocationButtonChanged"
QT_MOC_LITERAL(13, 357, 32), // "onNavigatorLocationButtonChanged"
QT_MOC_LITERAL(14, 390, 30) // "onIsNorthLocationButtonChanged"

    },
    "Scene3dToolBarController\0"
    "onFitAllInViewButtonClicked\0\0"
    "onSetCameraIsometricViewButtonClicked\0"
    "onSetCameraMapViewButtonClicked\0"
    "onBottomTrackVertexEditingModeButtonChecked\0"
    "checked\0onCancelZoomButtonClicked\0"
    "onTrackLastDataCheckButtonCheckedChanged\0"
    "state\0onUpdateBottomTrackCheckButtonCheckedChanged\0"
    "onGridVisibilityCheckedChanged\0"
    "onUseAngleLocationButtonChanged\0"
    "onNavigatorLocationButtonChanged\0"
    "onIsNorthLocationButtonChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene3dToolBarController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x02 /* Public */,
       3,    0,   70,    2, 0x02 /* Public */,
       4,    0,   71,    2, 0x02 /* Public */,
       5,    1,   72,    2, 0x02 /* Public */,
       7,    0,   75,    2, 0x02 /* Public */,
       8,    1,   76,    2, 0x02 /* Public */,
      10,    1,   79,    2, 0x02 /* Public */,
      11,    1,   82,    2, 0x02 /* Public */,
      12,    1,   85,    2, 0x02 /* Public */,
      13,    1,   88,    2, 0x02 /* Public */,
      14,    1,   91,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void Scene3dToolBarController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scene3dToolBarController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFitAllInViewButtonClicked(); break;
        case 1: _t->onSetCameraIsometricViewButtonClicked(); break;
        case 2: _t->onSetCameraMapViewButtonClicked(); break;
        case 3: _t->onBottomTrackVertexEditingModeButtonChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onCancelZoomButtonClicked(); break;
        case 5: _t->onTrackLastDataCheckButtonCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onUpdateBottomTrackCheckButtonCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onGridVisibilityCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onUseAngleLocationButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onNavigatorLocationButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onIsNorthLocationButtonChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scene3dToolBarController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_Scene3dToolBarController.data,
    qt_meta_data_Scene3dToolBarController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scene3dToolBarController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene3dToolBarController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene3dToolBarController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int Scene3dToolBarController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlComponentController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
