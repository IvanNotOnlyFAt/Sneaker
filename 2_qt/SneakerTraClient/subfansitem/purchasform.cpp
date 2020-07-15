#include "purchasform.h"
#include "ui_purchasform.h"

#include "globalvars.h"
#include <QDebug>
#include <QImage>
#include <QSize>
PurchasForm::PurchasForm(MerchInfo info,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PurchasForm)
{
    ui->setupUi(this);

    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);//禁止窗体拉伸
    setWindowFlags( Qt::Dialog ); //Qt::Dialog告诉Qt这个窗口是要被当做对话框对待的
    setWindowModality(Qt::WindowModal); //Qt::WindowModal：该窗口是一个当以层次的模态窗口，会阻塞它的父窗口、祖父窗口和各个兄弟窗口接受输入信息；
    setAttribute (Qt::WA_DeleteOnClose);//Attribute属性，Qt::WA_DeleteOnClose关闭时销毁

    m_merchInfo = info;
    ui->le_merchname->setText(m_merchInfo.getName());
    ui->le_stock->setText(m_merchInfo.getStock());
    ui->le_storeID->setText(m_merchInfo.getStore_ID());
    ui->le_storename->setText(GlobalVars::g_homeStoreInfoMap[m_merchInfo.getStore_ID()].getName());
    QString size = m_merchInfo.getMerchSize();
    QStringList sizelist = size.split(",");
    sizelist.removeLast();
    ui->cb_size->addItems(sizelist);
    ui->te_descri->setText(m_merchInfo.getDescri());
    ui->lcdNumber_price->display(m_merchInfo.getPrice().toInt());

    QImage img = GlobalVars::g_homeMerchHostMap[m_merchInfo.getID()];
    QSize lbsize = ui->ib_hostPhoto->size();
    QImage m_tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->ib_hostPhoto->setPixmap(QPixmap::fromImage(m_tempimg));

}

PurchasForm::~PurchasForm()
{
    delete ui;
}



void PurchasForm::on_pb_addTerolly_clicked()
{
    qDebug() << "PurchasForm::on_pb_addTerolly_clicked()";

}

void PurchasForm::on_pb_purchase_clicked()
{
    qDebug() << "PurchasForm::on_pb_purchase_clicked()";
}
