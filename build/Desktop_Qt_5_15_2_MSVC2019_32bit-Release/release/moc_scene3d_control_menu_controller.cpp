/****************************************************************************
** Meta object code from reading C++ file 'scene3d_control_menu_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/scene3d_control_menu_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene3d_control_menu_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene3DControlMenuController_t {
    QByteArrayData data[10];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene3DControlMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene3DControlMenuController_t qt_meta_stringdata_Scene3DControlMenuController = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Scene3DControlMenuController"
QT_MOC_LITERAL(1, 29, 33), // "onVerticalScaleSliderValueCha..."
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 5), // "value"
QT_MOC_LITERAL(4, 70, 37), // "onShowSceneBoundingBoxCheckBo..."
QT_MOC_LITERAL(5, 108, 7), // "checked"
QT_MOC_LITERAL(6, 116, 26), // "onExportToCSVButtonClicked"
QT_MOC_LITERAL(7, 143, 4), // "path"
QT_MOC_LITERAL(8, 148, 13), // "verticalScale"
QT_MOC_LITERAL(9, 162, 23) // "sceneBoundingBoxVisible"

    },
    "Scene3DControlMenuController\0"
    "onVerticalScaleSliderValueChanged\0\0"
    "value\0onShowSceneBoundingBoxCheckBoxChecked\0"
    "checked\0onExportToCSVButtonClicked\0"
    "path\0verticalScale\0sceneBoundingBoxVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene3DControlMenuController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    1,   32,    2, 0x02 /* Public */,
       6,    1,   35,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       8, QMetaType::Float, 0x00095401,
       9, QMetaType::Bool, 0x00095401,

       0        // eod
};

void Scene3DControlMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scene3DControlMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onVerticalScaleSliderValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->onShowSceneBoundingBoxCheckBoxChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onExportToCSVButtonClicked((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Scene3DControlMenuController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->verticalScale(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->sceneBoundingBoxVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Scene3DControlMenuController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_Scene3DControlMenuController.data,
    qt_meta_data_Scene3DControlMenuController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scene3DControlMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene3DControlMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene3DControlMenuController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int Scene3DControlMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlComponentController::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
