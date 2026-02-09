/****************************************************************************
** Meta object code from reading C++ file 'usbl_view_control_menu_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/controllers/usbl_view_control_menu_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbl_view_control_menu_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsblViewControlMenuController_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsblViewControlMenuController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsblViewControlMenuController_t qt_meta_stringdata_UsblViewControlMenuController = {
    {
QT_MOC_LITERAL(0, 0, 29), // "UsblViewControlMenuController"
QT_MOC_LITERAL(1, 30, 42), // "onUsblViewVisibilityCheckBoxC..."
QT_MOC_LITERAL(2, 73, 0), // ""
QT_MOC_LITERAL(3, 74, 7), // "checked"
QT_MOC_LITERAL(4, 82, 29), // "onUpdateUsblViewButtonClicked"
QT_MOC_LITERAL(5, 112, 28), // "onClearUsblViewButtonClicked"
QT_MOC_LITERAL(6, 141, 8), // "usblView"
QT_MOC_LITERAL(7, 150, 9) // "UsblView*"

    },
    "UsblViewControlMenuController\0"
    "onUsblViewVisibilityCheckBoxCheckedChanged\0"
    "\0checked\0onUpdateUsblViewButtonClicked\0"
    "onClearUsblViewButtonClicked\0usblView\0"
    "UsblView*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsblViewControlMenuController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    0,   32,    2, 0x02 /* Public */,
       5,    0,   33,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x00095409,

       0        // eod
};

void UsblViewControlMenuController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UsblViewControlMenuController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onUsblViewVisibilityCheckBoxCheckedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onUpdateUsblViewButtonClicked(); break;
        case 2: _t->onClearUsblViewButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< UsblView* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UsblViewControlMenuController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< UsblView**>(_v) = _t->getUsblViewPtr(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject UsblViewControlMenuController::staticMetaObject = { {
    QMetaObject::SuperData::link<QmlComponentController::staticMetaObject>(),
    qt_meta_stringdata_UsblViewControlMenuController.data,
    qt_meta_data_UsblViewControlMenuController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UsblViewControlMenuController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsblViewControlMenuController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsblViewControlMenuController.stringdata0))
        return static_cast<void*>(this);
    return QmlComponentController::qt_metacast(_clname);
}

int UsblViewControlMenuController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
