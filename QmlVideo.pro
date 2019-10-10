QT += concurrent
TEMPLATE = app
QT += qml quick
QT += opengl
QT += gui
QT += quick
QT += network
QT += core
CONFIG += c++11
QT += multimedia


TRANSLATIONS = zh_CN.ts en_US.ts

QMAKE_CXXFLAGS_RELEASE += -g
QMAKE_CFLAGS_RELEASE += -g
QMAKE_LFLAGS_RELEASE = -mthreads


HEADERS += \
    XVideo.h \
    tcpworker.h \
    qmllanguage.h \
    mediaqueue/common.h \
    mediaqueue/mediaqueue.h \
    mediadataprocess.h \
    ccrashstack.h \
    ffmpegcodec.h \
    playaudio.h \
    mydevice.h \
    avi/adapt.h \
    avi/avformat.h \
    avi/avi_adapt.h \
    avi/avienc_adapt.h \
    avi/common.h \
    avi/debug.h \
    avi/defs.h \
    avi/hi_avi.h \
    avi/hi_type.h \
    avirecord.h \
    dispatchmsgmanager.h \
    VideoManagement/mp4format.h \
    p2p/p2pworker.h

SOURCES += main.cpp \
    qmllanguage.cpp \
    tcpworker.cpp \
    XVideo.cpp \
    mediaqueue/mediaqueue.cpp \
    mediadataprocess.cpp \
    ccrashstack.cpp \
    ffmpegcodec.cpp \
    playaudio.cpp \
    mydevice.cpp \
    avi/avformat.cpp \
    avi/avformat_input.cpp \
    avi/avi_adapt.cpp \
    avi/avienc_adapt.cpp \
    avi/hi_avi.cpp \
    avirecord.cpp \
    dispatchmsgmanager.cpp \
    VideoManagement/mp4format.cpp \
    p2p/p2pworker.cpp


# Additional import path used to resolve QML modules in Qt Creator's code model
#QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
LIBS+= -L $$PWD/third/p2p_ppcs/ -l PPCS_API
INCLUDEPATH += $$PWD/third/p2p_ppcs/include \
               $$PWD/P2P/


INCLUDEPATH += $$PWD/avi \
               $$PWD/VideoManagement


#因为移动端的ffmpeg和
win32{
INCLUDEPATH += $$PWD/third/ffmpeg/include_
LIBS += -lpthread libwsock32 libws2_32
LIBS += $$PWD/third/ffmpeg/lib/avcodec.lib \
        $$PWD/third/ffmpeg/lib/avdevice.lib \
        $$PWD/third/ffmpeg/lib/avfilter.lib \
        $$PWD/third/ffmpeg/lib/avformat.lib \
        $$PWD/third/ffmpeg/lib/avutil.lib \
        $$PWD/third/ffmpeg/lib/postproc.lib \
        $$PWD/third/ffmpeg/lib/swresample.lib \
        $$PWD/third/ffmpeg/lib/swscale.lib

}


android{
INCLUDEPATH += $$PWD/third/ffmpeg/include
LIBS +=  $$PWD/ffmpeg/lib/libavcodec-57.so \
        $$PWD/third/ffmpeg/lib/libavdevice-57.so \
        $$PWD/third/ffmpeg/lib/libavfilter-6.so \
        $$PWD/third/ffmpeg/lib/libavformat-57.so \
        $$PWD/third/ffmpeg/lib/libavutil-55.so \
        $$PWD/third/ffmpeg/lib/libpostproc-54.so \
        $$PWD/third/ffmpeg/lib/libswresample-2.so \
        $$PWD/third/ffmpeg/lib/libswscale-4.so


contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_EXTRA_LIBS = \
        $$PWD/third/ffmpeg/lib/libavcodec-57.so \
        $$PWD/third/ffmpeg/lib/libavdevice-57.so \
        $$PWD/third/ffmpeg/lib/libavfilter-6.so \
        $$PWD/third/ffmpeg/lib/libavformat-57.so \
        $$PWD/third/ffmpeg/lib/libavutil-55.so \
        $$PWD/third/ffmpeg/lib/libpostproc-54.so \
        $$PWD/third/ffmpeg/lib/libswresample-2.so \
        $$PWD/third/ffmpeg/lib/libswscale-4.so
}
}

RESOURCES += \
    res.qrc

DISTFILES += \
    qml/HomeContent.qml \
    qml/HomeStateBar.qml \
    qml/HomeTitleBar.qml \
    qml/ListDeviceItem.qml \
    qml/main.qml \
    qml/QmlDialog.qml \
    qml/QmlDialogAddDevice.qml \
    qml/QmlImageButton.qml \
    qml/QmlImageTarBar.qml \
    qml/QmlToast.qml \
    qml/QmlVideo.qml \
    qml/QmlWaitingEllipsis.qml \
    qml/QmlWatingBusy.qml \
    qml/VideoLivePlay.qml



































