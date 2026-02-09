/****************************************************************************
** Meta object code from reading C++ file 'screetShot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/screetShot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'screetShot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScreetShot_t {
    QByteArrayData data[17];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScreetShot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScreetShot_t qt_meta_stringdata_ScreetShot = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ScreetShot"
QT_MOC_LITERAL(1, 11, 20), // "selectionRectChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 27), // "selectionRectVisibleChanged"
QT_MOC_LITERAL(4, 61, 18), // "screetWidthChanged"
QT_MOC_LITERAL(5, 80, 19), // "screetHeightChanged"
QT_MOC_LITERAL(6, 100, 24), // "screetToolBarShowChanged"
QT_MOC_LITERAL(7, 125, 16), // "cancelScreetShot"
QT_MOC_LITERAL(8, 142, 27), // "slot_downloadScreenFinished"
QT_MOC_LITERAL(9, 170, 16), // "setToArrowCursor"
QT_MOC_LITERAL(10, 187, 13), // "setCancelShot"
QT_MOC_LITERAL(11, 201, 14), // "saveScreetShot"
QT_MOC_LITERAL(12, 216, 13), // "selectionRect"
QT_MOC_LITERAL(13, 230, 22), // "isSelectionRectVisible"
QT_MOC_LITERAL(14, 253, 11), // "screetWidth"
QT_MOC_LITERAL(15, 265, 12), // "screetHeight"
QT_MOC_LITERAL(16, 278, 13) // "screetToolBar"

    },
    "ScreetShot\0selectionRectChanged\0\0"
    "selectionRectVisibleChanged\0"
    "screetWidthChanged\0screetHeightChanged\0"
    "screetToolBarShowChanged\0cancelScreetShot\0"
    "slot_downloadScreenFinished\0"
    "setToArrowCursor\0setCancelShot\0"
    "saveScreetShot\0selectionRect\0"
    "isSelectionRectVisible\0screetWidth\0"
    "screetHeight\0screetToolBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScreetShot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   70,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   71,    2, 0x02 /* Public */,
      10,    0,   72,    2, 0x02 /* Public */,
      11,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QRectF, 0x00495103,
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void ScreetShot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreetShot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionRectChanged(); break;
        case 1: _t->selectionRectVisibleChanged(); break;
        case 2: _t->screetWidthChanged(); break;
        case 3: _t->screetHeightChanged(); break;
        case 4: _t->screetToolBarShowChanged(); break;
        case 5: _t->cancelScreetShot(); break;
        case 6: _t->slot_downloadScreenFinished(); break;
        case 7: _t->setToArrowCursor(); break;
        case 8: _t->setCancelShot(); break;
        case 9: _t->saveScreetShot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::selectionRectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::selectionRectVisibleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::screetWidthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::screetHeightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::screetToolBarShowChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScreetShot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScreetShot::cancelScreetShot)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ScreetShot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = _t->getSelectionRect(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSelectionRectVisible(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getScreetWidth(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getScreetHeight(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getScreetToolBar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ScreetShot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 1: _t->setSelectionRectVisible(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setScreetWidth(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setScreetHeight(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setScreetToolBar(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ScreetShot::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ScreetShot.data,
    qt_meta_data_ScreetShot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ScreetShot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreetShot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreetShot.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ScreetShot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScreetShot::selectionRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScreetShot::selectionRectVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ScreetShot::screetWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScreetShot::screetHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ScreetShot::screetToolBarShowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ScreetShot::cancelScreetShot()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
