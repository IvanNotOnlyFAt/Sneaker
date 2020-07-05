#ifndef FILEPATHCONTENTS_H
#define FILEPATHCONTENTS_H

#include <QString>
class FilePathContents
{
public:
    static QString p_logoRelativePath;
    static QString getStoreLogoPath(QString id);
    static QString p_hostPhotoRelativePath;
    static QString getMerchPhotoPath(QString id);

};

#endif // FILEPATHCONTENTS_H
