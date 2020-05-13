#ifndef FANSINFO_H
#define FANSINFO_H

#include <QString>
#include <QList>
#include <QMap>

class FansInfo
{
public:
    FansInfo();
    FansInfo(const QString &id, const QString &nickname,
             const QString &tele);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setNickName(const QString &nickname);
    void setTele(const QString &tele);

    
    const QString &getID() const;
    const QString &getNickName() const;
    const QString &getTele() const;

private:
    QString m_id;
    QString m_nickname;
    QString m_tele;

    
};
typedef QList<FansInfo> FansInfoList;
typedef QMap<QString, FansInfoList::iterator> FansInfoMap;

#endif // FANSINFO_H
