#ifndef TRANINFO_H
#define TRANINFO_H

#include <QString>
#include <QList>
#include <QMap>

class TranInfo
{
public:
    TranInfo();
    TranInfo(const QString &id, const QString &tro_id,
             const QString &pricesum, const QString &dtime);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setTro_ID(const QString &tro_id);
    void setPriceSum(const QString &pricesum);
    void setDTime(const QString &dtime);
    
    const QString &getID() const;
    const QString &getTro_ID() const;
    const QString &getPriceSum() const;
    const QString &getDTime() const;
private:
    QString m_id;
    QString m_tro_id;
    QString m_pricesum;
    QString m_dtime;
    
};
typedef QList<TranInfo> TranInfoList;
typedef QMap<QString, TranInfoList::iterator> TranInfoMap;

#endif // TRANINFO_H
