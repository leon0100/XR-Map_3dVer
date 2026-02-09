/****************************************************************************
** Meta object code from reading C++ file 'scene3d_view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/scene3d/scene3d_view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene3d_view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicsScene3dView_t {
    QByteArrayData data[90];
    char stringdata0[1212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsScene3dView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsScene3dView_t qt_meta_stringdata_GraphicsScene3dView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GraphicsScene3dView"
QT_MOC_LITERAL(1, 20, 11), // "QML.Element"
QT_MOC_LITERAL(2, 32, 15), // "sendRectRequest"
QT_MOC_LITERAL(3, 48, 0), // ""
QT_MOC_LITERAL(4, 49, 12), // "QVector<LLA>"
QT_MOC_LITERAL(5, 62, 4), // "rect"
QT_MOC_LITERAL(6, 67, 13), // "isPerspective"
QT_MOC_LITERAL(7, 81, 6), // "LLARef"
QT_MOC_LITERAL(8, 88, 10), // "viewLlaRef"
QT_MOC_LITERAL(9, 99, 6), // "moveUp"
QT_MOC_LITERAL(10, 106, 15), // "map::CameraTilt"
QT_MOC_LITERAL(11, 122, 7), // "tiltCam"
QT_MOC_LITERAL(12, 130, 10), // "sendLlaRef"
QT_MOC_LITERAL(13, 141, 13), // "cameraIsMoved"
QT_MOC_LITERAL(14, 155, 26), // "sendMapTextureIdByTileIndx"
QT_MOC_LITERAL(15, 182, 14), // "map::TileIndex"
QT_MOC_LITERAL(16, 197, 8), // "tileIndx"
QT_MOC_LITERAL(17, 206, 6), // "GLuint"
QT_MOC_LITERAL(18, 213, 9), // "textureId"
QT_MOC_LITERAL(19, 223, 17), // "currentLatChanged"
QT_MOC_LITERAL(20, 241, 17), // "currentLonChanged"
QT_MOC_LITERAL(21, 259, 26), // "setSceneBoundingBoxVisible"
QT_MOC_LITERAL(22, 286, 7), // "visible"
QT_MOC_LITERAL(23, 294, 12), // "fitAllInView"
QT_MOC_LITERAL(24, 307, 16), // "setIsometricView"
QT_MOC_LITERAL(25, 324, 17), // "setCancelZoomView"
QT_MOC_LITERAL(26, 342, 10), // "setMapView"
QT_MOC_LITERAL(27, 353, 21), // "setLastEpochFocusView"
QT_MOC_LITERAL(28, 375, 8), // "useAngle"
QT_MOC_LITERAL(29, 384, 16), // "useNavigatorView"
QT_MOC_LITERAL(30, 401, 11), // "setIdleMode"
QT_MOC_LITERAL(31, 413, 16), // "setVerticalScale"
QT_MOC_LITERAL(32, 430, 5), // "scale"
QT_MOC_LITERAL(33, 436, 16), // "shiftCameraZAxis"
QT_MOC_LITERAL(34, 453, 5), // "shift"
QT_MOC_LITERAL(35, 459, 33), // "setBottomTrackVertexSelection..."
QT_MOC_LITERAL(36, 493, 22), // "setPolygonCreationMode"
QT_MOC_LITERAL(37, 516, 21), // "setPolygonEditingMode"
QT_MOC_LITERAL(38, 538, 15), // "onCursorChanged"
QT_MOC_LITERAL(39, 554, 15), // "Qt::CursorShape"
QT_MOC_LITERAL(40, 570, 11), // "cursorShape"
QT_MOC_LITERAL(41, 582, 10), // "setDataset"
QT_MOC_LITERAL(42, 593, 8), // "Dataset*"
QT_MOC_LITERAL(43, 602, 7), // "dataset"
QT_MOC_LITERAL(44, 610, 19), // "setDataProcessorPtr"
QT_MOC_LITERAL(45, 630, 14), // "DataProcessor*"
QT_MOC_LITERAL(46, 645, 16), // "dataProcessorPtr"
QT_MOC_LITERAL(47, 662, 9), // "addPoints"
QT_MOC_LITERAL(48, 672, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(49, 691, 5), // "color"
QT_MOC_LITERAL(50, 697, 5), // "width"
QT_MOC_LITERAL(51, 703, 16), // "setQmlRootObject"
QT_MOC_LITERAL(52, 720, 6), // "object"
QT_MOC_LITERAL(53, 727, 15), // "setQmlAppEngine"
QT_MOC_LITERAL(54, 743, 22), // "QQmlApplicationEngine*"
QT_MOC_LITERAL(55, 766, 6), // "engine"
QT_MOC_LITERAL(56, 773, 13), // "updateMapView"
QT_MOC_LITERAL(57, 787, 11), // "updateViews"
QT_MOC_LITERAL(58, 799, 15), // "onPositionAdded"
QT_MOC_LITERAL(59, 815, 8), // "uint64_t"
QT_MOC_LITERAL(60, 824, 4), // "indx"
QT_MOC_LITERAL(61, 829, 10), // "setIsNorth"
QT_MOC_LITERAL(62, 840, 5), // "state"
QT_MOC_LITERAL(63, 846, 43), // "switchToBottomTrackVertexComb..."
QT_MOC_LITERAL(64, 890, 1), // "x"
QT_MOC_LITERAL(65, 892, 1), // "y"
QT_MOC_LITERAL(66, 894, 17), // "mousePressTrigger"
QT_MOC_LITERAL(67, 912, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(68, 929, 11), // "mouseButton"
QT_MOC_LITERAL(69, 941, 7), // "Qt::Key"
QT_MOC_LITERAL(70, 949, 11), // "keyboardKey"
QT_MOC_LITERAL(71, 961, 16), // "mouseMoveTrigger"
QT_MOC_LITERAL(72, 978, 19), // "mouseReleaseTrigger"
QT_MOC_LITERAL(73, 998, 17), // "mouseWheelTrigger"
QT_MOC_LITERAL(74, 1016, 10), // "angleDelta"
QT_MOC_LITERAL(75, 1027, 12), // "pinchTrigger"
QT_MOC_LITERAL(76, 1040, 10), // "prevCenter"
QT_MOC_LITERAL(77, 1051, 10), // "currCenter"
QT_MOC_LITERAL(78, 1062, 10), // "scaleDelta"
QT_MOC_LITERAL(79, 1073, 15), // "keyPressTrigger"
QT_MOC_LITERAL(80, 1089, 3), // "key"
QT_MOC_LITERAL(81, 1093, 22), // "bottomTrackActionEvent"
QT_MOC_LITERAL(82, 1116, 24), // "BottomTrack::ActionEvent"
QT_MOC_LITERAL(83, 1141, 11), // "actionEvent"
QT_MOC_LITERAL(84, 1153, 13), // "setScreenMode"
QT_MOC_LITERAL(85, 1167, 8), // "isScreen"
QT_MOC_LITERAL(86, 1176, 7), // "currLat"
QT_MOC_LITERAL(87, 1184, 7), // "currLon"
QT_MOC_LITERAL(88, 1192, 10), // "screetShot"
QT_MOC_LITERAL(89, 1203, 8) // "QWidget*"

    },
    "GraphicsScene3dView\0QML.Element\0"
    "sendRectRequest\0\0QVector<LLA>\0rect\0"
    "isPerspective\0LLARef\0viewLlaRef\0moveUp\0"
    "map::CameraTilt\0tiltCam\0sendLlaRef\0"
    "cameraIsMoved\0sendMapTextureIdByTileIndx\0"
    "map::TileIndex\0tileIndx\0GLuint\0textureId\0"
    "currentLatChanged\0currentLonChanged\0"
    "setSceneBoundingBoxVisible\0visible\0"
    "fitAllInView\0setIsometricView\0"
    "setCancelZoomView\0setMapView\0"
    "setLastEpochFocusView\0useAngle\0"
    "useNavigatorView\0setIdleMode\0"
    "setVerticalScale\0scale\0shiftCameraZAxis\0"
    "shift\0setBottomTrackVertexSelectionMode\0"
    "setPolygonCreationMode\0setPolygonEditingMode\0"
    "onCursorChanged\0Qt::CursorShape\0"
    "cursorShape\0setDataset\0Dataset*\0dataset\0"
    "setDataProcessorPtr\0DataProcessor*\0"
    "dataProcessorPtr\0addPoints\0"
    "QVector<QVector3D>\0color\0width\0"
    "setQmlRootObject\0object\0setQmlAppEngine\0"
    "QQmlApplicationEngine*\0engine\0"
    "updateMapView\0updateViews\0onPositionAdded\0"
    "uint64_t\0indx\0setIsNorth\0state\0"
    "switchToBottomTrackVertexComboSelectionMode\0"
    "x\0y\0mousePressTrigger\0Qt::MouseButtons\0"
    "mouseButton\0Qt::Key\0keyboardKey\0"
    "mouseMoveTrigger\0mouseReleaseTrigger\0"
    "mouseWheelTrigger\0angleDelta\0pinchTrigger\0"
    "prevCenter\0currCenter\0scaleDelta\0"
    "keyPressTrigger\0key\0bottomTrackActionEvent\0"
    "BottomTrack::ActionEvent\0actionEvent\0"
    "setScreenMode\0isScreen\0currLat\0currLon\0"
    "screetShot\0QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsScene3dView[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
      42,   16, // methods
       3,  396, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags
       2,    5,  226,    3, 0x06 /* Public */,
      12,    1,  237,    3, 0x06 /* Public */,
      13,    0,  240,    3, 0x06 /* Public */,
      14,    2,  241,    3, 0x06 /* Public */,
      19,    0,  246,    3, 0x06 /* Public */,
      20,    0,  247,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  248,    3, 0x0a /* Public */,
      23,    0,  251,    3, 0x0a /* Public */,
      24,    0,  252,    3, 0x0a /* Public */,
      25,    0,  253,    3, 0x0a /* Public */,
      26,    0,  254,    3, 0x0a /* Public */,
      27,    2,  255,    3, 0x0a /* Public */,
      30,    0,  260,    3, 0x0a /* Public */,
      31,    1,  261,    3, 0x0a /* Public */,
      33,    1,  264,    3, 0x0a /* Public */,
      35,    0,  267,    3, 0x0a /* Public */,
      36,    0,  268,    3, 0x0a /* Public */,
      37,    0,  269,    3, 0x0a /* Public */,
      38,    1,  270,    3, 0x0a /* Public */,
      41,    1,  273,    3, 0x0a /* Public */,
      44,    1,  276,    3, 0x0a /* Public */,
      47,    3,  279,    3, 0x0a /* Public */,
      47,    2,  286,    3, 0x2a /* Public | MethodCloned */,
      51,    1,  291,    3, 0x0a /* Public */,
      53,    1,  294,    3, 0x0a /* Public */,
      56,    0,  297,    3, 0x0a /* Public */,
      57,    0,  298,    3, 0x0a /* Public */,
      58,    1,  299,    3, 0x0a /* Public */,
      61,    1,  302,    3, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      63,    2,  305,    3, 0x02 /* Public */,
      66,    4,  310,    3, 0x02 /* Public */,
      66,    3,  319,    3, 0x22 /* Public | MethodCloned */,
      71,    4,  326,    3, 0x02 /* Public */,
      71,    3,  335,    3, 0x22 /* Public | MethodCloned */,
      72,    4,  342,    3, 0x02 /* Public */,
      72,    3,  351,    3, 0x22 /* Public | MethodCloned */,
      73,    5,  358,    3, 0x02 /* Public */,
      73,    4,  369,    3, 0x22 /* Public | MethodCloned */,
      75,    4,  378,    3, 0x02 /* Public */,
      79,    1,  387,    3, 0x02 /* Public */,
      81,    1,  390,    3, 0x02 /* Public */,
      84,    1,  393,    3, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    5,    6,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   28,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   32,
    QMetaType::Void, QMetaType::Float,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void, 0x80000000 | 48, QMetaType::QColor, QMetaType::Float,    3,   49,   50,
    QMetaType::Void, 0x80000000 | 48, QMetaType::QColor,    3,   49,
    QMetaType::Void, QMetaType::QObjectStar,   52,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void, QMetaType::Bool,   62,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   64,   65,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 69,   68,   64,   65,   70,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal,   68,   64,   65,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 69,   68,   64,   65,   70,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal,   68,   64,   65,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 69,   68,   64,   65,   70,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal,   68,   64,   65,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF, 0x80000000 | 69,   68,   64,   65,   74,   70,
    QMetaType::Void, 0x80000000 | 67, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,   68,   64,   65,   74,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QReal, QMetaType::QReal,   76,   77,   78,   74,
    QMetaType::Void, 0x80000000 | 69,   80,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, QMetaType::Bool,   85,

 // properties: name, type, flags
      86, QMetaType::Double, 0x00495001,
      87, QMetaType::Double, 0x00495001,
      88, 0x80000000 | 89, 0x00095409,

 // properties: notify_signal_id
       4,
       5,
       0,

       0        // eod
};

