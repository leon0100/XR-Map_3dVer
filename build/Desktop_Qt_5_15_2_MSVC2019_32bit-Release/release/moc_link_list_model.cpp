/****************************************************************************
** Meta object code from reading C++ file 'link_list_model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/link/link_list_model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'link_list_model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LinkListModel_t {
    QByteArrayData data[25];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkListModel_t qt_meta_stringdata_LinkListModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LinkListModel"
QT_MOC_LITERAL(1, 14, 17), // "appendModifyEvent"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "uuid"
QT_MOC_LITERAL(4, 38, 16), // "connectionStatus"
QT_MOC_LITERAL(5, 55, 12), // "receivesData"
QT_MOC_LITERAL(6, 68, 11), // "ControlType"
QT_MOC_LITERAL(7, 80, 11), // "controlType"
QT_MOC_LITERAL(8, 92, 8), // "portName"
QT_MOC_LITERAL(9, 101, 8), // "baudrate"
QT_MOC_LITERAL(10, 110, 6), // "parity"
QT_MOC_LITERAL(11, 117, 8), // "LinkType"
QT_MOC_LITERAL(12, 126, 8), // "linkType"
QT_MOC_LITERAL(13, 135, 7), // "address"
QT_MOC_LITERAL(14, 143, 10), // "sourcePort"
QT_MOC_LITERAL(15, 154, 15), // "destinationPort"
QT_MOC_LITERAL(16, 170, 8), // "isPinned"
QT_MOC_LITERAL(17, 179, 7), // "isHided"
QT_MOC_LITERAL(18, 187, 14), // "isNotAvailable"
QT_MOC_LITERAL(19, 202, 18), // "autoSpeedSelection"
QT_MOC_LITERAL(20, 221, 15), // "isUpgradingSate"
QT_MOC_LITERAL(21, 237, 11), // "removeEvent"
QT_MOC_LITERAL(22, 249, 8), // "rowCount"
QT_MOC_LITERAL(23, 258, 11), // "QModelIndex"
QT_MOC_LITERAL(24, 270, 6) // "parent"

    },
    "LinkListModel\0appendModifyEvent\0\0uuid\0"
    "connectionStatus\0receivesData\0ControlType\0"
    "controlType\0portName\0baudrate\0parity\0"
    "LinkType\0linkType\0address\0sourcePort\0"
    "destinationPort\0isPinned\0isHided\0"
    "isNotAvailable\0autoSpeedSelection\0"
    "isUpgradingSate\0removeEvent\0rowCount\0"
    "QModelIndex\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,   16,   34,    2, 0x06 /* Public */,
      21,    1,   67,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      22,    1,   70,    2, 0x02 /* Public */,
      22,    0,   73,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 6, QMetaType::QString, QMetaType::Int, QMetaType::Bool, 0x80000000 | 11, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    7,    8,    9,   10,   12,   13,   14,   15,   16,   17,   18,   19,   20,
    QMetaType::Void, QMetaType::QUuid,    3,

 // methods: parameters
    QMetaType::Int, 0x80000000 | 23,   24,
    QMetaType::Int,

       0        // eod
};

void LinkListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appendModifyEvent((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< ControlType(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< LinkType(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< int(*)>(_a[10])),(*reinterpret_cast< int(*)>(_a[11])),(*reinterpret_cast< bool(*)>(_a[12])),(*reinterpret_cast< bool(*)>(_a[13])),(*reinterpret_cast< bool(*)>(_a[14])),(*reinterpret_cast< bool(*)>(_a[15])),(*reinterpret_cast< bool(*)>(_a[16]))); break;
        case 1: _t->removeEvent((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 2: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkListModel::*)(QUuid , bool , bool , ControlType , const QString & , int , bool , LinkType , const QString & , int , int , bool , bool , bool , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkListModel::appendModifyEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkListModel::*)(QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LinkListModel::removeEvent)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LinkListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_LinkListModel.data,
    qt_meta_data_LinkListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LinkListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LinkListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int LinkListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void LinkListModel::appendModifyEvent(QUuid _t1, bool _t2, bool _t3, ControlType _t4, const QString & _t5, int _t6, bool _t7, LinkType _t8, const QString & _t9, int _t10, int _t11, bool _t12, bool _t13, bool _t14, bool _t15, bool _t16)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t10))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t11))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t12))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t13))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t14))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t15))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t16))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LinkListModel::removeEvent(QUuid _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
