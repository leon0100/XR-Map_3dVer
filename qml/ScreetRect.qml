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


    property int handleSize: 8

       // 左上角
       Rectangle {
           width: handleSize
           height: handleSize
           color: "#d02090"
           border.color: "#d02090"
           border.width: 2
           x: -handleSize/2
           y: -handleSize/2
       }

       // 右上角
       Rectangle {
           width: handleSize
           height: handleSize
           color: "#d02090"
           border.color: "#d02090"
           border.width: 2
           x: parent.width - handleSize/2
           y: -handleSize/2
       }

       // 左下角
       Rectangle {
           width: handleSize
           height: handleSize
           color: "#d02090"
           border.color: "#d02090"
           border.width: 2
           x: -handleSize/2
           y: parent.height - handleSize/2
       }

       // 右下角
       Rectangle {
           width: handleSize
           height: handleSize
           color: "#d02090"
           border.color: "#d02090"
           border.width: 2
           x: parent.width - handleSize/2
           y: parent.height - handleSize/2
       }

}
