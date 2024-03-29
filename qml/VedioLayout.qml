import QtQuick 2.0

Rectangle {

    id:root

    property int myLayoutSquare: 2  //几乘几的显示

    property alias myModel: repeater.model

    property int currentIndex: -1

    signal s_doubleClick(var index,var ismax);
    signal s_click(var clickIndex);
    signal s_showToastMsg(string str)
    signal s_deleteObject()

    Repeater{
        id:repeater


        VideoLivePlay{
            id:video
            width: (index === currentIndex && model.isMax >0)?root.width:(root.width/myLayoutSquare)
            height:  (index === currentIndex && model.isMax>0)?root.height:(root.height/myLayoutSquare)

            x:(index === currentIndex && model.isMax >0)?0:(index%myLayoutSquare) * width
            y:(index === currentIndex && model.isMax >0)?0:Math.floor(index/myLayoutSquare) * height

            color: "black"
            mip:model.ip
            mport:model.port
            mID:model.did
            mAcc:model.account
            mPwd:model.password
            mIsPlayAudio:(index===0 && model.isMax>0)?true:false
            mIsCreateConenect:model.isCreateConnected>0?true:false
            mIsSelected: index === currentIndex

            onClick: {

                //console.debug("current index "+ index)

                currentIndex = index

                s_click(currentIndex)
            }

            onDoubleClick: {
                //console.debug("VideoLivePlay onDoubleClick")

                if( model.isMax > 0 )
                     model.isMax = 0;
                else
                    model.isMax = 1;

                s_doubleClick(index,model.isMax)
            }

            onS_showToastMsg:st_showToastMsg(str)

            onS_deleteObject:{

                isCreateConnected = 0;

            }
        }



    }

}
