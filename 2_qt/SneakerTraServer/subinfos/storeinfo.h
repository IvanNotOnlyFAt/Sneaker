#ifndef STOREINFO_H
#define STOREINFO_H
#include "globalvars.h"

#include <QString>
#include <QList>
#include <QMap>

class StoreInfo
{
public:
    StoreInfo();
    StoreInfo(const QString &id, const QString &tra_id,
             const QString &name, const QString &merchtype,
			 const QString &localtion, const QString &logo,
             const QString &date);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setTra_ID(const QString &tra_id);
    void setName(const QString &name);
    void setMerType(const QString &merchtype);
	void setLocation(const QString &localtion);
	void setLogo(const QString &logo);
	void setDate(const QString &date);
    
    const QString &getID() const;
    const QString &getTra_ID() const;
    const QString &getName() const;
    const QString &getMerType() const;
	const QString &getLocation() const;
	const QString &getLogo() const;
	const QString &getDate() const;
private:
    QString m_id;
    QString m_tra_id;
    QString m_name;
    QString m_merchtype;
	QString m_localtion;
	QString m_logo;
	QString m_date;
	
    
};
typedef QList<StoreInfo> StoreInfoList;
typedef QMap<QString, StoreInfoList::iterator> StoreInfoMap;

#endif // STOREINFO_H
