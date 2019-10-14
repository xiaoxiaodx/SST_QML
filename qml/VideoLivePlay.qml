import QtQuick 2.0
import XVideo 1.0
import QtQuick.Controls 1.4
Rectangle {

    signal doubleClick(bool isFullScreen);
    signal click();
    signal s_showToastMsg(string str)
    signal s_deleteObject()

    property string mip: ""
    property string mport: ""
    property string mID: ""
    property string mAcc: ""
    property string mPwd: ""
    property bool mIsCreateConenect: false
    property bool mIsPlayAudio: false
    property bool mIsSelected: false
    property bool mIsRecordVedio: false


    Loader{
        id:loaderXVideo
        anchors.fill: parent
        sourceComponent: mIsCreateConenect?xvideoComponet:nullComponent
    }



    Component{
        id:nullComponent
        Rectangle{

            anchors.fill: parent
            color: "#00000000"

            border.color: mIsSelected?"red":"white"
            border.width: 2


            MouseArea{
                anchors.fill: parent
                hoverEnabled: true
                propagateComposedEvents:true


                onClicked: {

                    click();
                }
            }
        }
    }

    Component{
        id:xvideoComponet

        Rectangle{
            anchors.fill: parent
            //color: "#00000000"
            border.color: mIsSelected?"red":"#00000000"
            border.width: 2

            XVideo{
                id:video
                anchors.fill: parent

                property bool mXVideoPlayAudio: mIsPlayAudio
                //property bool mXVideoRecordVedio: mIsRecordVedio

                anchors.margins: 2

                Component.onCompleted:{
                    sendAuthentication(mID,mAcc,mPwd);
                    connectServer(mip,mport)


                }

                onMXVideoPlayAudioChanged:
                {
                    console.debug("onMXVideoPlayAudioChanged    "+onMXVideoPlayAudioChanged)

                    if(mIsCreateConenect)
                        funPlayAudio(mXVideoPlayAudio)
                }


                onSignal_loginStatus: {

                    //console.debug(msg)
                    s_showToastMsg(msg);

                }

                onSignal_waitingLoad: {


                }

                onSignal_endLoad: {


                }


                MouseArea{
                    anchors.fill: parent
                    hoverEnabled: true
                    propagateComposedEvents:true


                    onClicked: {

                        click();
                    }
                    onEntered: {


                    }
                    onExited: {



                    }

                    onDoubleClicked: {


                        doubleClick(true);
                    }
                }

                Image {
                    id: img_delete
                    x:parent.x + parent.width - img_delete.width

                    visible:  mIsSelected?true:false
                    source: "qrc:/images/img_delete.png"

                    MouseArea{
                        anchors.fill: parent
                        enabled: true

                        onClicked: {


                            img_delete.visible = false;
                            s_deleteObject();


                            console.debug("click delete")
                        }

                        onDoubleClicked: {
                            //console.debug("1000")
                        }

                    }
                }

                Rectangle{
                    id:rectRecord
                    anchors.bottom:parent.bottom
                    anchors.bottomMargin: 4
                    anchors.horizontalCenter: parent.horizontalCenter
                    height: 50
                    width: parent.width-8
                    color: "#55888888"     
                    opacity: 0

                    MouseArea{
                        anchors.fill: parent
                        hoverEnabled: true


                        onEntered: {

                            if(mIsSelected){

                                rectRecord.state = "show"

                            }
                        }
                        onExited: {
                            if(mIsSelected){
                                rectRecord.state = "hide"

                            }
                        }

                    }


                    states: [
                        // 将PageA的属性y赋值为0，opacity赋值为1以实现显示的效果
                        State {
                            name: "show"; PropertyChanges { target: rectRecord; opacity: 1 }
                        },
                        // 将PageA的属性y赋值为-height，opaticy赋值为0以实现窗口向上移动并消失的效果
                        State {
                            name: "hide"; PropertyChanges { target: rectRecord;  opacity: 0 }
                        }
                    ]

                    transitions: Transition {
                        PropertyAnimation  {properties: "opacity"; duration: 600; easing.type: Easing.Linear  }
                    }

                    BorderImage{

                        id:btnstop

                        width: 40
                        height: 40
                        anchors.left: parent.left
                        anchors.leftMargin: 30
                        anchors.verticalCenter: parent.verticalCenter
                        source: "qrc:/images/stop.png"

                    }



                    BorderImage{
                        id:btnRecordVideo
                        width: 34
                        height: 34
                        anchors.left: btnstop.right
                        anchors.leftMargin: 10
                        anchors.verticalCenter: parent.verticalCenter

                        source: mIsRecordVedio?"qrc:/images/recordVideo_ing.png":"qrc:/images/recordVideo_start.png"

                        MouseArea{
                            anchors.fill: parent

                            enabled: true
                            onClicked: {

                              delayFun(500,recordBtnClickFun);

                            }
                        }
                    }

                    BorderImage{
                        id:btnScreenShot

                        width: 34
                        height: 34
                        anchors.left: btnRecordVideo.right
                        anchors.leftMargin: 10
                        anchors.verticalCenter: parent.verticalCenter
                        source: "qrc:/images/screenshot.png"

                        MouseArea{
                            anchors.fill: parent

                            enabled: true
                            onClicked: {

                              delayFun(100,screenShotBtnClick);

                            }
                        }
                    }

                }

                Component {
                    id: cpt_busyWait
                    QmlWatingBusy{

                        width: 32
                        height: 32
                        mcolor: "#1296db"
                    }
                }
            }

            Rectangle{
                id:screenShotMask
                anchors.fill: parent
                color: "white"
                opacity: 0

                SequentialAnimation {

                    id:animationOpacity
                    NumberAnimation { target: screenShotMask; property: "opacity"; to: 0.5; duration: 100 }
                    NumberAnimation { target: screenShotMask; property: "opacity"; to: 0; duration: 100 }
                }
                function startAnimation(){
                    animationOpacity.start();
                }

            }

            Timer{
                id:delayTimer

                triggeredOnStart:false

                repeat:false

                function setTimeOut(delayTime,fun){
                    timer.interval = delayTime;
                    timer.repeat = false;
                    timer.triggered.connect(fun);
                    timer.triggered.connect(function release(){
                        timer.triggered.disconnect(fun);
                        timer.triggered.disconnect(release);
                    })
                    timer.start();
                }
            }

            function delayFun(delay,fun1){


               delayTimer.setTimeOut(delay,fun1)

            }


            function recordBtnClickFun(){


                console.debug("recordBtnClickFun        ----"+mIsRecordVedio)
                if(!mIsRecordVedio){

                    s_showToastMsg("start record");
                    mIsRecordVedio = true;

                }else{
                     s_showToastMsg("end record");
                    mIsRecordVedio = false;

                }

                video.funRecordVedio(mIsRecordVedio);
            }

            function screenShotBtnClick(){

                screenShotMask.startAnimation();
                video.funScreenShot();
            }

        }
    }

}
