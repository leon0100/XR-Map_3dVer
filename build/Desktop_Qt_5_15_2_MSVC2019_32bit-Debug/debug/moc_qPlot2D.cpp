/****************************************************************************
** Meta object code from reading C++ file 'qPlot2D.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene2d/qPlot2D.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qPlot2D.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qPlot2D_t {
    QByteArrayData data[120];
    char stringdata0[1588];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qPlot2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qPlot2D_t qt_meta_stringdata_qPlot2D = {
    {
QT_MOC_LITERAL(0, 0, 7), // "qPlot2D"
QT_MOC_LITERAL(1, 8, 23), // "timelinePositionChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "contactChanged"
QT_MOC_LITERAL(4, 48, 12), // "timerUpdater"
QT_MOC_LITERAL(5, 61, 10), // "dataUpdate"
QT_MOC_LITERAL(6, 72, 7), // "updater"
QT_MOC_LITERAL(7, 80, 14), // "horScrollEvent"
QT_MOC_LITERAL(8, 95, 5), // "delta"
QT_MOC_LITERAL(9, 101, 12), // "verZoomEvent"
QT_MOC_LITERAL(10, 114, 14), // "verScrollEvent"
QT_MOC_LITERAL(11, 129, 17), // "plotMousePosition"
QT_MOC_LITERAL(12, 147, 1), // "x"
QT_MOC_LITERAL(13, 149, 1), // "y"
QT_MOC_LITERAL(14, 151, 6), // "isSync"
QT_MOC_LITERAL(15, 158, 23), // "simplePlotMousePosition"
QT_MOC_LITERAL(16, 182, 13), // "onCursorMoved"
QT_MOC_LITERAL(17, 196, 13), // "plotMouseTool"
QT_MOC_LITERAL(18, 210, 4), // "mode"
QT_MOC_LITERAL(19, 215, 10), // "setContact"
QT_MOC_LITERAL(20, 226, 4), // "indx"
QT_MOC_LITERAL(21, 231, 4), // "text"
QT_MOC_LITERAL(22, 236, 16), // "setActiveContact"
QT_MOC_LITERAL(23, 253, 13), // "deleteContact"
QT_MOC_LITERAL(24, 267, 13), // "updateContact"
QT_MOC_LITERAL(25, 281, 29), // "plotDatasetChannelFromStrings"
QT_MOC_LITERAL(26, 311, 6), // "ch1Str"
QT_MOC_LITERAL(27, 318, 6), // "ch2Str"
QT_MOC_LITERAL(28, 325, 18), // "plotDatasetChannel"
QT_MOC_LITERAL(29, 344, 9), // "ChannelId"
QT_MOC_LITERAL(30, 354, 21), // "plotDatasetSubChannel"
QT_MOC_LITERAL(31, 376, 7), // "uint8_t"
QT_MOC_LITERAL(32, 384, 19), // "plotDatasetChannel2"
QT_MOC_LITERAL(33, 404, 22), // "plotDatasetSubChannel2"
QT_MOC_LITERAL(34, 427, 19), // "plotEchogramVisible"
QT_MOC_LITERAL(35, 447, 7), // "visible"
QT_MOC_LITERAL(36, 455, 17), // "plotEchogramTheme"
QT_MOC_LITERAL(37, 473, 8), // "theme_id"
QT_MOC_LITERAL(38, 482, 24), // "plotEchogramCompensation"
QT_MOC_LITERAL(39, 507, 15), // "compensation_id"
QT_MOC_LITERAL(40, 523, 22), // "plotBottomTrackVisible"
QT_MOC_LITERAL(41, 546, 20), // "plotBottomTrackTheme"
QT_MOC_LITERAL(42, 567, 22), // "plotRangefinderVisible"
QT_MOC_LITERAL(43, 590, 20), // "plotRangefinderTheme"
QT_MOC_LITERAL(44, 611, 19), // "plotAttitudeVisible"
QT_MOC_LITERAL(45, 631, 22), // "plotTemperatureVisible"
QT_MOC_LITERAL(46, 654, 22), // "plotDopplerBeamVisible"
QT_MOC_LITERAL(47, 677, 11), // "beam_filter"
QT_MOC_LITERAL(48, 689, 28), // "plotDopplerInstrumentVisible"
QT_MOC_LITERAL(49, 718, 15), // "plotGNSSVisible"
QT_MOC_LITERAL(50, 734, 5), // "flags"
QT_MOC_LITERAL(51, 740, 24), // "plotAcousticAngleVisible"
QT_MOC_LITERAL(52, 765, 22), // "plotGridVerticalNumber"
QT_MOC_LITERAL(53, 788, 5), // "grids"
QT_MOC_LITERAL(54, 794, 17), // "plotGridFillWidth"
QT_MOC_LITERAL(55, 812, 5), // "state"
QT_MOC_LITERAL(56, 818, 14), // "plotGridInvert"
QT_MOC_LITERAL(57, 833, 19), // "plotAngleVisibility"
QT_MOC_LITERAL(58, 853, 14), // "plotAngleRange"
QT_MOC_LITERAL(59, 868, 10), // "angleRange"
QT_MOC_LITERAL(60, 879, 19), // "plotVelocityVisible"
QT_MOC_LITERAL(61, 899, 17), // "plotVelocityRange"
QT_MOC_LITERAL(62, 917, 8), // "velocity"
QT_MOC_LITERAL(63, 926, 21), // "plotDistanceAutoRange"
QT_MOC_LITERAL(64, 948, 15), // "auto_range_type"
QT_MOC_LITERAL(65, 964, 21), // "plotEchogramSetLevels"
QT_MOC_LITERAL(66, 986, 3), // "low"
QT_MOC_LITERAL(67, 990, 5), // "hight"
QT_MOC_LITERAL(68, 996, 19), // "getLowEchogramLevel"
QT_MOC_LITERAL(69, 1016, 20), // "getHighEchogramLevel"
QT_MOC_LITERAL(70, 1037, 10), // "getThemeId"
QT_MOC_LITERAL(71, 1048, 16), // "doDistProcessing"
QT_MOC_LITERAL(72, 1065, 6), // "preset"
QT_MOC_LITERAL(73, 1072, 11), // "window_size"
QT_MOC_LITERAL(74, 1084, 12), // "vertical_gap"
QT_MOC_LITERAL(75, 1097, 9), // "range_min"
QT_MOC_LITERAL(76, 1107, 9), // "range_max"
QT_MOC_LITERAL(77, 1117, 10), // "gain_slope"
QT_MOC_LITERAL(78, 1128, 9), // "threshold"
QT_MOC_LITERAL(79, 1138, 7), // "offsetx"
QT_MOC_LITERAL(80, 1146, 7), // "offsety"
QT_MOC_LITERAL(81, 1154, 7), // "offsetz"
QT_MOC_LITERAL(82, 1162, 6), // "manual"
QT_MOC_LITERAL(83, 1169, 17), // "refreshDistParams"
QT_MOC_LITERAL(84, 1187, 10), // "windowSize"
QT_MOC_LITERAL(85, 1198, 11), // "verticalGap"
QT_MOC_LITERAL(86, 1210, 8), // "rangeMin"
QT_MOC_LITERAL(87, 1219, 8), // "rangeMax"
QT_MOC_LITERAL(88, 1228, 9), // "gainSlope"
QT_MOC_LITERAL(89, 1238, 7), // "offsetX"
QT_MOC_LITERAL(90, 1246, 7), // "offsetY"
QT_MOC_LITERAL(91, 1254, 7), // "offsetZ"
QT_MOC_LITERAL(92, 1262, 9), // "setPreset"
QT_MOC_LITERAL(93, 1272, 5), // "value"
QT_MOC_LITERAL(94, 1278, 13), // "setWindowSize"
QT_MOC_LITERAL(95, 1292, 14), // "setVerticalGap"
QT_MOC_LITERAL(96, 1307, 11), // "setRangeMin"
QT_MOC_LITERAL(97, 1319, 11), // "setRangeMax"
QT_MOC_LITERAL(98, 1331, 12), // "setGainSlope"
QT_MOC_LITERAL(99, 1344, 12), // "setThreshold"
QT_MOC_LITERAL(100, 1357, 10), // "setOffsetX"
QT_MOC_LITERAL(101, 1368, 10), // "setOffsetY"
QT_MOC_LITERAL(102, 1379, 10), // "setOffsetZ"
QT_MOC_LITERAL(103, 1390, 10), // "cursorFrom"
QT_MOC_LITERAL(104, 1401, 8), // "cursorTo"
QT_MOC_LITERAL(105, 1410, 15), // "setCursorFromTo"
QT_MOC_LITERAL(106, 1426, 4), // "from"
QT_MOC_LITERAL(107, 1431, 2), // "to"
QT_MOC_LITERAL(108, 1434, 7), // "setIndx"
QT_MOC_LITERAL(109, 1442, 10), // "horizontal"
QT_MOC_LITERAL(110, 1453, 16), // "timelinePosition"
QT_MOC_LITERAL(111, 1470, 9), // "isEnabled"
QT_MOC_LITERAL(112, 1480, 11), // "contactInfo"
QT_MOC_LITERAL(113, 1492, 14), // "contactVisible"
QT_MOC_LITERAL(114, 1507, 16), // "contactPositionX"
QT_MOC_LITERAL(115, 1524, 16), // "contactPositionY"
QT_MOC_LITERAL(116, 1541, 11), // "contactIndx"
QT_MOC_LITERAL(117, 1553, 10), // "contactLat"
QT_MOC_LITERAL(118, 1564, 10), // "contactLon"
QT_MOC_LITERAL(119, 1575, 12) // "contactDepth"

    },
    "qPlot2D\0timelinePositionChanged\0\0"
    "contactChanged\0timerUpdater\0dataUpdate\0"
    "updater\0horScrollEvent\0delta\0verZoomEvent\0"
    "verScrollEvent\0plotMousePosition\0x\0y\0"
    "isSync\0simplePlotMousePosition\0"
    "onCursorMoved\0plotMouseTool\0mode\0"
    "setContact\0indx\0text\0setActiveContact\0"
    "deleteContact\0updateContact\0"
    "plotDatasetChannelFromStrings\0ch1Str\0"
    "ch2Str\0plotDatasetChannel\0ChannelId\0"
    "plotDatasetSubChannel\0uint8_t\0"
    "plotDatasetChannel2\0plotDatasetSubChannel2\0"
    "plotEchogramVisible\0visible\0"
    "plotEchogramTheme\0theme_id\0"
    "plotEchogramCompensation\0compensation_id\0"
    "plotBottomTrackVisible\0plotBottomTrackTheme\0"
    "plotRangefinderVisible\0plotRangefinderTheme\0"
    "plotAttitudeVisible\0plotTemperatureVisible\0"
    "plotDopplerBeamVisible\0beam_filter\0"
    "plotDopplerInstrumentVisible\0"
    "plotGNSSVisible\0flags\0plotAcousticAngleVisible\0"
    "plotGridVerticalNumber\0grids\0"
    "plotGridFillWidth\0state\0plotGridInvert\0"
    "plotAngleVisibility\0plotAngleRange\0"
    "angleRange\0plotVelocityVisible\0"
    "plotVelocityRange\0velocity\0"
    "plotDistanceAutoRange\0auto_range_type\0"
    "plotEchogramSetLevels\0low\0hight\0"
    "getLowEchogramLevel\0getHighEchogramLevel\0"
    "getThemeId\0doDistProcessing\0preset\0"
    "window_size\0vertical_gap\0range_min\0"
    "range_max\0gain_slope\0threshold\0offsetx\0"
    "offsety\0offsetz\0manual\0refreshDistParams\0"
    "windowSize\0verticalGap\0rangeMin\0"
    "rangeMax\0gainSlope\0offsetX\0offsetY\0"
    "offsetZ\0setPreset\0value\0setWindowSize\0"
    "setVerticalGap\0setRangeMin\0setRangeMax\0"
    "setGainSlope\0setThreshold\0setOffsetX\0"
    "setOffsetY\0setOffsetZ\0cursorFrom\0"
    "cursorTo\0setCursorFromTo\0from\0to\0"
    "setIndx\0horizontal\0timelinePosition\0"
    "isEnabled\0contactInfo\0contactVisible\0"
    "contactPositionX\0contactPositionY\0"
    "contactIndx\0contactLat\0contactLon\0"
    "contactDepth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qPlot2D[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
      11,  548, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  329,    2, 0x06 /* Public */,
       3,    0,  330,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  331,    2, 0x09 /* Protected */,
       5,    0,  332,    2, 0x09 /* Protected */,
       6,    0,  333,    2, 0x0a /* Public */,
       7,    1,  334,    2, 0x0a /* Public */,
       9,    1,  337,    2, 0x0a /* Public */,
      10,    1,  340,    2, 0x0a /* Public */,
      11,    3,  343,    2, 0x0a /* Public */,
      11,    2,  350,    2, 0x2a /* Public | MethodCloned */,
      15,    2,  355,    2, 0x0a /* Public */,
      16,    2,  360,    2, 0x0a /* Public */,
      17,    1,  365,    2, 0x0a /* Public */,
      19,    2,  368,    2, 0x0a /* Public */,
      22,    1,  373,    2, 0x0a /* Public */,
      23,    1,  376,    2, 0x0a /* Public */,
      24,    0,  379,    2, 0x0a /* Public */,
      25,    2,  380,    2, 0x0a /* Public */,
      28,    0,  385,    2, 0x0a /* Public */,
      30,    0,  386,    2, 0x0a /* Public */,
      32,    0,  387,    2, 0x0a /* Public */,
      33,    0,  388,    2, 0x0a /* Public */,
      34,    1,  389,    2, 0x0a /* Public */,
      36,    1,  392,    2, 0x0a /* Public */,
      38,    1,  395,    2, 0x0a /* Public */,
      40,    1,  398,    2, 0x0a /* Public */,
      41,    1,  401,    2, 0x0a /* Public */,
      42,    1,  404,    2, 0x0a /* Public */,
      43,    1,  407,    2, 0x0a /* Public */,
      44,    1,  410,    2, 0x0a /* Public */,
      45,    1,  413,    2, 0x0a /* Public */,
      46,    2,  416,    2, 0x0a /* Public */,
      48,    1,  421,    2, 0x0a /* Public */,
      49,    2,  424,    2, 0x0a /* Public */,
      51,    1,  429,    2, 0x0a /* Public */,
      52,    1,  432,    2, 0x0a /* Public */,
      54,    1,  435,    2, 0x0a /* Public */,
      56,    1,  438,    2, 0x0a /* Public */,
      57,    1,  441,    2, 0x0a /* Public */,
      58,    1,  444,    2, 0x0a /* Public */,
      60,    1,  447,    2, 0x0a /* Public */,
      61,    1,  450,    2, 0x0a /* Public */,
      63,    1,  453,    2, 0x0a /* Public */,
      65,    2,  456,    2, 0x0a /* Public */,
      68,    0,  461,    2, 0x0a /* Public */,
      69,    0,  462,    2, 0x0a /* Public */,
      70,    0,  463,    2, 0x0a /* Public */,
      71,   11,  464,    2, 0x0a /* Public */,
      83,   10,  487,    2, 0x0a /* Public */,
      92,    1,  508,    2, 0x0a /* Public */,
      94,    1,  511,    2, 0x0a /* Public */,
      95,    1,  514,    2, 0x0a /* Public */,
      96,    1,  517,    2, 0x0a /* Public */,
      97,    1,  520,    2, 0x0a /* Public */,
      98,    1,  523,    2, 0x0a /* Public */,
      99,    1,  526,    2, 0x0a /* Public */,
     100,    1,  529,    2, 0x0a /* Public */,
     101,    1,  532,    2, 0x0a /* Public */,
     102,    1,  535,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
     103,    0,  538,    2, 0x02 /* Public */,
     104,    0,  539,    2, 0x02 /* Public */,
     105,    2,  540,    2, 0x02 /* Public */,
     108,    1,  545,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Bool, QMetaType::Int, QMetaType::QString,   20,   21,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Bool, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   26,   27,
    0x80000000 | 29,
    0x80000000 | 31,
    0x80000000 | 29,
    0x80000000 | 31,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   35,   47,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   35,   50,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Int,   53,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Int,   59,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, QMetaType::Float,   62,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   66,   67,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,   72,   73,   74,   75,   76,   77,   78,   79,   80,   81,   82,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   72,   84,   85,   86,   87,   88,   78,   89,   90,   91,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Int,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,
    QMetaType::Void, QMetaType::Float,   93,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,  106,  107,
    QMetaType::Void, QMetaType::Int,   20,

 // properties: name, type, flags
     109, QMetaType::Bool, 0x00095103,
     110, QMetaType::Float, 0x00495103,
     111, QMetaType::Bool, 0x00095003,
     112, QMetaType::QString, 0x00495103,
     113, QMetaType::Bool, 0x00495103,
     114, QMetaType::Int, 0x00495001,
     115, QMetaType::Int, 0x00495001,
     116, QMetaType::Int, 0x00495001,
     117, QMetaType::Double, 0x00495001,
     118, QMetaType::Double, 0x00495001,
     119, QMetaType::Double, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,

       0        // eod
};

