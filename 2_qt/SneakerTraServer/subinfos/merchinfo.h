#ifndef MERCHINFO_H
#define MERCHINFO_H


#include <QString>
#include <QList>
#include <QMap>

class MerchInfo
{
public:
    MerchInfo();
    MerchInfo(const QString &id, const QString &store_id,
             const QString &name, const QString &price,
             const QString &stock, const QString &merch_size,
              const QString &ad_photo,const QString &descri);
    
    void display(void) const;
    
    void setID(const QString &id);
    void setStore_ID(const QString &store_id);
    void setName(const QString &name);
    void setPrice(const QString &price);
    void setStock(const QString &stock);
	void setMerchSize(const QString &merch_size);
	void setADPhoto(const QString &ad_photo);
	void setDescri(const QString &descri);
    
    const QString &getID() const;
    const QString &getStore_ID() const;
    const QString &getName() const;
    const QString &getPrice() const;
    const QString &getStock() const;
	const QString &getMerchSize() const;
	const QString &getADPhoto() const;
	const QString &getDescri() const;
private:
    QString m_id;
    QString m_store_id;
    QString m_name;
    QString m_price;
    QString m_stock;
	QString m_merch_size;
	QString m_ad_photo;
	QString m_descri;
	
    
};
typedef QList<MerchInfo> MerchInfoList;
typedef QMap<QString, MerchInfoList::iterator> MerchInfoMap;

#endif // MERCHINFO_H
