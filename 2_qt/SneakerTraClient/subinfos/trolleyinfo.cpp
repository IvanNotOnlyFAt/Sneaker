#include "trolleyinfo.h"
#include "globalvars.h"
#include <QDebug>

TrolleyInfo::TrolleyInfo()
{
    m_id.clear();
    m_fans_id.clear();
    m_merch_id.clear();
    m_merchnum.clear();
	m_electsize.clear();
	m_date.clear();
}
TrolleyInfo::TrolleyInfo(const QString &id, const QString &fans_id,const QString &merch_id, const QString &merchnum, 
          const QString &electsize,const QString &date = GlobalVars::g_StrTime)
{
    m_id = id;
    m_fans_id = fans_id;
    m_merch_id = merch_id;
    m_merchnum = merchnum;
	m_electsize = electsize;
	m_date = date;
}

void TrolleyInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "Fans_ID: " << m_fans_id;
    qDebug() << "Merch_ID: " << m_merch_id;
    qDebug() << "MerchNum: " << m_merchnum;
	qDebug() << "SelectSize: " << m_electsize;
	qDebug() << "Date: " << m_date;
}

void TrolleyInfo::setID(const QString &id)
{
    m_id = id;
}
void TrolleyInfo::setFans_ID(const QString &fans_id)
{
    m_fans_id = fans_id;
}
void TrolleyInfo::setMerch_ID(const QString &merch_id)
{
    m_merch_id = merch_id;
}
void TrolleyInfo::setMerchNum(const QString &merchnum)
{
    m_merchnum = merchnum;
}
void TrolleyInfo::setSelectSize(const QString &electsize)
{
	m_electsize = electsize;
}
void TrolleyInfo::setDate(const QString &date)
{
	m_date = date;
}
const QString &TrolleyInfo::getID() const
{
    return m_id;
}
const QString &TrolleyInfo::getFans_ID() const
{
    return m_fans_id;
}
const QString &TrolleyInfo::getMerch_ID() const
{
    return m_merch_id;
}
const QString &TrolleyInfo::getMerchNum() const
{
    return m_merchnum;
}
const QString &TrolleyInfo::getSelectSize() const
{
	return m_electsize;
}
const QString &TrolleyInfo::getDate() const
{
	return m_date;
}
