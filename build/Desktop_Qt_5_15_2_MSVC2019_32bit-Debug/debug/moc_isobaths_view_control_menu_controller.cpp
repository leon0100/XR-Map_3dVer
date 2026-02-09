/****************************************************************************
** Meta object code from reading C++ file 'isobaths_view_control_menu_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/isobaths_view_control_menu_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'isobaths_view_control_menu_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IsobathsViewControlMenuController_t {
    QByteArrayData data[17];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IsobathsViewControlMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IsobathsViewControlMenuController_t qt_meta_stringdata_IsobathsViewControlMenuController = {
    {
QT_MOC_LITERAL(0, 0, 33), // "IsobathsViewControlMenuContro..."
QT_MOC_LITERAL(1, 34, 42), // "onIsobathsVisibilityCheckBoxC..."
QT_MOC_LITERAL(2, 77, 0), // ""
QT_MOC_LITERAL(3, 78, 7), // "checked"
QT_MOC_LITERAL(4, 86, 29), // "onUpdateIsobathsButtonClicked"
QT_MOC_LITERAL(5, 116, 18), // "onTrianglesVisible"
QT_MOC_LITERAL(6, 135, 5), // "state"
QT_MOC_LITERAL(7, 141, 14), // "onEdgesVisible"
QT_MOC_LITERAL(8, 156, 24), // "onSetSurfaceLineStepSize"
QT_MOC_LITERAL(9, 181, 3), // "val"
QT_MOC_LITERAL(10, 185, 18), // "onSetLabelStepSize"
QT_MOC_LITERAL(11, 204, 14), // "onThemeChanged"
QT_MOC_LITERAL(12, 219, 15), // "onDebugModeView"
QT_MOC_LITERAL(13, 235, 21), // "onProcessStateChanged"
QT_MOC_LITERAL(14, 257, 28), // "onResetIsobathsButtonClicked"
QT_MOC_LITERAL(15, 286, 18), // "onEdgeLimitChanged"
QT_MOC_LITERAL(16, 305, 15) // "onSetExtraWidth"

    },
    "IsobathsViewControlMenuController\0"
    "onIsobathsVisibilityCheckBoxCheckedChanged\0"
    "\0checked\0onUpdateIsobathsButtonClicked\0"
    "onTrianglesVisible\0state\0onEdgesVisible\0"
    "onSetSurfaceLineStepSize\0val\0"
    "onSetLabelStepSize\0onThemeChanged\0"
    "onDebugModeView\0onProcessStateChanged\0"
    "onResetIsobathsButtonClicked\0"
    "onEdgeLimitChanged\0onSetExtraWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IsobathsViewControlMenuController[] = {

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
       4,    0,   77,    2, 0x02 /* Public */,
       5,    1,   78,    2, 0x02 /* Public */,
       7,    1,   81,    2, 0x02 /* Public */,
       8,    1,   84,    2, 0x02 /* Public */,
      10,    1,   87,    2, 0x02 /* Public */,
      11,    1,   90,    2, 0x02 /* Public */,
      12,    1,   93,    2, 0x02 /* Public */,
      13,    1,   96,    2, 0x02 /* Public */,
      14,    0,   99,    2, 0x02 /* Public */,
      15,    1,  100,    2, 0x02 /* Public */,
      16,    1,  103,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,

       0        // eod
};

void IsobathsViewControlMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IsobathsViewControlMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onIsobathsVisibilityCheckBoxCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onUpdateIsobathsButtonClicked(); break;
        case 2: _t->onTrianglesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onEdgesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onSetSurfaceLineStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->onSetLabelStepSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onDebugModeView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onProcessStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onResetIsobathsButtonClicked(); break;
        case 10: _t->onEdgeLimitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onSetExtraWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IsobathsViewControlMenuController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_IsobathsViewControlMenuController.data,
    qt_meta_data_IsobathsViewControlMenuController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IsobathsViewControlMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IsobathsViewControlMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IsobathsViewControlMenuController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int IsobathsViewControlMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
