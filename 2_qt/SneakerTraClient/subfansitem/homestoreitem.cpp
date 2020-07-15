#include "homestoreitem.h"
#include "ui_homestoreitem.h"

#include "globalvars.h"

#include <QDebug>
#include <Qimage>
#include <QSize>
HomeStoreItem::HomeStoreItem(StoreInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomeStoreItem)
{
    ui->setupUi(this);
    m_storeInfo = info;
    ui->pb_store->setText(info.getName());
    setStoreLogo();
}

HomeStoreItem::~HomeStoreItem()
{
    delete ui;
}

void HomeStoreItem::setStoreLogo()
{
    QImage img = GlobalVars::g_homeStoreLogoMap[m_storeInfo.getID()];
    QSize lbsize = ui->lb_logo->size();
    QImage m_tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->lb_logo->setPixmap(QPixmap::fromImage(m_tempimg));
}
