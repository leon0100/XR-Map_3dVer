/****************************************************************************
** Meta object code from reading C++ file 'isobaths_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/domain/isobaths_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'isobaths_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IsobathsView_t {
    QByteArrayData data[12];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IsobathsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IsobathsView_t qt_meta_stringdata_IsobathsView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "IsobathsView"
QT_MOC_LITERAL(1, 13, 11), // "QML.Element"
QT_MOC_LITERAL(2, 25, 5), // "clear"
QT_MOC_LITERAL(3, 31, 0), // ""
QT_MOC_LITERAL(4, 32, 9), // "setLabels"
QT_MOC_LITERAL(5, 42, 38), // "QVector<IsobathUtils::LabelPa..."
QT_MOC_LITERAL(6, 81, 6), // "labels"
QT_MOC_LITERAL(7, 88, 15), // "setLineSegments"
QT_MOC_LITERAL(8, 104, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(9, 123, 12), // "lineSegments"
QT_MOC_LITERAL(10, 136, 15), // "setLineStepSize"
QT_MOC_LITERAL(11, 152, 12) // "lineStepSize"

    },
    "IsobathsView\0QML.Element\0clear\0\0"
    "setLabels\0QVector<IsobathUtils::LabelParameters>\0"
    "labels\0setLineSegments\0QVector<QVector3D>\0"
    "lineSegments\0setLineStepSize\0lineStepSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IsobathsView[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    0,

 // slots: name, argc, parameters, tag, flags
       2,    0,   36,    3, 0x0a /* Public */,
       4,    1,   37,    3, 0x0a /* Public */,
       7,    1,   40,    3, 0x0a /* Public */,
      10,    1,   43,    3, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Float,   11,

       0        // eod
};

void IsobathsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IsobathsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->setLabels((*reinterpret_cast< const QVector<IsobathUtils::LabelParameters>(*)>(_a[1]))); break;
        case 2: _t->setLineSegments((*reinterpret_cast< const QVector<QVector3D>(*)>(_a[1]))); break;
        case 3: _t->setLineStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IsobathsView::staticMetaObject = { {
    QMetaObject::SuperData::link<SceneObject::staticMetaObject>(),
    qt_meta_stringdata_IsobathsView.data,
    qt_meta_data_IsobathsView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IsobathsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IsobathsView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IsobathsView.stringdata0))
        return static_cast<void*>(this);
    return SceneObject::qt_metacast(_clname);
}

int IsobathsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SceneObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
