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

        MenuButton {  //截图
            id: frameSlectBtn
            icon.source: "qrc:/XR/screet.png"

            CMouseOpacityArea {
                id: btn1
                toolTipText: qsTr("Screetshot")
            }

            property bool screenMode: false
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: frameSlectBtn.screenMode ? "#a8d8ff" : btn1.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: {
                screenMode = !screenMode
                renderer.setScreenMode(screenMode)
            }

            Connections {
                target: renderer.screetShot
                function onCancelScreetShot() {
                    frameSlectBtn.screenMode = false
                }
            }
        }

        MenuButton {  //历史截图
            id: historyScreenBtn
            icon.source: "qrc:/XR/historyScreen.png"
            CMouseOpacityArea {
                id: btn2
                toolTipText: qsTr("History Screen")
            }
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: btn2.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: itemChangeActive(historyScreenBtn)
        }

        MenuButton {  //测距
            id: measureBtn
            icon.source: "qrc:/XR/measuredistance.png"
            CMouseOpacityArea {
                id: btn3
                toolTipText: qsTr("Measure")
            }
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: btn3.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: itemChangeActive(measureBtn)
        }

        MenuButton { //定位
            id: locationBtn
            icon.source: "qrc:/XR/location.png"
            CMouseOpacityArea {
                id: btn4
                toolTipText: qsTr("Location")
            }
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: btn4.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: itemChangeActive(locationBtn)
        }

        MenuButton { //兴趣点
            id: landMarkBtn
            icon.source: "qrc:/XR/pushPin.png"
            CMouseOpacityArea {
                id: btn5
                toolTipText: qsTr("LandMark")
            }
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: btn5.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: itemChangeActive(landMarkBtn)
        }

        MenuButton { //等值线
            id: contourBtn
            icon.source: "qrc:/icons/contour.png"
            CMouseOpacityArea {
                id: btn6
                toolTipText: qsTr("Contours")
            }
            Rectangle {
                anchors.fill: parent
                radius: 2
                color: btn6.containsMouse ? "#d6e6ff" : "transparent"
            }

            onPressed: itemChangeActive(contourBtn)
        }



        MenuButton {
            id: menuSettings
            icon.source: "qrc:/icons/ui/plug.svg"
            CMouseOpacityArea {
                toolTipText: qsTr("Connections")
            }

            onPressed: itemChangeActive(menuSettings)
        }

        MenuButton {
            id: menuDisplay
            icon.source: "./settings-outline.svg"
            CMouseOpacityArea {
                toolTipText: qsTr("Settings")
                onContainsMouseChanged: hoverBackgroundColor
            }

            onPressed: itemChangeActive(menuDisplay)
        }

    }

    //（串口连接、文件导入等）
    DeviceSettingsViewer {
        id: devSettings
        visible: menuSettings.active
        // height: menu.height
        menuWidth: settingsWidth
        x: 8
        y: 30
    }

    //settings按钮显示出来
    DisplaySettingsViewer {
        id: appSettings
        visible: menuDisplay.active
        menuWidth: settingsWidth
        x: 8
        y: 30
        targetPlot: menu.targetPlot
    }



}

