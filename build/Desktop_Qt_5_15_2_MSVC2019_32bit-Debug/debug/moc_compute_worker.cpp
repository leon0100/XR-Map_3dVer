/****************************************************************************
** Meta object code from reading C++ file 'compute_worker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/data_processor/compute_worker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compute_worker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComputeWorker_t {
    QByteArrayData data[53];
    char stringdata0[651];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComputeWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComputeWorker_t qt_meta_stringdata_ComputeWorker = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ComputeWorker"
QT_MOC_LITERAL(1, 14, 11), // "jobFinished"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "bottomTrackStarted"
QT_MOC_LITERAL(4, 46, 19), // "bottomTrackFinished"
QT_MOC_LITERAL(5, 66, 8), // "clearAll"
QT_MOC_LITERAL(6, 75, 12), // "clearSurface"
QT_MOC_LITERAL(7, 88, 11), // "clearMosaic"
QT_MOC_LITERAL(8, 100, 13), // "clearIsobaths"
QT_MOC_LITERAL(9, 114, 16), // "clearBottomTrack"
QT_MOC_LITERAL(10, 131, 13), // "setDatasetPtr"
QT_MOC_LITERAL(11, 145, 8), // "Dataset*"
QT_MOC_LITERAL(12, 154, 2), // "ds"
QT_MOC_LITERAL(13, 157, 17), // "setBottomTrackPtr"
QT_MOC_LITERAL(14, 175, 12), // "BottomTrack*"
QT_MOC_LITERAL(15, 188, 2), // "bt"
QT_MOC_LITERAL(16, 191, 17), // "setSurfaceThemeId"
QT_MOC_LITERAL(17, 209, 2), // "id"
QT_MOC_LITERAL(18, 212, 19), // "setSurfaceEdgeLimit"
QT_MOC_LITERAL(19, 232, 1), // "v"
QT_MOC_LITERAL(20, 234, 20), // "setSurfaceExtraWidth"
QT_MOC_LITERAL(21, 255, 26), // "setSurfaceIsobathsStepSize"
QT_MOC_LITERAL(22, 282, 24), // "setIsobathsLabelStepSize"
QT_MOC_LITERAL(23, 307, 17), // "setMosaicChannels"
QT_MOC_LITERAL(24, 325, 9), // "ChannelId"
QT_MOC_LITERAL(25, 335, 3), // "ch1"
QT_MOC_LITERAL(26, 339, 7), // "uint8_t"
QT_MOC_LITERAL(27, 347, 4), // "sub1"
QT_MOC_LITERAL(28, 352, 3), // "ch2"
QT_MOC_LITERAL(29, 356, 4), // "sub2"
QT_MOC_LITERAL(30, 361, 14), // "setMosaicTheme"
QT_MOC_LITERAL(31, 376, 21), // "setMosaicLAngleOffset"
QT_MOC_LITERAL(32, 398, 3), // "val"
QT_MOC_LITERAL(33, 402, 21), // "setMosaicRAngleOffset"
QT_MOC_LITERAL(34, 424, 15), // "setMosaicLevels"
QT_MOC_LITERAL(35, 440, 2), // "lo"
QT_MOC_LITERAL(36, 443, 2), // "hi"
QT_MOC_LITERAL(37, 446, 17), // "setMosaicLowLevel"
QT_MOC_LITERAL(38, 464, 18), // "setMosaicHighLevel"
QT_MOC_LITERAL(39, 483, 23), // "setMosaicTileResolution"
QT_MOC_LITERAL(40, 507, 3), // "res"
QT_MOC_LITERAL(41, 511, 22), // "askColorTableForMosaic"
QT_MOC_LITERAL(42, 534, 7), // "setMinZ"
QT_MOC_LITERAL(43, 542, 7), // "setMaxZ"
QT_MOC_LITERAL(44, 550, 21), // "bottomTrackProcessing"
QT_MOC_LITERAL(45, 572, 14), // "DatasetChannel"
QT_MOC_LITERAL(46, 587, 16), // "BottomTrackParam"
QT_MOC_LITERAL(47, 604, 1), // "p"
QT_MOC_LITERAL(48, 606, 6), // "manual"
QT_MOC_LITERAL(49, 613, 9), // "redrawAll"
QT_MOC_LITERAL(50, 623, 13), // "processBundle"
QT_MOC_LITERAL(51, 637, 10), // "WorkBundle"
QT_MOC_LITERAL(52, 648, 2) // "wb"

    },
    "ComputeWorker\0jobFinished\0\0"
    "bottomTrackStarted\0bottomTrackFinished\0"
    "clearAll\0clearSurface\0clearMosaic\0"
    "clearIsobaths\0clearBottomTrack\0"
    "setDatasetPtr\0Dataset*\0ds\0setBottomTrackPtr\0"
    "BottomTrack*\0bt\0setSurfaceThemeId\0id\0"
    "setSurfaceEdgeLimit\0v\0setSurfaceExtraWidth\0"
    "setSurfaceIsobathsStepSize\0"
    "setIsobathsLabelStepSize\0setMosaicChannels\0"
    "ChannelId\0ch1\0uint8_t\0sub1\0ch2\0sub2\0"
    "setMosaicTheme\0setMosaicLAngleOffset\0"
    "val\0setMosaicRAngleOffset\0setMosaicLevels\0"
    "lo\0hi\0setMosaicLowLevel\0setMosaicHighLevel\0"
    "setMosaicTileResolution\0res\0"
    "askColorTableForMosaic\0setMinZ\0setMaxZ\0"
    "bottomTrackProcessing\0DatasetChannel\0"
    "BottomTrackParam\0p\0manual\0redrawAll\0"
    "processBundle\0WorkBundle\0wb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputeWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    0,  155,    2, 0x06 /* Public */,
       4,    0,  156,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  157,    2, 0x0a /* Public */,
       6,    0,  158,    2, 0x0a /* Public */,
       7,    0,  159,    2, 0x0a /* Public */,
       8,    0,  160,    2, 0x0a /* Public */,
       9,    0,  161,    2, 0x0a /* Public */,
      10,    1,  162,    2, 0x0a /* Public */,
      13,    1,  165,    2, 0x0a /* Public */,
      16,    1,  168,    2, 0x0a /* Public */,
      18,    1,  171,    2, 0x0a /* Public */,
      20,    1,  174,    2, 0x0a /* Public */,
      21,    1,  177,    2, 0x0a /* Public */,
      22,    1,  180,    2, 0x0a /* Public */,
      23,    4,  183,    2, 0x0a /* Public */,
      30,    1,  192,    2, 0x0a /* Public */,
      31,    1,  195,    2, 0x0a /* Public */,
      33,    1,  198,    2, 0x0a /* Public */,
      34,    2,  201,    2, 0x0a /* Public */,
      37,    1,  206,    2, 0x0a /* Public */,
      38,    1,  209,    2, 0x0a /* Public */,
      39,    1,  212,    2, 0x0a /* Public */,
      41,    0,  215,    2, 0x0a /* Public */,
      42,    1,  216,    2, 0x0a /* Public */,
      43,    1,  219,    2, 0x0a /* Public */,
      44,    5,  222,    2, 0x0a /* Public */,
      50,    1,  233,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 26, 0x80000000 | 24, 0x80000000 | 26,   25,   27,   28,   29,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   35,   36,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, QMetaType::Float,   19,
    QMetaType::Void, 0x80000000 | 45, 0x80000000 | 45, 0x80000000 | 46, QMetaType::Bool, QMetaType::Bool,   25,   28,   47,   48,   49,
    QMetaType::Void, 0x80000000 | 51,   52,

       0        // eod
};

void ComputeWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputeWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jobFinished(); break;
        case 1: _t->bottomTrackStarted(); break;
        case 2: _t->bottomTrackFinished(); break;
        case 3: _t->clearAll(); break;
        case 4: _t->clearSurface(); break;
        case 5: _t->clearMosaic(); break;
        case 6: _t->clearIsobaths(); break;
        case 7: _t->clearBottomTrack(); break;
        case 8: _t->setDatasetPtr((*reinterpret_cast< Dataset*(*)>(_a[1]))); break;
        case 9: _t->setBottomTrackPtr((*reinterpret_cast< BottomTrack*(*)>(_a[1]))); break;
        case 10: _t->setSurfaceThemeId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setSurfaceEdgeLimit((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->setSurfaceExtraWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setSurfaceIsobathsStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->setIsobathsLabelStepSize((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->setMosaicChannels((*reinterpret_cast< const ChannelId(*)>(_a[1])),(*reinterpret_cast< uint8_t(*)>(_a[2])),(*reinterpret_cast< const ChannelId(*)>(_a[3])),(*reinterpret_cast< uint8_t(*)>(_a[4]))); break;
        case 16: _t->setMosaicTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setMosaicLAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 18: _t->setMosaicRAngleOffset((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 19: _t->setMosaicLevels((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 20: _t->setMosaicLowLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->setMosaicHighLevel((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 22: _t->setMosaicTileResolution((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: _t->askColorTableForMosaic(); break;
        case 24: _t->setMinZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 25: _t->setMaxZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->bottomTrackProcessing((*reinterpret_cast< const DatasetChannel(*)>(_a[1])),(*reinterpret_cast< const DatasetChannel(*)>(_a[2])),(*reinterpret_cast< const BottomTrackParam(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 27: _t->processBundle((*reinterpret_cast< const WorkBundle(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DatasetChannel >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WorkBundle >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputeWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputeWorker::jobFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputeWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputeWorker::bottomTrackStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComputeWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputeWorker::bottomTrackFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComputeWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComputeWorker.data,
    qt_meta_data_ComputeWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComputeWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputeWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputeWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComputeWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void ComputeWorker::jobFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ComputeWorker::bottomTrackStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ComputeWorker::bottomTrackFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
