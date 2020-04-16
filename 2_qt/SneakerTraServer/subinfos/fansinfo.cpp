#include "fansinfo.h"
#include <QDebug>

FansInfo::FansInfo()
{
    m_id.clear();
    m_nickname.clear();
    m_tele.clear();
}
FansInfo::FansInfo(const QString &id, const QString &nickname,
          const QString &tele)
{
    m_id = id;
    m_nickname = nickname;
    m_tele = tele;
}

void FansInfo::display(void) const
{
    qDebug() << "ID" <<m_id;
    qDebug() << "NickName: " << m_nickname;
    qDebug() << "Tele: " << m_tele;

}

void FansInfo::setID(const QString &id)
{
    m_id = id;
}
void FansInfo::setNickName(const QString &nickname)
{
    m_nickname = nickname;
}
void FansInfo::setTele(const QString &tele)
{
    m_tele = tele;
}


const QString &FansInfo::getID() const
{
    return m_id;
}
const QString &FansInfo::getNickName() const
{
    return m_nickname;
}
const QString &FansInfo::getTele() const
{
    return m_tele;
}
