#include "traderinfo.h"
#include <QDebug>

TraderInfo::TraderInfo()
{
    m_id.clear();
    m_name.clear();
    m_tele.clear();
    m_id_num.clear();
}
TraderInfo::TraderInfo(const QString &id, const QString &name,
					   const QString &tele, const QString &id_num)
{
    m_id = id;
    m_name = name;
    m_tele = tele;
    m_id_num = id_num;
}

void TraderInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "Name: " << m_name;
    qDebug() << "Tele: " << m_tele;
    qDebug() << "ID_Num: " << m_id_num;
}

void TraderInfo::setID(const QString &id)
{
    m_id = id;
}
void TraderInfo::setName(const QString &name)
{
    m_name = name;
}
void TraderInfo::setTele(const QString &tele)
{
    m_tele = tele;
}
void TraderInfo::setID_Num(const QString &id_num)
{
    m_id_num = id_num;
}

const QString &TraderInfo::getID() const
{
    return m_id;
}
const QString &TraderInfo::getName() const
{
    return m_name;
}
const QString &TraderInfo::getTele() const
{
    return m_tele;
}
const QString &TraderInfo::getID_Num() const
{
    return m_id_num;
}
