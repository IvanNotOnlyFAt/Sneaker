#include "applymerchform.h"
#include "ui_applymerchform.h"

#include "globalvars.h"

#include <QDebug>
#include <QFileDialog>
#include <QSize>
#include <QMessageBox>
#include <QStringBuilder>

ApplyMerchForm::ApplyMerchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyMerchForm)
{
    ui->setupUi(this);
    m_isCloseWidget = true;
    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);//禁止窗体拉伸
    setWindowFlags( Qt::Dialog ); //Qt::Dialog告诉Qt这个窗口是要被当做对话框对待的
    setWindowModality(Qt::WindowModal); //Qt::WindowModal：该窗口是一个当以层次的模态窗口，会阻塞它的父窗口、祖父窗口和各个兄弟窗口接受输入信息；
    setAttribute (Qt::WA_DeleteOnClose);//Attribute属性，Qt::WA_DeleteOnClose关闭时销毁

    ui->pb_modify->setEnabled(false);
    ui->pb_addmerch->setEnabled(true);

    //初始化cb_storeid
    QStringList list;
    for(StoreInfoList::iterator it = GlobalVars::g_storeInfoList->begin();
        it != GlobalVars::g_storeInfoList->end(); it++)
    {

        QString storeid = it->getID();
        list.append(storeid);
    }
    ui->cb_storeid->addItems(list);

}

ApplyMerchForm::ApplyMerchForm(MerchInfo info, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplyMerchForm)
{
    ui->setupUi(this);
    m_isCloseWidget = true;
    setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);//禁止窗体拉伸
    setWindowFlags( Qt::Dialog ); //Qt::Dialog告诉Qt这个窗口是要被当做对话框对待的
    setWindowModality(Qt::WindowModal); //Qt::WindowModal：该窗口是一个当以层次的模态窗口，会阻塞它的父窗口、祖父窗口和各个兄弟窗口接受输入信息；
    setAttribute (Qt::WA_DeleteOnClose);//Attribute属性，Qt::WA_DeleteOnClose关闭时销毁

    ui->pb_modify->setEnabled(true);
    ui->pb_addmerch->setEnabled(false);

    ui->le_merchid->setText(info.getID());
    ui->le_merchname->setText(info.getName());
    ui->le_merchprice->setText(info.getPrice());
    ui->le_merchstock->setText(info.getStock());
    ui->le_adnum->setText(info.getADPhoto());


    QImage img = GlobalVars::g_merchHostPhotoMap[info.getID()];
    QSize lbsize = ui->lb_hostphoto->size();
    QImage tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->lb_hostphoto->setPixmap(QPixmap::fromImage(tempimg));

    ui->textEdit->setText(info.getDescri());
    //初始化cb_storeid
    QStringList list;
    QString storeid = info.getStore_ID();
    list.append(storeid);
    ui->cb_storeid->addItems(list);
    setRBSize(info.getMerchSize());

}

ApplyMerchForm::~ApplyMerchForm()
{
    delete ui;
}

void ApplyMerchForm::applyOrModifyResult(bool res, QString msg)
{
    m_isCloseWidget = true;
    /////////////////////对话窗口创建///////////////////
    QMessageBox msgResult;
    msgResult.setMinimumSize(222,152);
    msgResult.setMaximumSize(222,152);

    QPushButton *okbtn = new QPushButton(QString("确定"));
    QPushButton *cancelbtn = new QPushButton(QString("取消"));
    msgResult.addButton(okbtn, QMessageBox::AcceptRole);
    msgResult.addButton(cancelbtn, QMessageBox::RejectRole);
    if(res)
    {
        /////////////界面修改为修改界面//////////////////
        ui->le_merchid->setText(msg);
        ui->pb_modify->setEnabled(true);
        ui->pb_addmerch->setEnabled(false);

        msgResult.setText("成功");
        msgResult.setInformativeText("申请成功，是否关闭");
        msgResult.setIcon(QMessageBox::Information);

    }else
    {
        qDebug() << msg;
        msgResult.setText("失败");
        msgResult.setInformativeText(msg);
        msgResult.setIcon(QMessageBox::Critical);
    }
    /////////////////////检测按键///////////////////
    msgResult.exec();
    if (msgResult.clickedButton() == okbtn)
    {
          this->close();
    }
}

void ApplyMerchForm::closeEvent(QCloseEvent *event)
{
    if(!m_isCloseWidget)
    {
        QMessageBox::information(this, tr("提示"), tr("等待申请或更改结果"), tr("确定"), tr("取消"), 0, 1);
        event->ignore();
    }else
    {
        event->accept();
    }
}

void ApplyMerchForm::on_pb_modify_clicked()
{
     qDebug() << "ApplyMerchForm::on_pb_modify_clicked()" << "功能未完成..." ;
}