void GraphicsScene3dView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphicsScene3dView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendRectRequest((*reinterpret_cast< QVector<LLA>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< LLARef(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< map::CameraTilt(*)>(_a[5]))); break;
        case 1: _t->sendLlaRef((*reinterpret_cast< LLARef(*)>(_a[1]))); break;
        case 2: _t->cameraIsMoved(); break;
        case 3: _t->sendMapTextureIdByTileIndx((*reinterpret_cast< const map::TileIndex(*)>(_a[1])),(*reinterpret_cast< GLuint(*)>(_a[2]))); break;
        case 4: _t->currentLatChanged(); break;
        case 5: _t->currentLonChanged(); break;
        case 6: _t->setSceneBoundingBoxVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fitAllInView(); break;
        case 8: _t->setIsometricView(); break;
        case 9: _t->setCancelZoomView(); break;
        case 10: _t->setMapView(); break;
        case 11: _t->setLastEpochFocusView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setIdleMode(); break;
        case 13: _t->setVerticalScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->shiftCameraZAxis((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->setBottomTrackVertexSelectionMode(); break;
        case 16: _t->setPolygonCreationMode(); break;
        case 17: _t->setPolygonEditingMode(); break;
        case 18: _t->onCursorChanged((*reinterpret_cast< Qt::CursorShape(*)>(_a[1]))); break;
        case 19: _t->setDataset((*reinterpret_cast< Dataset*(*)>(_a[1]))); break;
        case 20: _t->setDataProcessorPtr((*reinterpret_cast< DataProcessor*(*)>(_a[1]))); break;
        case 21: _t->addPoints((*reinterpret_cast< QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 22: _t->addPoints((*reinterpret_cast< QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 23: _t->setQmlRootObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 24: _t->setQmlAppEngine((*reinterpret_cast< QQmlApplicationEngine*(*)>(_a[1]))); break;
        case 25: _t->updateMapView(); break;
        case 26: _t->updateViews(); break;
        case 27: _t->onPositionAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 28: _t->setIsNorth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->switchToBottomTrackVertexComboSelectionMode((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 30: _t->mousePressTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 31: _t->mousePressTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 32: _t->mouseMoveTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 33: _t->mouseMoveTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 34: _t->mouseReleaseTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 35: _t->mouseReleaseTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 36: _t->mouseWheelTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< Qt::Key(*)>(_a[5]))); break;
        case 37: _t->mouseWheelTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4]))); break;
        case 38: _t->pinchTrigger((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 39: _t->keyPressTrigger((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 40: _t->bottomTrackActionEvent((*reinterpret_cast< BottomTrack::ActionEvent(*)>(_a[1]))); break;
        case 41: _t->setScreenMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< map::TileIndex >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dataset* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataProcessor* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlApplicationEngine* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GraphicsScene3dView::*)(QVector<LLA> , bool , LLARef , bool , map::CameraTilt );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::sendRectRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GraphicsScene3dView::*)(LLARef );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::sendLlaRef)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GraphicsScene3dView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::cameraIsMoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GraphicsScene3dView::*)(const map::TileIndex & , GLuint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::sendMapTextureIdByTileIndx)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GraphicsScene3dView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::currentLatChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GraphicsScene3dView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::currentLonChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GraphicsScene3dView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getCurrLat(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getCurrLon(); break;
        case 2: *reinterpret_cast< QWidget**>(_v) = _t->screetShot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject GraphicsScene3dView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickFramebufferObject::staticMetaObject>(),
    qt_meta_stringdata_GraphicsScene3dView.data,
    qt_meta_data_GraphicsScene3dView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphicsScene3dView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsScene3dView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsScene3dView.stringdata0))
        return static_cast<void*>(this);
    return QQuickFramebufferObject::qt_metacast(_clname);
}

int GraphicsScene3dView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickFramebufferObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GraphicsScene3dView::sendRectRequest(QVector<LLA> _t1, bool _t2, LLARef _t3, bool _t4, map::CameraTilt _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphicsScene3dView::sendLlaRef(LLARef _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GraphicsScene3dView::cameraIsMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GraphicsScene3dView::sendMapTextureIdByTileIndx(const map::TileIndex & _t1, GLuint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphicsScene3dView::currentLatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GraphicsScene3dView::currentLonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
