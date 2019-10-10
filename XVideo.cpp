#include "XVideo.h"
#include <QPainter>
#include <QDebug>

XVideo::XVideo()
{
    setFlag(QQuickItem::ItemHasContents);

    qDebug()<<"XVideo thread thread:"<<QThread::currentThreadId();

    initVariable();

    createP2pThread();
    //createTcpThread();
    //creatDateProcessThread();
    //createPlayAudio();
    // createAviRecord();

    connect(&timerUpdate,&QTimer::timeout,this,&XVideo::slot_timeout);
    timerUpdate.start(70);

    //消息分发定时器
    connect(mpDispatchMsgManager,&DispatchMsgManager::signal_sendToastMsg,this,&XVideo::slot_sendToastMsg);

}


void XVideo::initVariable()
{

    listImgInfo.clear();


    minBuffLen = 150;

    m_threadReadDate = nullptr;
    m_dataProcess = nullptr;

    worker = nullptr;
    m_readThread = nullptr;

    p2pWorker = nullptr;
    m_p2pThread = nullptr;

    recordThread = nullptr;
    aviRecord = nullptr;

    playAudio = nullptr;
    playAudioThread = nullptr;

    pffmpegCodec = nullptr;

    isImgUpdate  = false;
    isPlayAudio = false;
    isRecordAvi =false;
    isScreenShot = false;
    isAudioFirstPlay = true;


    isStartRecord = false;

    m_Img = new QImage();



    preAudioTime = 0;

    mpDispatchMsgManager = DispatchMsgManager::getInstance();
}



void XVideo::createFFmpegDecodec()
{
    if(pffmpegCodec == nullptr)
    {
        pffmpegCodec = new FfmpegCodec;
        pffmpegCodec->vNakedStreamDecodeInit(AV_CODEC_ID_H264);
        pffmpegCodec->aNakedStreamDecodeInit(AV_CODEC_ID_PCM_ALAW,AV_SAMPLE_FMT_S16,8000,1);
        pffmpegCodec->resetSample(AV_CH_LAYOUT_MONO,AV_CH_LAYOUT_MONO,8000,44100,AV_SAMPLE_FMT_S16,AV_SAMPLE_FMT_S16,160);
    }
}


void XVideo::createAviRecord()
{

    if(aviRecord == nullptr){
        recordThread = new QThread;
        aviRecord = new AviRecord("");
//        connect(this,&XVideo::signal_recordAviAudio,aviRecord,&AviRecord::slot_writeAudio);
//        connect(this,&XVideo::signal_recordAviVedio,aviRecord,&AviRecord::slot_writeVedio);
//        connect(this,&XVideo::signal_startRecordAvi,aviRecord,&AviRecord::slot_startRecord);
//        connect(this,&XVideo::signal_endRecordAvi,aviRecord,&AviRecord::slot_endRecord);

//        connect(recordThread,&QThread::finished,aviRecord,&AviRecord::deleteLater);
//        connect(recordThread,&QThread::finished,recordThread,&QThread::deleteLater);
//        aviRecord->moveToThread(recordThread);
        recordThread->start();
    }
}

void XVideo::createP2pThread()
{

    if(p2pWorker == nullptr){

        p2pWorker = new P2pWorker;
        m_p2pThread = new QThread;
        p2pWorker->moveToThread(m_p2pThread);

        connect(p2pWorker,&P2pWorker::signal_sendH264,this,&XVideo::slot_recH264,Qt::DirectConnection);
        connect(p2pWorker,&P2pWorker::signal_sendPcmALaw,this,&XVideo::slot_recPcmALaw,Qt::DirectConnection);

        connect(p2pWorker,&P2pWorker::signal_loopEnd,this,&XVideo::slot_reconnectP2p);
        connect(this,&XVideo::signal_tcpSendAuthentication,p2pWorker,&P2pWorker::slot_connectDev);


        connect(m_p2pThread,&QThread::finished,p2pWorker,&P2pWorker::deleteLater);
        connect(m_p2pThread,&QThread::finished,m_p2pThread,&QThread::deleteLater);

        m_p2pThread->start();

    }

}

