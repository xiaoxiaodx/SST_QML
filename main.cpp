﻿#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "XVideo.h"
#include "qmllanguage.h"
#include "ccrashstack.h"
#include "tcpworker.h"


long __stdcall   callback(_EXCEPTION_POINTERS*   excp)
{

    CCrashStack crashStack(excp);

    QString sCrashInfo = crashStack.GetExceptionInfo();

    QString sFileName = "testcrash.log";

    QFile file(sFileName);

    if (file.open(QIODevice::WriteOnly|QIODevice::Truncate))

    {

        file.write(sCrashInfo.toUtf8());

        file.close();

    }



    qDebug()<<"Error:\n"<<sCrashInfo;

    //MessageBox(0,L"Error",L"error",MB_OK);

    return   EXCEPTION_EXECUTE_HANDLER;
}


int main(int argc, char *argv[])
{


    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);


    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;



    QFont font("arial",15);
    app.setFont(font);

    SetUnhandledExceptionFilter(callback);
    QmlLanguage qmlLanguage(app, engine);
    engine.rootContext()->setContextProperty("qmlLanguage", &qmlLanguage);

    // XVideo 为QPaint显示视频(光栅绘图)
    qmlRegisterType<XVideo>("XVideo", 1, 0, "XVideo");

    engine.load("../SSTQMLTC1/qml/main.qml");

    if (engine.rootObjects().isEmpty())
        return -1;
    return app.exec();
}

