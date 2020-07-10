#include "filepathcontents.h"

#include <QDebug>
QString FilePathContents::p_logoRelativePath = QString("./storelogos/");

QString FilePathContents::getStoreLogoPath(QString id)
{
    QString msg = p_logoRelativePath + QString("%1.jpg");
    return msg.arg(id);
}
QString FilePathContents::p_hostPhotoRelativePath = QString("./merchphoto/merchhostphoto/");

QString FilePathContents::getMerchPhotoPath(QString id)
{
    QString msg = p_hostPhotoRelativePath + QString("%1.jpg");
    return msg.arg(id);
}