void qPlot2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qPlot2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timelinePositionChanged(); break;
        case 1: _t->contactChanged(); break;
        case 2: _t->timerUpdater(); break;
        case 3: _t->dataUpdate(); break;
        case 4: _t->updater(); break;
        case 5: _t->horScrollEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->verZoomEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->verScrollEvent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->plotMousePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->plotMousePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->simplePlotMousePosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->onCursorMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->plotMouseTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: { bool _r = _t->setContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->setActiveContact((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->deleteContact((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->updateContact(); break;
        case 17: _t->plotDatasetChannelFromStrings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 18: { ChannelId _r = _t->plotDatasetChannel();
            if (_a[0]) *reinterpret_cast< ChannelId*>(_a[0]) = std::move(_r); }  break;
        case 19: { uint8_t _r = _t->plotDatasetSubChannel();
            if (_a[0]) *reinterpret_cast< uint8_t*>(_a[0]) = std::move(_r); }  break;
        case 20: { ChannelId _r = _t->plotDatasetChannel2();
            if (_a[0]) *reinterpret_cast< ChannelId*>(_a[0]) = std::move(_r); }  break;
        case 21: { uint8_t _r = _t->plotDatasetSubChannel2();
            if (_a[0]) *reinterpret_cast< uint8_t*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->plotEchogramVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->plotEchogramTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->plotEchogramCompensation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->plotBottomTrackVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->plotBottomTrackTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->plotRangefinderVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->plotRangefinderTheme((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->plotAttitudeVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->plotTemperatureVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->plotDopplerBeamVisible((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->plotDopplerInstrumentVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->plotGNSSVisible((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->plotAcousticAngleVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->plotGridVerticalNumber((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->plotGridFillWidth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->plotGridInvert((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->plotAngleVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->plotAngleRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->plotVelocityVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->plotVelocityRange((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 42: _t->plotDistanceAutoRange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->plotEchogramSetLevels((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 44: { float _r = _t->getLowEchogramLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 45: { float _r = _t->getHighEchogramLevel();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 46: { int _r = _t->getThemeId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 47: _t->doDistProcessing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10])),(*reinterpret_cast< bool(*)>(_a[11]))); break;
        case 48: _t->refreshDistParams((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< float(*)>(_a[8])),(*reinterpret_cast< float(*)>(_a[9])),(*reinterpret_cast< float(*)>(_a[10]))); break;
        case 49: _t->setPreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->setWindowSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 51: _t->setVerticalGap((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 52: _t->setRangeMin((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 53: _t->setRangeMax((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 54: _t->setGainSlope((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 55: _t->setThreshold((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 56: _t->setOffsetX((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 57: _t->setOffsetY((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 58: _t->setOffsetZ((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 59: { float _r = _t->cursorFrom();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 60: { float _r = _t->cursorTo();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 61: _t->setCursorFromTo((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 62: _t->setIndx((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (qPlot2D::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qPlot2D::timelinePositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (qPlot2D::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&qPlot2D::contactChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<qPlot2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isHorizontal(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->timelinePosition(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getPlotEnabled(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getContactInfo(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getContactVisible(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getContactPositionX(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getContactPositionY(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getContactIndx(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getContactLat(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getContactLon(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getContactDepth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<qPlot2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHorizontal(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTimelinePosition(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setPlotEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setContactInfo(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setContactVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject qPlot2D::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_qPlot2D.data,
    qt_meta_data_qPlot2D,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qPlot2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qPlot2D::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qPlot2D.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Plot2D"))
        return static_cast< Plot2D*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int qPlot2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 63;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void qPlot2D::timelinePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qPlot2D::contactChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
