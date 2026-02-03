import QtQuick 2.15
import QtQuick.Controls 2.15

Rectangle {
    id: menu
    height: 30
    width: parent ? parent.width : 400
    color: "#f5f5f5"
    border.color: "#c0c0c0"

    signal openClicked()
    signal saveClicked()


    property  var    targetPlot:    null
    property  var    lastItem:      menuSettings
    property  bool   is3DVisible:   visible3DButton.checked
    property  bool   is2DVisible:   visible2DButton.checked
    property  int    numPlots:      appSettings.numPlots
    property  bool   syncPlots:     appSettings.syncPlots
    property  int    instruments:   appSettings.instruments
    property  int    settingsWidth: theme.controlHeight*20
    property  string filePath:      devSettings.filePath
    property  bool   extraInfoVis:  appSettings.extraInfoVis
    property  bool   autopilotInfofVis: appSettings.autopilotInfofVis

    signal languageChanged(string langStr)
    signal menuBarSettingOpened()
    signal syncPlotEnabled()

    function updateBottomTrack() {
        appSettings.updateBottomTrack()
    }

    function clickConnections() {
        itemChangeActive(menuSettings)
    }

    function clickSettings() {
        itemChangeActive(menuDisplay)
    }

    function click2D() {
        visible2DButton.checked = !visible2DButton.checked;
        visible2DButton.clicked()
    }

    function click3D() {
        visible3DButton.checked = !visible3DButton.checked;
        visible3DButton.clicked()
    }

    function closeMenus() {
        if (menuSettings.active) {
            menuSettings.active = false
        }
        if (menuDisplay.active) {
            menuDisplay.active = false
        }
    }

    function itemChangeActive(currentItem) {
        let wasOpen = currentItem.active
        let lastItemTmp = lastItem

        if (currentItem) {
            currentItem.active = !(currentItem.active)
        }

        if (lastItem && lastItem !== currentItem) {
            lastItem.active = false
        }

        lastItem = currentItem

        if (!wasOpen && currentItem.active && (currentItem === menuSettings || currentItem === menuDisplay)) {
            menuBarSettingOpened()
        }
    }




    Row {
        anchors.fill: parent
        anchors.margins: 2
        spacing: 2

        MenuButton {
            id: menuSettings
            icon.source: "qrc:/icons/ui/plug.svg"
            // Layout.fillWidth: true
            isKlfLogging: core.isKlfLogging
            CMouseOpacityArea {
                toolTipText: qsTr("Connections")
                // onContainsMouseChanged: containsMouse ? mainLayout.highlightAllButtons() : mainLayout.resetButtonOpacity()
            }

            onPressed: itemChangeActive(menuSettings)
        }

        MenuButton {
            id: menuDisplay
            // Layout.fillWidth: true
            icon.source: "./settings-outline.svg"

            CMouseOpacityArea {
                toolTipText: qsTr("Settings")
                // onContainsMouseChanged: containsMouse ? mainLayout.highlightAllButtons() : mainLayout.resetButtonOpacity()
            }

            onPressed: itemChangeActive(menuDisplay)
        }



        ToolItem {
            text: "Open"
            onClicked: root.openClicked()
        }

        ToolItem {
            text: "Save"
            onClicked: root.saveClicked()
        }

        ToolSeparator {}

        ToolItem {
            text: "Create Screen"
        }

        ToolItem {
            text: "Measure"
        }
    }

    //左上角第一个按钮（串口连接、文件导入等）
    DeviceSettingsViewer {
        id: devSettings
        visible: menuSettings.active
        // height: menu.height
        menuWidth: settingsWidth
        x: 8
        y: 30
    }

    //左上角第二个按钮settings按钮显示出来
    DisplaySettingsViewer {
        id: appSettings
        visible: menuDisplay.active
        menuWidth: settingsWidth
        x: 8
        y: 30
        targetPlot: menu.targetPlot
    }



    /* =========================================================
       ================== inline component =====================
       ========================================================= */

    component ToolItem : Rectangle {
        id: item
        height: parent.height - 2
         width: Math.max(label.implicitWidth + 12, 24)
        radius: 2

        property string text
        signal clicked()

        color: mouse.pressed ? "#cce8ff" : mouse.containsMouse ? "#e6f2ff" : "transparent"

        border.color: mouse.containsMouse ? "#7aa7d9" : "transparent"
        border.width: 1

        Text {
            id: label
            anchors.centerIn: parent
            text: item.text
            font.pixelSize: 14
            color: "#333"
        }

        MouseArea {
            id: mouse
            anchors.fill: parent
            hoverEnabled: true
            onClicked: item.clicked()
        }
    }

    component ToolSeparator : Rectangle {
        width: 1
        height: parent.height - 6
        color: "#c0c0c0"
    }
}

