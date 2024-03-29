import QtQuick 2.0
import QtQuick.Window 2.12
import QtQuick.Controls 1.4
Rectangle {

    id:root


    property bool isPress: false
    property string versionStr: "V-0-0-0"

    signal winMin();
    signal winMax();
    signal winClose();
    signal dragPosChange(var mx,var my);

    Rectangle {
        anchors.fill: parent

        color: "#476BFD"
        Image {
            id: namew
            width: 130
            height: 22
            anchors.left: parent.left
            anchors.leftMargin: 25
            anchors.verticalCenter: parent.verticalCenter
            source: "qrc:/images/iEagleCam.png"
        }

        Label{
            anchors.top: namew.bottom
            anchors.left: parent.left
            anchors.leftMargin: 25+130/2

            font.family: "arial"
            font.pointSize: 10
            color: "white"
            font.italic:true
            font.bold: true
            text: versionStr
        }


        MouseArea {
            id:mousearea
            property point clickPoint: "0,0"

            anchors.fill: parent
            acceptedButtons: Qt.LeftButton

            onPressed: {
                clickPoint  = Qt.point(mouse.x, mouse.y)
            }
            //双击过程会出现拖拉事件，导致窗口最大化到还原过程出现bug,因此禁掉
//            onDoubleClicked: {
//                enabled = false;
//                winMax();
//                enabled = true;

//            }
            onPositionChanged: {

                var offset = Qt.point(mouse.x - clickPoint.x, mouse.y - clickPoint.y)

                dragPosChange(offset.x, offset.y)
            }
        }


        Row{
            id:menu
            anchors.right: windowAdjust.left
            anchors.rightMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            spacing: 10
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/flush_enter.png"
                imgSourseNormal: "qrc:/images/flush.png"
                imgSoursePress: "qrc:/images/flush_enter.png"

            }
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/msg_enter.png"
                imgSourseNormal: "qrc:/images/msg.png"
                imgSoursePress: "qrc:/images/msg_enter.png"

            }
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/menu_enter.png"
                imgSourseNormal: "qrc:/images/menu.png"
                imgSoursePress: "qrc:/images/menu_enter.png"

            }

            Rectangle{
                width: 1
                height: 30
                color: "#4A4A4A"
            }

        }


        Row{
            id:windowAdjust
            anchors.right: parent.right
            anchors.rightMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            spacing:10
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/wMin_enter.png"
                imgSourseNormal: "qrc:/images/wMin.png"
                imgSoursePress: "qrc:/images/wMin_enter.png"
                onClick:winMin()
            }
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/wMax_enter.png"
                imgSourseNormal: "qrc:/images/wMax.png"
                imgSoursePress: "qrc:/images/wMax_enter.png"
                onClick:winMax()

            }
            QmlImageButton{
                width: 36
                height: 36
                imgSourseHover: "qrc:/images/wClose_enter.png"
                imgSourseNormal: "qrc:/images/wClose.png"
                imgSoursePress: "qrc:/images/wClose_enter.png"
                onClick:winClose()


            }

        }

    }




}
