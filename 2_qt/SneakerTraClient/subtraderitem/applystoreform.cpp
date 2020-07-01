#include "applystoreform.h"
#include "ui_applystoreform.h"

#include <QDebug>
#include <QFileDialog>
#include <QSize>
#include <QMessageBox>
ApplyStoreForm::ApplyStoreForm(QString traid, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyStoreForm)
{
    ui->setupUi(this);

    m_isCloseWidget = true;
    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);//禁止窗体拉伸
    setWindowFlags( Qt::Dialog ); //Qt::Dialog告诉Qt这个窗口是要被当做对话框对待的
    setWindowModality(Qt::WindowModal); //Qt::WindowModal：该窗口是一个当以层次的模态窗口，会阻塞它的父窗口、祖父窗口和各个兄弟窗口接受输入信息；
    setAttribute (Qt::WA_DeleteOnClose);//Attribute属性，Qt::WA_DeleteOnClose关闭时销毁

    ui->pb_modify->setEnabled(false);
    ui->pb_applystore->setEnabled(true);
    ui->le_traderid->setText(traid);
    ui->le_redate->setText(GlobalVars::g_StrTime);
}

ApplyStoreForm::ApplyStoreForm(StoreInfo info, QWidget *parent):
    QWidget(parent),
    ui(new Ui::ApplyStoreForm)
{
    ui->setupUi(this);

    m_isCloseWidget = true;
    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);//禁止窗体拉伸
    setWindowFlags( Qt::Dialog ); //Qt::Dialog告诉Qt这个窗口是要被当做对话框对待的
    setWindowModality(Qt::WindowModal); //Qt::WindowModal：该窗口是一个当以层次的模态窗口，会阻塞它的父窗口、祖父窗口和各个兄弟窗口接受输入信息；
    setAttribute (Qt::WA_DeleteOnClose);//Attribute属性，Qt::WA_DeleteOnClose关闭时销毁

    ui->pb_modify->setEnabled(true);
    ui->pb_applystore->setEnabled(false);
    ui->pb_selectlogo->setEnabled(false);


    ui->le_storeid->setText(info.getID());
    ui->le_storename->setText(info.getName());
    ui->le_traderid->setText(info.getTra_ID());
    ui->le_storetype->setText(info.getMerType());
    ui->le_storelocation->setText(info.getLocation());
    ui->le_storelogo->setText(info.getLogo());
    ui->le_redate->setText(info.getDate());
    ui->lb_logophoto->setPixmap(QPixmap::fromImage(GlobalVars::g_storeLogoImageMap[info.getID()]));


}

ApplyStoreForm::~ApplyStoreForm()
{
    delete ui;
}

//void ApplyStoreForm::mousePressEvent(QMouseEvent *e)
//{

//    setAttribute(Qt::WA_NoMouseReplay);
//    QWidget::mousePressEvent(e);
//}

void ApplyStoreForm::closeEvent(QCloseEvent *event)
{

    if(!m_isCloseWidget)
    {
        QMessageBox::information(this, tr("提示"), tr("等待申请或更改结果"), tr("确定"), tr("取消"), 0, 1);
        event->ignore();
    }else
    {
        event->accept();
        qDebug() << "closeEvent ";
    }

}

void ApplyStoreForm::on_pb_selectlogo_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Image File"),
                          "./", tr("Images (*.png *jpg *.gif)"));
    QImage img(fileName);
    QSize lbsize = ui->lb_logophoto->size();

    m_tempimg = img.scaled(lbsize,Qt::KeepAspectRatio);
    ui->lb_logophoto->setPixmap(QPixmap::fromImage(m_tempimg));

    ui->le_logopath->setText(fileName);

}

void ApplyStoreForm::on_pb_modify_clicked()
{
    qDebug() << "ApplyStoreForm::on_pb_modify_clicked()" << "功能未完成..." ;
}

void ApplyStoreForm::on_pb_applystore_clicked()
{
    qDebug() << "ApplyStoreForm::on_pb_applystore_clicked()";

    if(!ui->le_logopath->text().isEmpty())
    {
        if(!ui->le_storename->text().isEmpty())
        {
            if(!ui->le_storetype->text().isEmpty())
            {
                if(!ui->le_storelocation->text().isEmpty())
                {
                    /****************设置确定申请提示********************/
                    QMessageBox msgApply;
                    msgApply.setText("提示");
                    msgApply.setInformativeText("信息填写无误确实提交吗?");
                    msgApply.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
                    msgApply.setDefaultButton(QMessageBox::Cancel);
                    msgApply.setIcon(QMessageBox::Question);
                    ///解决出现的窗体过小不合适提示问题
                    msgApply.setMinimumSize(222,152);
                    msgApply.setMaximumSize(222,152);
                    int res = msgApply.exec();
                    if(res == QMessageBox::Ok)
                    {
                        m_isCloseWidget = false;
                        qDebug() << "提交申请";
                        StoreInfo addinfo;
//                        addinfo.setID(ui->le_storeid->text());


                        addinfo.setTra_ID(ui->le_traderid->text());
                        addinfo.setName(ui->le_storename->text());
                        addinfo.setMerType(ui->le_storetype->text());
                        addinfo.setLocation(ui->le_storelocation->text());
                        addinfo.setDate(ui->le_redate->text());
                        addinfo.setLogo(ui->le_storelogo->text());
//                        QString command = QString(CMD_ApplyImage_P) % QString(CMD_TraderStore_S)
//                                % QString("#!|") % QString(traid);


                    }
                    /************************************/
                }else
                {
                    QMessageBox::warning(this,"警告","注册地不能为空");
                }
            }else
            {
                QMessageBox::warning(this,"警告","经销类型不能为空");
            }
        }else
        {
            QMessageBox::warning(this,"警告","店名不能为空");
        }
    }else
    {
        QMessageBox::warning(this,"警告","图片不能为空");
    }

}
