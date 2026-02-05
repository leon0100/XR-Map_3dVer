import QtQuick 2.15

Rectangle {
    id: selectionRect
    visible: renderer.screetShot.isSelectionRectVisible

    // 添加坐标转换
    property real mouseX: 0
    property real mouseY: 0

    // 使用绝对坐标
    x: renderer.screetShot.selectionRect.x
    y: renderer.screetShot.selectionRect.y
    width: renderer.screetShot.selectionRect.width
    height: renderer.screetShot.selectionRect.height


    color: Qt.rgba(0, 1, 1, 0.2)
    border.width: 2
    border.color: Qt.rgba(0, 1, 1, 1.0)
    z: 1000

    // 添加调试信息
    Component.onCompleted: {
        console.log("selectionRect initial state:")
        console.log("  x:", x)
        console.log("  y:", y)
        console.log("  width:", width)
        console.log("  height:", height)
        console.log("  visible:", visible)
        console.log("  z:", z)
    }

    onXChanged: console.log("selectionRect x changed:", x)
    onYChanged: console.log("selectionRect y changed:", y)
    onWidthChanged: console.log("selectionRect width changed:", width)
    onHeightChanged: console.log("selectionRect height changed:", height)
    onVisibleChanged: console.log("selectionRect visible changed:", visible)
}