void XVideo::createTcpThread()
{

    worker = new TcpWorker();
    m_readThread = new QThread();
    worker->moveToThread(m_readThread);

    connect(worker,&TcpWorker::signal_sendH264,this,&XVideo::slot_recH264,Qt::DirectConnection);
    connect(worker,&TcpWorker::signal_sendPcmALaw,this,&XVideo::slot_recPcmALaw,Qt::DirectConnection);

    connect(worker,&TcpWorker::signal_sendMsg,this,&XVideo::slot_recMsg);

    connect(worker,&TcpWorker::signal_waitTcpConnect,this,&XVideo::slot_trasfer_waitingLoad);
    connect(worker,&TcpWorker::signal_endWait,this,&XVideo::slot_trasfer_endLoad);

    connect(this,&XVideo::signal_connentSer,worker,&TcpWorker::creatNewTcpConnect);
    connect(this,&XVideo::signal_tcpSendAuthentication,worker,&TcpWorker::slot_tcpRecAuthentication,Qt::DirectConnection);
    connect(this,&XVideo::signal_destoryTcpWork,worker,&TcpWorker::slot_destory);
    connect(worker,&TcpWorker::signal_workFinished,m_readThread,&QThread::quit);
    connect(m_readThread,&QThread::finished,worker,&TcpWorker::deleteLater);
    connect(m_readThread,&QThread::finished,m_readThread,&QThread::deleteLater);
    m_readThread->start();

}


void XVideo::creatDateProcessThread()
{

    if(m_threadReadDate == nullptr && m_dataProcess == nullptr)
    {

        m_threadReadDate = new QThread;
        m_dataProcess = new MediaDataProcess;
        m_dataProcess->moveToThread(m_threadReadDate);

        //写队列使用A线程，读队列使用B线程，数据发送出来也使用B线程
        connect(worker,&TcpWorker::signal_writeMediaVideoQueue,m_dataProcess,&MediaDataProcess::slot_writeQueueVideoData,Qt::DirectConnection);
        connect(worker,&TcpWorker::signal_writeMediaAudioQueue,m_dataProcess,&MediaDataProcess::slot_writeQueueAudioData,Qt::DirectConnection);

        //connect(worker,&TcpWorker::signal_readMediaQueue,m_dataProcess,&MediaDataProcess::slot_loopReadQueueData);

        //        connect(m_dataProcess,&MediaDataProcess::signal_sendImg,this,&XVideo::slot_GetOneFrame,Qt::DirectConnection);
        //        connect(m_dataProcess,&MediaDataProcess::signal_preparePlayAudio,this,&XVideo::slot_preparePlayAudio);
        //        connect(m_dataProcess,&MediaDataProcess::signal_playAudio,this,&XVideo::slot_GetOneAudioFrame);

        connect(m_threadReadDate,&QThread::finished,m_dataProcess,&MediaDataProcess::deleteLater);
        m_threadReadDate->start();

    }
}

void XVideo::createPlayAudio()
{
    playAudio = new PlayAudio;
    playAudioThread = new QThread;

    playAudio->moveToThread(playAudioThread);
    connect(this,&XVideo::signal_playAudio,playAudio,&PlayAudio::slot_GetOneAudioFrame);
    connect(this,&XVideo::signal_preparePlayAudio,playAudio,&PlayAudio::slot_preparePlayAudio);
    connect(playAudioThread,&QThread::finished,playAudio,&PlayAudio::deleteLater);
    connect(playAudioThread,&QThread::finished,playAudioThread,&QThread::deleteLater);
    // connect(this,&XVideo::signal_playAudio,playAudio,&PlayAudio::slot_playAudio);

    playAudioThread->start();
}


void XVideo::funPlayAudio(bool isPlay)
{

    if(playAudio != nullptr){

        isPlayAudio = isPlay;
    }
}

