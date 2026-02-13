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
    QByteArrayData data[93];
    char stringdata0[1277];
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
QT_MOC_LITERAL(21, 259, 19), // "requestRenderUpdate"
QT_MOC_LITERAL(22, 279, 26), // "setSceneBoundingBoxVisible"
QT_MOC_LITERAL(23, 306, 7), // "visible"
QT_MOC_LITERAL(24, 314, 12), // "fitAllInView"
QT_MOC_LITERAL(25, 327, 16), // "setIsometricView"
QT_MOC_LITERAL(26, 344, 17), // "setCancelZoomView"
QT_MOC_LITERAL(27, 362, 10), // "setMapView"
QT_MOC_LITERAL(28, 373, 21), // "setLastEpochFocusView"
QT_MOC_LITERAL(29, 395, 8), // "useAngle"
QT_MOC_LITERAL(30, 404, 16), // "useNavigatorView"
QT_MOC_LITERAL(31, 421, 11), // "setIdleMode"
QT_MOC_LITERAL(32, 433, 16), // "setVerticalScale"
QT_MOC_LITERAL(33, 450, 5), // "scale"
QT_MOC_LITERAL(34, 456, 16), // "shiftCameraZAxis"
QT_MOC_LITERAL(35, 473, 5), // "shift"
QT_MOC_LITERAL(36, 479, 33), // "setBottomTrackVertexSelection..."
QT_MOC_LITERAL(37, 513, 22), // "setPolygonCreationMode"
QT_MOC_LITERAL(38, 536, 21), // "setPolygonEditingMode"
QT_MOC_LITERAL(39, 558, 15), // "onCursorChanged"
QT_MOC_LITERAL(40, 574, 15), // "Qt::CursorShape"
QT_MOC_LITERAL(41, 590, 11), // "cursorShape"
QT_MOC_LITERAL(42, 602, 10), // "setDataset"
QT_MOC_LITERAL(43, 613, 8), // "Dataset*"
QT_MOC_LITERAL(44, 622, 7), // "dataset"
QT_MOC_LITERAL(45, 630, 19), // "setDataProcessorPtr"
QT_MOC_LITERAL(46, 650, 14), // "DataProcessor*"
QT_MOC_LITERAL(47, 665, 16), // "dataProcessorPtr"
QT_MOC_LITERAL(48, 682, 9), // "addPoints"
QT_MOC_LITERAL(49, 692, 18), // "QVector<QVector3D>"
QT_MOC_LITERAL(50, 711, 5), // "color"
QT_MOC_LITERAL(51, 717, 5), // "width"
QT_MOC_LITERAL(52, 723, 16), // "setQmlRootObject"
QT_MOC_LITERAL(53, 740, 6), // "object"
QT_MOC_LITERAL(54, 747, 15), // "setQmlAppEngine"
QT_MOC_LITERAL(55, 763, 22), // "QQmlApplicationEngine*"
QT_MOC_LITERAL(56, 786, 6), // "engine"
QT_MOC_LITERAL(57, 793, 13), // "updateMapView"
QT_MOC_LITERAL(58, 807, 11), // "updateViews"
QT_MOC_LITERAL(59, 819, 15), // "onPositionAdded"
QT_MOC_LITERAL(60, 835, 8), // "uint64_t"
QT_MOC_LITERAL(61, 844, 4), // "indx"
QT_MOC_LITERAL(62, 849, 10), // "setIsNorth"
QT_MOC_LITERAL(63, 860, 5), // "state"
QT_MOC_LITERAL(64, 866, 18), // "slotScreetGraphics"
QT_MOC_LITERAL(65, 885, 25), // "processNextScreenshotTask"
QT_MOC_LITERAL(66, 911, 43), // "switchToBottomTrackVertexComb..."
QT_MOC_LITERAL(67, 955, 1), // "x"
QT_MOC_LITERAL(68, 957, 1), // "y"
QT_MOC_LITERAL(69, 959, 17), // "mousePressTrigger"
QT_MOC_LITERAL(70, 977, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(71, 994, 11), // "mouseButton"
QT_MOC_LITERAL(72, 1006, 7), // "Qt::Key"
QT_MOC_LITERAL(73, 1014, 11), // "keyboardKey"
QT_MOC_LITERAL(74, 1026, 16), // "mouseMoveTrigger"
QT_MOC_LITERAL(75, 1043, 19), // "mouseReleaseTrigger"
QT_MOC_LITERAL(76, 1063, 17), // "mouseWheelTrigger"
QT_MOC_LITERAL(77, 1081, 10), // "angleDelta"
QT_MOC_LITERAL(78, 1092, 12), // "pinchTrigger"
QT_MOC_LITERAL(79, 1105, 10), // "prevCenter"
QT_MOC_LITERAL(80, 1116, 10), // "currCenter"
QT_MOC_LITERAL(81, 1127, 10), // "scaleDelta"
QT_MOC_LITERAL(82, 1138, 15), // "keyPressTrigger"
QT_MOC_LITERAL(83, 1154, 3), // "key"
QT_MOC_LITERAL(84, 1158, 22), // "bottomTrackActionEvent"
QT_MOC_LITERAL(85, 1181, 24), // "BottomTrack::ActionEvent"
QT_MOC_LITERAL(86, 1206, 11), // "actionEvent"
QT_MOC_LITERAL(87, 1218, 13), // "setScreenMode"
QT_MOC_LITERAL(88, 1232, 8), // "isScreen"
QT_MOC_LITERAL(89, 1241, 7), // "currLat"
QT_MOC_LITERAL(90, 1249, 7), // "currLon"
QT_MOC_LITERAL(91, 1257, 10), // "screetShot"
QT_MOC_LITERAL(92, 1268, 8) // "QWidget*"

    },
    "GraphicsScene3dView\0QML.Element\0"
    "sendRectRequest\0\0QVector<LLA>\0rect\0"
    "isPerspective\0LLARef\0viewLlaRef\0moveUp\0"
    "map::CameraTilt\0tiltCam\0sendLlaRef\0"
    "cameraIsMoved\0sendMapTextureIdByTileIndx\0"
    "map::TileIndex\0tileIndx\0GLuint\0textureId\0"
    "currentLatChanged\0currentLonChanged\0"
    "requestRenderUpdate\0setSceneBoundingBoxVisible\0"
    "visible\0fitAllInView\0setIsometricView\0"
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
    "slotScreetGraphics\0processNextScreenshotTask\0"
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
      45,   16, // methods
       3,  414, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags
       2,    5,  241,    3, 0x06 /* Public */,
      12,    1,  252,    3, 0x06 /* Public */,
      13,    0,  255,    3, 0x06 /* Public */,
      14,    2,  256,    3, 0x06 /* Public */,
      19,    0,  261,    3, 0x06 /* Public */,
      20,    0,  262,    3, 0x06 /* Public */,
      21,    0,  263,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  264,    3, 0x0a /* Public */,
      24,    0,  267,    3, 0x0a /* Public */,
      25,    0,  268,    3, 0x0a /* Public */,
      26,    0,  269,    3, 0x0a /* Public */,
      27,    0,  270,    3, 0x0a /* Public */,
      28,    2,  271,    3, 0x0a /* Public */,
      31,    0,  276,    3, 0x0a /* Public */,
      32,    1,  277,    3, 0x0a /* Public */,
      34,    1,  280,    3, 0x0a /* Public */,
      36,    0,  283,    3, 0x0a /* Public */,
      37,    0,  284,    3, 0x0a /* Public */,
      38,    0,  285,    3, 0x0a /* Public */,
      39,    1,  286,    3, 0x0a /* Public */,
      42,    1,  289,    3, 0x0a /* Public */,
      45,    1,  292,    3, 0x0a /* Public */,
      48,    3,  295,    3, 0x0a /* Public */,
      48,    2,  302,    3, 0x2a /* Public | MethodCloned */,
      52,    1,  307,    3, 0x0a /* Public */,
      54,    1,  310,    3, 0x0a /* Public */,
      57,    0,  313,    3, 0x0a /* Public */,
      58,    0,  314,    3, 0x0a /* Public */,
      59,    1,  315,    3, 0x0a /* Public */,
      62,    1,  318,    3, 0x0a /* Public */,
      64,    0,  321,    3, 0x0a /* Public */,
      65,    0,  322,    3, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      66,    2,  323,    3, 0x02 /* Public */,
      69,    4,  328,    3, 0x02 /* Public */,
      69,    3,  337,    3, 0x22 /* Public | MethodCloned */,
      74,    4,  344,    3, 0x02 /* Public */,
      74,    3,  353,    3, 0x22 /* Public | MethodCloned */,
      75,    4,  360,    3, 0x02 /* Public */,
      75,    3,  369,    3, 0x22 /* Public | MethodCloned */,
      76,    5,  376,    3, 0x02 /* Public */,
      76,    4,  387,    3, 0x22 /* Public | MethodCloned */,
      78,    4,  396,    3, 0x02 /* Public */,
      82,    1,  405,    3, 0x02 /* Public */,
      84,    1,  408,    3, 0x02 /* Public */,
      87,    1,  411,    3, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 7, QMetaType::Bool, 0x80000000 | 10,    5,    6,    8,    9,   11,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,   16,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   33,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 49, QMetaType::QColor, QMetaType::Float,    3,   50,   51,
    QMetaType::Void, 0x80000000 | 49, QMetaType::QColor,    3,   50,
    QMetaType::Void, QMetaType::QObjectStar,   53,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,   61,
    QMetaType::Void, QMetaType::Bool,   63,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   67,   68,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 72,   71,   67,   68,   73,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal,   71,   67,   68,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 72,   71,   67,   68,   73,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal,   71,   67,   68,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal, 0x80000000 | 72,   71,   67,   68,   73,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal,   71,   67,   68,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF, 0x80000000 | 72,   71,   67,   68,   77,   73,
    QMetaType::Void, 0x80000000 | 70, QMetaType::QReal, QMetaType::QReal, QMetaType::QPointF,   71,   67,   68,   77,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QReal, QMetaType::QReal,   79,   80,   81,   77,
    QMetaType::Void, 0x80000000 | 72,   83,
    QMetaType::Void, 0x80000000 | 85,   86,
    QMetaType::Void, QMetaType::Bool,   88,

 // properties: name, type, flags
      89, QMetaType::Double, 0x00495001,
      90, QMetaType::Double, 0x00495001,
      91, 0x80000000 | 92, 0x00095409,

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
        case 6: _t->requestRenderUpdate(); break;
        case 7: _t->setSceneBoundingBoxVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->fitAllInView(); break;
        case 9: _t->setIsometricView(); break;
        case 10: _t->setCancelZoomView(); break;
        case 11: _t->setMapView(); break;
        case 12: _t->setLastEpochFocusView((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setIdleMode(); break;
        case 14: _t->setVerticalScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 15: _t->shiftCameraZAxis((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 16: _t->setBottomTrackVertexSelectionMode(); break;
        case 17: _t->setPolygonCreationMode(); break;
        case 18: _t->setPolygonEditingMode(); break;
        case 19: _t->onCursorChanged((*reinterpret_cast< Qt::CursorShape(*)>(_a[1]))); break;
        case 20: _t->setDataset((*reinterpret_cast< Dataset*(*)>(_a[1]))); break;
        case 21: _t->setDataProcessorPtr((*reinterpret_cast< DataProcessor*(*)>(_a[1]))); break;
        case 22: _t->addPoints((*reinterpret_cast< QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 23: _t->addPoints((*reinterpret_cast< QVector<QVector3D>(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 24: _t->setQmlRootObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 25: _t->setQmlAppEngine((*reinterpret_cast< QQmlApplicationEngine*(*)>(_a[1]))); break;
        case 26: _t->updateMapView(); break;
        case 27: _t->updateViews(); break;
        case 28: _t->onPositionAdded((*reinterpret_cast< uint64_t(*)>(_a[1]))); break;
        case 29: _t->setIsNorth((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->slotScreetGraphics(); break;
        case 31: _t->processNextScreenshotTask(); break;
        case 32: _t->switchToBottomTrackVertexComboSelectionMode((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 33: _t->mousePressTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 34: _t->mousePressTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 35: _t->mouseMoveTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 36: _t->mouseMoveTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 37: _t->mouseReleaseTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< Qt::Key(*)>(_a[4]))); break;
        case 38: _t->mouseReleaseTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 39: _t->mouseWheelTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< Qt::Key(*)>(_a[5]))); break;
        case 40: _t->mouseWheelTrigger((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4]))); break;
        case 41: _t->pinchTrigger((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 42: _t->keyPressTrigger((*reinterpret_cast< Qt::Key(*)>(_a[1]))); break;
        case 43: _t->bottomTrackActionEvent((*reinterpret_cast< BottomTrack::ActionEvent(*)>(_a[1]))); break;
        case 44: _t->setScreenMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Dataset* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DataProcessor* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector3D> >(); break;
            }
            break;
        case 25:
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
        {
            using _t = void (GraphicsScene3dView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GraphicsScene3dView::requestRenderUpdate)) {
                *result = 6;
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
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
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

// SIGNAL 6
void GraphicsScene3dView::requestRenderUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
