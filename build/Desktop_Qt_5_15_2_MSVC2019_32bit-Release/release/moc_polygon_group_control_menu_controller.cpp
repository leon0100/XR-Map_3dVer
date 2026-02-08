/****************************************************************************
** Meta object code from reading C++ file 'polygon_group_control_menu_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/polygon_group_control_menu_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'polygon_group_control_menu_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PolygonGroupControlMenuController_t {
    QByteArrayData data[21];
    char stringdata0[366];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PolygonGroupControlMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PolygonGroupControlMenuController_t qt_meta_stringdata_PolygonGroupControlMenuController = {
    {
QT_MOC_LITERAL(0, 0, 33), // "PolygonGroupControlMenuContro..."
QT_MOC_LITERAL(1, 34, 34), // "onVisibilityCheckBoxCheckedCh..."
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 7), // "checked"
QT_MOC_LITERAL(4, 78, 36), // "onPolygonListItemRemoveButton..."
QT_MOC_LITERAL(5, 115, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 127, 5), // "index"
QT_MOC_LITERAL(7, 133, 31), // "onPointCoordSpinBoxValueChanged"
QT_MOC_LITERAL(8, 165, 5), // "coord"
QT_MOC_LITERAL(9, 171, 25), // "onAddPolygonButtonClicked"
QT_MOC_LITERAL(10, 197, 23), // "onAddPointButtonClicked"
QT_MOC_LITERAL(11, 221, 28), // "onPolygonColorDialogAccepted"
QT_MOC_LITERAL(12, 250, 5), // "color"
QT_MOC_LITERAL(13, 256, 13), // "getPointCoord"
QT_MOC_LITERAL(14, 270, 10), // "pointIndex"
QT_MOC_LITERAL(15, 281, 7), // "pointAt"
QT_MOC_LITERAL(16, 289, 12), // "PointObject*"
QT_MOC_LITERAL(17, 302, 12), // "polygonGroup"
QT_MOC_LITERAL(18, 315, 13), // "PolygonGroup*"
QT_MOC_LITERAL(19, 329, 16), // "polygonListModel"
QT_MOC_LITERAL(20, 346, 19) // "QStandardItemModel*"

    },
    "PolygonGroupControlMenuController\0"
    "onVisibilityCheckBoxCheckedChanged\0\0"
    "checked\0onPolygonListItemRemoveButtonClicked\0"
    "QModelIndex\0index\0onPointCoordSpinBoxValueChanged\0"
    "coord\0onAddPolygonButtonClicked\0"
    "onAddPointButtonClicked\0"
    "onPolygonColorDialogAccepted\0color\0"
    "getPointCoord\0pointIndex\0pointAt\0"
    "PointObject*\0polygonGroup\0PolygonGroup*\0"
    "polygonListModel\0QStandardItemModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PolygonGroupControlMenuController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x02 /* Public */,
       4,    1,   57,    2, 0x02 /* Public */,
       7,    2,   60,    2, 0x02 /* Public */,
       9,    0,   65,    2, 0x02 /* Public */,
      10,    1,   66,    2, 0x02 /* Public */,
      11,    2,   69,    2, 0x02 /* Public */,
      13,    1,   74,    2, 0x02 /* Public */,
      15,    1,   77,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QVector3D, 0x80000000 | 5,    8,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QColor, 0x80000000 | 5,   12,    6,
    QMetaType::QVector3D, 0x80000000 | 5,   14,
    0x80000000 | 16, 0x80000000 | 5,   14,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00095409,
      19, 0x80000000 | 20, 0x00095409,

       0        // eod
};

void PolygonGroupControlMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PolygonGroupControlMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onVisibilityCheckBoxCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onPolygonListItemRemoveButtonClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onPointCoordSpinBoxValueChanged((*reinterpret_cast< QVector3D(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->onAddPolygonButtonClicked(); break;
        case 4: _t->onAddPointButtonClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->onPolygonColorDialogAccepted((*reinterpret_cast< QColor(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: { QVector3D _r = _t->getPointCoord((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 7: { PointObject* _r = _t->pointAt((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< PointObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PolygonGroup* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardItemModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PolygonGroupControlMenuController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PolygonGroup**>(_v) = _t->polygonGroup(); break;
        case 1: *reinterpret_cast< QStandardItemModel**>(_v) = _t->polygonListModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PolygonGroupControlMenuController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_PolygonGroupControlMenuController.data,
    qt_meta_data_PolygonGroupControlMenuController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PolygonGroupControlMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PolygonGroupControlMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PolygonGroupControlMenuController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int PolygonGroupControlMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QmlComponentController::qt_metacall(_c, _id, _a);
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
