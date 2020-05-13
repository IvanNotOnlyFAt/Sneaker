#ifndef TROLLEYINFO_H
#define TROLLEYINFO_H

#include <QString>
#include <QList>
#include <QMap>

class TrolleyInfo
{
public:
    TrolleyInfo();
    TrolleyInfo(const QString &id, const QString &fans_id,
             const QString &merch_id, const QString &merchnum,
			 const QString &electsize,const QString &date);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setFans_ID(const QString &fans_id);
    void setMerch_ID(const QString &merch_id);
    void setMerchNum(const QString &merchnum);
	void setSelectSize(const QString &electsize);
	void setDate(const QString &date);
    
    const QString &getID() const;
    const QString &getFans_ID() const;
    const QString &getMerch_ID() const;
    const QString &getMerchNum() const;
	const QString &getSelectSize() const;
	const QString &getDate() const;
private:
    QString m_id;
    QString m_fans_id;
    QString m_merch_id;
    QString m_merchnum;
	QString m_electsize;
	QString m_date;
	
    
};
typedef QList<TrolleyInfo> TrolleyInfoList;
typedef QMap<QString, TrolleyInfoList::iterator> TrolleyInfoMap;

#endif // TROLLEYINFO_H