void XVideo::funRecordVedio(bool isRecord)
{

    qDebug()<<"XVideo 录像 thread:"<<QThread::currentThreadId();

    isRecordAvi = isRecord;

    if(!isRecordAvi){

        if(recordThread != nullptr)
            recordThread->quit();

        if(recordThread->wait()){
            recordThread == nullptr;
            aviRecord = nullptr;
        }

    }else{

        qDebug()<<"createAviRecord()  ";
        createAviRecord();

        emit signal_startRecordAvi(mDid);
    }
}

void XVideo::funScreenShot()
{
    isScreenShot = true;
    if(m_Img != nullptr && (!m_Img->isNull())){
        if(m_Img->save(mDid + "_"+QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss")+".png",0))
            qDebug()<<"图片保存成功";
        else
            qDebug()<<"图片保存失败";
    }
}


void XVideo::slot_timeout()
{
    //qDebug()<<"slot_timeout thread:"<<QThread::currentThreadId()<<" "<<listImgInfo.size();


    int size = listImgInfo.size();

    if(size >= 3){
        update();
    }

    int preTimeOut = timerUpdate.interval();

    int resetTimeout = 70;
    if(size >= 90)
        resetTimeout = 30;
    else if( size >= 45)
        resetTimeout = 50;
    else if(size >=15)
        resetTimeout = 60;
    else if(size >=8)
        resetTimeout = 70;

    if(preTimeOut != resetTimeout)
        timerUpdate.setInterval(resetTimeout);
}

void XVideo::sendWaitLoad(bool &isWaiting)
{

    if(isWaiting)
        emit signal_endLoad();
    else
        emit signal_waitingLoad("loading");

    isWaiting = !isWaiting;
}

void XVideo::slot_reconnectP2p()
{
    emit signal_tcpSendAuthentication(mDid,mAccount,mPassword);
}

void XVideo::sendAuthentication(QString did,QString name,QString pwd)
{

    mDid = did;
    mAccount = name;
    mPassword = pwd;

    emit signal_tcpSendAuthentication(did,name,pwd);

    qDebug()<<"发送鉴权信息:"<<did<<name<<pwd;
}

void XVideo::connectServer(QString ip, QString port)
{

    //emit signal_constructed();
    emit signal_connentSer(ip,port.toInt());
}

QSGNode* XVideo::updatePaintNode(QSGNode *old, UpdatePaintNodeData *data)
{
   // qDebug()<<"XVideo updatePaintNode thread:"<<QThread::currentThreadId()<<"   "<<listImgInfo.size();
    QSGSimpleTextureNode *oldTexture = static_cast<QSGSimpleTextureNode*>(old);

    if (oldTexture == NULL) {
        oldTexture = new QSGSimpleTextureNode();
    }

    //listImg的size必须要比3大，因为在更新时程序在执行到delete m_Img后，由于用户突然调整窗口大小，
    //从而导致再次调用更新，此时m_Img 已经为空，以下代码将会致使程序崩溃
    // QSGTexture *t = window()->createTextureFromImage(*m_Img)
    if(listImgInfo.size() >= 3){
        isImgUpdate = true;
        delete m_Img;
        quint64 time = listImgInfo.at(0).time;

        //qDebug()<<"XVideo updatePaintNode 更新:";

        m_Img = listImgInfo.at(0).pImg;
        listImgInfo.removeAt(0);

        QSGTexture *t = window()->createTextureFromImage(*m_Img);

        if (t != nullptr) {

            QSGTexture *tt = oldTexture->texture();
            if (tt) {
                tt->deleteLater();
            }
            oldTexture->setRect(boundingRect());
            oldTexture->setTexture(t);
        }

        return oldTexture;
    }else{


        if(!isImgUpdate){

            isImgUpdate = true;
            m_Img->fill(Qt::red);
            QSGTexture *t = window()->createTextureFromImage(*m_Img);

            if (t != nullptr) {

                QSGTexture *tt = oldTexture->texture();
                if (tt) {
                    tt->deleteLater();
                }
                oldTexture->setRect(boundingRect());
                oldTexture->setTexture(t);
            }
        }else
            oldTexture->setRect(boundingRect());

        return oldTexture;

    }

    //实时更新纹理而不使用老的纹理 是因为老的纹理的宽高未发生变化
    //    QSGTexture *t = window()->createTextureFromImage(*m_Img);

    //    if (t != nullptr) {

    //        QSGTexture *tt = oldTexture->texture();
    //        if (tt) {
    //            tt->deleteLater();
    //        }
    //        oldTexture->setRect(boundingRect());
    //        oldTexture->setTexture(t);
    //    }

    //    return oldTexture;
}


//tcpworker 线程
void XVideo::slot_recH264(char* h264Arr,int arrlen,quint64 time)
{

    createFFmpegDecodec();

    emit signal_recordAviVedio(h264Arr,arrlen,time);

    QImage *Img = nullptr;
    if(pffmpegCodec != nullptr){
        Img = pffmpegCodec->decodeVFrame((unsigned char*)h264Arr,arrlen);

        if (Img != nullptr && (!Img->isNull()))
        {
            ImageInfo imgInfo;
            imgInfo.pImg = Img;
            imgInfo.time = time;


            if(listImgInfo.size() < minBuffLen){

                listImgInfo.append(imgInfo);

                //这里是使用信号连接类内的函数，是update函数需要在主线程中调用，而当前函数不在主线程中运行
                //emit signal_update();
            }else
                delete Img;
        }
    }
}


//tcpworker 线程
void XVideo::slot_recPcmALaw( char * buff,int len,quint64 time)
{
    preAudioTime = time;
    createFFmpegDecodec();

    emit signal_recordAviAudio(buff,len,time);

    //声卡准备
    if(isAudioFirstPlay){
        isAudioFirstPlay = false;
        emit signal_preparePlayAudio(44100,0,0,1,0);
        return;
    }else {
        if(pffmpegCodec != nullptr){
            QByteArray arr;
            pffmpegCodec->decodeAFrame((unsigned char*)buff,len,arr);


            if(isPlayAudio)
                emit signal_playAudio((unsigned char*)arr.data(),arr.length(),time);
        }
    }
}

void XVideo::slot_recMsg(MsgInfo * msg)
{

    if(mpDispatchMsgManager != nullptr)
        mpDispatchMsgManager->addMsg(msg);

    //emit signal_loginStatus(msg);
}

void XVideo::slot_sendToastMsg(MsgInfo * msg){

    // qDebug()<<"****** slot_sendToastMsg *******    "<<msg->msgContentStr;
    emit signal_loginStatus(msg->msgContentStr);
}

void XVideo::slot_trasfer_waitingLoad(QString str)
{
    emit signal_waitingLoad(str);
}

void XVideo::slot_trasfer_endLoad()
{
    emit signal_endLoad();
}


XVideo::~XVideo()
{
    qDebug()<<mDid + " 析构   XVideo";

    //析构tcpworker
    {
        if(worker != nullptr)
        {

            qDebug()<<mDid <<" signal_destoryTcpWork";
            emit signal_destoryTcpWork();
        }
    }

    //析构meidiadateprocess
    if(m_dataProcess != nullptr)
    {

        m_dataProcess->slot_stopRead();
        m_threadReadDate->quit();

        if(m_threadReadDate->wait(3000)){

            qDebug()<<"delete meidiadateprocess read Thread succ";
        }else
            qDebug()<<"delete meidiadateprocess read Thread timeout";
    }


    if(recordThread != nullptr)
        recordThread->quit();


    if(playAudioThread != nullptr)
        playAudioThread->quit();

    if(pffmpegCodec != nullptr)
        pffmpegCodec->deleteLater();

    if(p2pWorker != nullptr){

        p2pWorker->stopWoring();

        m_p2pThread->quit();

    }
}