void ApplyMerchForm::on_pb_addmerch_clicked()
{
     qDebug() << "ApplyMerchForm::on_pb_addmerch_clicked()"  ;
     if(!ui->le_logopath->text().isEmpty())
     {
         if(!ui->le_merchname->text().isEmpty())
         {
             if(!ui->le_merchprice->text().isEmpty())
             {
                 if(!ui->le_merchsize->text().isEmpty())
                 {
                     if(!ui->le_merchstock->text().isEmpty())
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
                         ///阻塞执行
                         int res = msgApply.exec();
                         if(res == QMessageBox::Ok)
                         {
                             m_isCloseWidget = false;

                             QString command = QString(CMD_AddInfoImage_A) % QString(CMD_TraderMerch_M)
                                     % QString("#") % QString(GlobalVars::g_localTrader->getID())
                                     % QString("|") % QString(ui->cb_storeid->currentText())
                                     % QString("|") % QString(ui->le_merchname->text())
                                     % QString("|") % QString(ui->le_merchprice->text())
                                     % QString("|") % QString(ui->le_merchstock->text())
                                     % QString("|") % QString(ui->le_merchsize->text())
                                     % QString("|") % QString(ui->le_adnum->text())
                                     % QString("|") % QString(ui->textEdit->toPlainText());//以常文本的形势返回
                             QByteArray buffer;
                             QDataStream ds_image(&buffer,QIODevice::WriteOnly);
                             ds_image << m_tempimg;
                             emit signalApplyAddMerch(command, buffer);
                             qDebug() << "Commit the Merch Apply !!";
                         /*******************************************************/
                         }
                     }else
                     {
                         QMessageBox::warning(this,"警告","库存不能为空");
                     }
                 }else
                 {
                     QMessageBox::warning(this,"警告","鞋码不能为空");
                 }
             }else
             {
                 QMessageBox::warning(this,"警告","价格不能为空");
             }
         }else
         {
             QMessageBox::warning(this,"警告","商品名不能为空");
         }
     }else
     {
         QMessageBox::warning(this,"警告","图片不能为空");
     }

}

void ApplyMerchForm::on_pb_selectlogo_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Select Image File"),
                          "./", tr("Images (*.png *jpg *.gif)"));
    QImage img(fileName);
    QSize lbsize = ui->lb_hostphoto->size();
    m_tempimg = img.scaled(lbsize,Qt::IgnoreAspectRatio);
    ui->lb_hostphoto->setPixmap(QPixmap::fromImage(m_tempimg));

    ui->le_logopath->setText(fileName);
}

void ApplyMerchForm::setRBSize(QString msg)
{
    QStringList list = msg.split(",");
    for(int i = 0; i < list.length(); i++)
    {
       QString strSize = list[i];
       int size = strSize.toInt();
       switch (size) {
       case 34: on_rb_34_clicked(true); ui->rb_34->setChecked(true); break;
       case 35: on_rb_35_clicked(true); ui->rb_35->setChecked(true);break;
       case 36: on_rb_36_clicked(true); ui->rb_36->setChecked(true);break;
       case 37: on_rb_37_clicked(true); ui->rb_37->setChecked(true);break;
       case 38: on_rb_38_clicked(true); ui->rb_38->setChecked(true);break;
       case 39: on_rb_39_clicked(true); ui->rb_39->setChecked(true);break;
       case 40: on_rb_40_clicked(true); ui->rb_40->setChecked(true);break;
       case 41: on_rb_41_clicked(true); ui->rb_41->setChecked(true);break;
       case 42: on_rb_42_clicked(true); ui->rb_42->setChecked(true);break;
       case 43: on_rb_43_clicked(true); ui->rb_43->setChecked(true);break;
       case 44: on_rb_44_clicked(true); ui->rb_44->setChecked(true);break;
       case 45: on_rb_45_clicked(true); ui->rb_45->setChecked(true);break;
       case 46: on_rb_46_clicked(true); ui->rb_46->setChecked(true);break;
       case 47: on_rb_47_clicked(true); ui->rb_47->setChecked(true);break;
       case 48: on_rb_48_clicked(true); ui->rb_48->setChecked(true);break;
       default:
           break;
       }
    }
}

void ApplyMerchForm::updateSize()
{
    ui->le_merchsize->clear();
    ui->le_merchsize->setText(m_sizemsg);
}
void ApplyMerchForm::on_rb_34_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("34,");
    }else
    {
        m_sizemsg.remove("34,");
    }
    updateSize();
}
void ApplyMerchForm::on_rb_35_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("35,");
    }else
    {
        m_sizemsg.remove("35,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_36_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("36,");
    }else
    {
        m_sizemsg.remove("36,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_37_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("37,");
    }else
    {
        m_sizemsg.remove("37,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_38_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("38,");
    }else
    {
        m_sizemsg.remove("38,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_39_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("39,");
    }else
    {
        m_sizemsg.remove("39,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_40_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("40,");
    }else
    {
        m_sizemsg.remove("40,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_41_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("41,");
    }else
    {
        m_sizemsg.remove("41,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_42_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("42,");
    }else
    {
        m_sizemsg.remove("42,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_43_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("43,");
    }else
    {
        m_sizemsg.remove("43,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_44_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("44,");
    }else
    {
        m_sizemsg.remove("44,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_45_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("45,");
    }else
    {
        m_sizemsg.remove("45,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_46_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("46,");
    }else
    {
        m_sizemsg.remove("46,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_47_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("47,");
    }else
    {
        m_sizemsg.remove("47,");
    }
    updateSize();
}

void ApplyMerchForm::on_rb_48_clicked(bool checked)
{
    if(checked)
    {
        m_sizemsg.append("48,");
    }else
    {
        m_sizemsg.remove("48,");
    }
    updateSize();
}
