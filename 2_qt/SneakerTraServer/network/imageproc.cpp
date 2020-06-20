#include "imageproc.h"

ImageProc::ImageProc(QObject *parent) :
    QThread(parent)
{
    m_isExit = false;
}
void ImageProc::exitTread(void)
{
    m_isExit = true;
}

void ImageProc::run()
{
    while(!m_isExit)
    {
//        if(!GlobalVars::g_msgQueue.isEmpty())
//        {
//            QString msg = GlobalVars::g_msgQueue.dequeue();
//            parseUserAsk(msg);
//        }
        msleep(2);
        //sleep是秒级别，msleep是毫秒，usleep是微妙
        //Sleep is to give others thread a chance to run
        //Forces the current thread to sleep for msecs milliseconds
    }
}
