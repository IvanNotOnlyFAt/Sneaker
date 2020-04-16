#include "storeinfo.h"
#include "globalvars.h"
#include <QDebug>

StoreInfo::StoreInfo()
{
    m_id.clear();
    m_tra_id.clear();
    m_name.clear();
    m_merchtype.clear();
	m_localtion.clear();
	m_logo.clear();
	m_date.clear();
}
StoreInfo::StoreInfo(const QString &id, const QString &tra_id,const QString &name, const QString &merchtype, 
          const QString &localtion, const QString &logo,const QString &date = GlobalVars::g_StrTime)
{
    m_id = id;
    m_tra_id = tra_id;
    m_name = name;
    m_merchtype = merchtype;
	m_localtion = localtion;
	m_logo = logo;
	m_date = date;
}

void StoreInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "Tra_ID: " << m_tra_id;
    qDebug() << "Name: " << m_name;
    qDebug() << "MerType: " << m_merchtype;
	qDebug() << "Location: " << m_localtion;
	qDebug() << "Logo: " << m_logo;
	qDebug() << "Date: " << m_date;
}

void StoreInfo::setID(const QString &id)
{
    m_id = id;
}
void StoreInfo::setTra_ID(const QString &tra_id)
{
    m_tra_id = tra_id;
}
void StoreInfo::setName(const QString &name)
{
    m_name = name;
}
void StoreInfo::setMerType(const QString &merchtype)
{
    m_merchtype = merchtype;
}
void StoreInfo::setLocation(const QString &localtion)
{
	m_localtion = localtion;
}
void StoreInfo::setLogo(const QString &logo)
{
	m_logo = logo;
}
void StoreInfo::setDate(const QString &date)
{
	m_date = date;
}
const QString &StoreInfo::getID() const
{
    return m_id;
}
const QString &StoreInfo::getTra_ID() const
{
    return m_tra_id;
}
const QString &StoreInfo::getName() const
{
    return m_name;
}
const QString &StoreInfo::getMerType() const
{
    return m_merchtype;
}
const QString &StoreInfo::getLocation() const
{
	return m_localtion;
}
const QString &StoreInfo::getLogo() const
{
	return m_logo;
}
const QString &StoreInfo::getDate() const
{
	return m_date;
}
