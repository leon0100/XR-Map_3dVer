/****************************************************************************
** Meta object code from reading C++ file 'logger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/logger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Logger_t {
    QByteArrayData data[28];
    char stringdata0[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Logger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Logger_t qt_meta_stringdata_Logger = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Logger"
QT_MOC_LITERAL(1, 7, 17), // "loggingKlfStarted"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "started"
QT_MOC_LITERAL(4, 34, 14), // "startNewKlfLog"
QT_MOC_LITERAL(5, 49, 14), // "stopKlfLogging"
QT_MOC_LITERAL(6, 64, 16), // "loggingKlfStream"
QT_MOC_LITERAL(7, 81, 4), // "data"
QT_MOC_LITERAL(8, 86, 9), // "isOpenKlf"
QT_MOC_LITERAL(9, 96, 23), // "onFrameParserReceiveKlf"
QT_MOC_LITERAL(10, 120, 4), // "uuid"
QT_MOC_LITERAL(11, 125, 5), // "Link*"
QT_MOC_LITERAL(12, 131, 4), // "link"
QT_MOC_LITERAL(13, 136, 11), // "FrameParser"
QT_MOC_LITERAL(14, 148, 5), // "frame"
QT_MOC_LITERAL(15, 154, 14), // "startNewCsvLog"
QT_MOC_LITERAL(16, 169, 14), // "stopCsvLogging"
QT_MOC_LITERAL(17, 184, 16), // "loggingCsvStream"
QT_MOC_LITERAL(18, 201, 9), // "isOpenCsv"
QT_MOC_LITERAL(19, 211, 11), // "writeCsvHat"
QT_MOC_LITERAL(20, 223, 17), // "creatExportStream"
QT_MOC_LITERAL(21, 241, 3), // "str"
QT_MOC_LITERAL(22, 245, 10), // "dataExport"
QT_MOC_LITERAL(23, 256, 14), // "dataByteExport"
QT_MOC_LITERAL(24, 271, 15), // "endExportStream"
QT_MOC_LITERAL(25, 287, 17), // "receiveProtoFrame"
QT_MOC_LITERAL(26, 305, 11), // "ProtoBinOut"
QT_MOC_LITERAL(27, 317, 11) // "protoBinOut"

    },
    "Logger\0loggingKlfStarted\0\0started\0"
    "startNewKlfLog\0stopKlfLogging\0"
    "loggingKlfStream\0data\0isOpenKlf\0"
    "onFrameParserReceiveKlf\0uuid\0Link*\0"
    "link\0FrameParser\0frame\0startNewCsvLog\0"
    "stopCsvLogging\0loggingCsvStream\0"
    "isOpenCsv\0writeCsvHat\0creatExportStream\0"
    "str\0dataExport\0dataByteExport\0"
    "endExportStream\0receiveProtoFrame\0"
    "ProtoBinOut\0protoBinOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Logger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   97,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    1,   99,    2, 0x0a /* Public */,
       8,    0,  102,    2, 0x0a /* Public */,
       9,    3,  103,    2, 0x0a /* Public */,
      15,    0,  110,    2, 0x0a /* Public */,
      16,    0,  111,    2, 0x0a /* Public */,
      17,    0,  112,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,
      19,    0,  114,    2, 0x0a /* Public */,
      20,    1,  115,    2, 0x0a /* Public */,
      22,    1,  118,    2, 0x0a /* Public */,
      23,    1,  121,    2, 0x0a /* Public */,
      24,    0,  124,    2, 0x0a /* Public */,
      25,    1,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 11, 0x80000000 | 13,   10,   12,   14,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   21,
    QMetaType::Bool, QMetaType::QString,   21,
    QMetaType::Bool, QMetaType::QByteArray,    7,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 26,   27,

       0        // eod
};

void Logger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Logger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loggingKlfStarted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->startNewKlfLog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->stopKlfLogging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->loggingKlfStream((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 4: { bool _r = _t->isOpenKlf();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->onFrameParserReceiveKlf((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< Link*(*)>(_a[2])),(*reinterpret_cast< FrameParser(*)>(_a[3]))); break;
        case 6: { bool _r = _t->startNewCsvLog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->stopCsvLogging();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->loggingCsvStream(); break;
        case 9: { bool _r = _t->isOpenCsv();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->writeCsvHat(); break;
        case 11: { bool _r = _t->creatExportStream((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->dataExport((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->dataByteExport((*reinterpret_cast< QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->endExportStream();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->receiveProtoFrame((*reinterpret_cast< ProtoBinOut(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Link* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Logger::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Logger::loggingKlfStarted)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Logger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Logger.data,
    qt_meta_data_Logger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Logger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Logger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Logger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Logger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Logger::loggingKlfStarted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
