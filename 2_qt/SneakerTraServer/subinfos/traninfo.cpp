#include "traninfo.h"
#include "globalvars.h"
#include <QDebug>

TranInfo::TranInfo()
{
    m_id.clear();
    m_tro_id.clear();
    m_pricesum.clear();
    m_dtime.clear();
}
TranInfo::TranInfo(const QString &id, const QString &tro_id,
          const QString &pricesum, const QString &dtime = GlobalVars::g_StrDTime)
{
    m_id = id;
    m_tro_id = tro_id;
    m_pricesum = pricesum;
    m_dtime = dtime;
}

void TranInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "Tro_ID: " << m_tro_id;
    qDebug() << "PriceSum: " << m_pricesum;
    qDebug() << "DTime: " << m_dtime;
}

void TranInfo::setID(const QString &id)
{
    m_id = id;
}
void TranInfo::setTro_ID(const QString &tro_id)
{
    m_tro_id = tro_id;
}
void TranInfo::setPriceSum(const QString &pricesum)
{
    m_pricesum = pricesum;
}
void TranInfo::setDTime(const QString &dtime)
{
    m_dtime = dtime;
}

const QString &TranInfo::getID() const
{
    return m_id;
}
const QString &TranInfo::getTro_ID() const
{
    return m_tro_id;
}
const QString &TranInfo::getPriceSum() const
{
    return m_pricesum;
}
const QString &TranInfo::getDTime() const
{
    return m_dtime;
}
