#ifndef TRADERINFO_H
#define TRADERINFO_H

#include <QString>
#include <QList>
#include <QMap>

class TraderInfo
{
public:
    TraderInfo();
    TraderInfo(const QString &id, const QString &name,
             const QString &tele, const QString &id_num);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setName(const QString &name);
    void setTele(const QString &tele);
    void setID_Num(const QString &id_num);
    
    const QString &getID() const;
    const QString &getName() const;
    const QString &getTele() const;
    const QString &getID_Num() const;
private:
    QString m_id;
    QString m_name;
    QString m_tele;
    QString m_id_num;
    
};
typedef QList<TraderInfo> TraderInfoList;
typedef QMap<QString, TraderInfoList::iterator> TraderInfoMap;

#endif // TRADERINFO_H
