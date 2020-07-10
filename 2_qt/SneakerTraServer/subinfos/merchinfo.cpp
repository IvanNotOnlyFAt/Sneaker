#include "merchinfo.h"

#include <QDebug>

MerchInfo::MerchInfo()
{
    m_id.clear();
    m_store_id.clear();
    m_name.clear();
    m_price.clear();
    m_stock.clear();
	m_merch_size.clear();
	m_ad_photo.clear();
	m_descri.clear();
}
MerchInfo::MerchInfo(const QString &id, const QString &store_id,
             const QString &name, const QString &price,
             const QString &stock, const QString &merch_size,
             const QString &ad_photo,const QString &descri)
{
    m_id = id;
    m_store_id = store_id;
    m_name = name;
    m_price = price;
    m_stock = stock;
	m_merch_size = merch_size;
	m_ad_photo = ad_photo;
	m_descri = descri;
}

void MerchInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "Store_ID: " << m_store_id;
    qDebug() << "Name: " << m_name;
    qDebug() << "Price: " << m_price;
    qDebug() << "Stock" << m_stock;
	qDebug() << "MerchSize: " << m_merch_size;
	qDebug() << "ADPhoto: " << m_ad_photo;
	qDebug() << "Descri: " << m_descri;
}

void MerchInfo::setID(const QString &id)
{
    m_id = id;
}
void MerchInfo::setStore_ID(const QString &store_id)
{
    m_store_id = store_id;
}
void MerchInfo::setName(const QString &name)
{
    m_name = name;
}
void MerchInfo::setPrice(const QString &price)
{
    m_price = price;
}
void MerchInfo::setStock(const QString &stock)
{
    m_stock = stock;
}
void MerchInfo::setMerchSize(const QString &merch_size)
{
	m_merch_size = merch_size;
}
void MerchInfo::setADPhoto(const QString &ad_photo)
{
	m_ad_photo = ad_photo;
}
void MerchInfo::setDescri(const QString &descri)
{
	m_descri = descri;
}
const QString &MerchInfo::getID() const
{
    return m_id;
}
const QString &MerchInfo::getStore_ID() const
{
    return m_store_id;
}
const QString &MerchInfo::getName() const
{
    return m_name;
}
const QString &MerchInfo::getPrice() const
{
    return m_price;
}
const QString &MerchInfo::getStock() const
{
    return m_stock;
}
const QString &MerchInfo::getMerchSize() const
{
	return m_merch_size;
}
const QString &MerchInfo::getADPhoto() const
{
	return m_ad_photo;
}
const QString &MerchInfo::getDescri() const
{
	return m_descri;
}
