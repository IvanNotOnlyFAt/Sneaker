#ifndef APPLYMERCHFORM_H
#define APPLYMERCHFORM_H

#include "merchinfo.h"

#include <QWidget>
#include <QDialog>
#include <QImage>
#include <QCloseEvent>
#include <QMouseEvent>
#include <QByteArray>
namespace Ui {
class ApplyMerchForm;
}

class ApplyMerchForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyMerchForm(QWidget *parent = 0);
    ApplyMerchForm( MerchInfo info, QWidget *parent = 0);
    ~ApplyMerchForm();
    void applyOrModifyResult(bool res, QString msg);
signals:
    void signalApplyAddMerch(QString msg,QByteArray image);
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void on_pb_modify_clicked();

    void on_pb_addmerch_clicked();

    void on_pb_selectlogo_clicked();

    void setRBSize(QString msg);
//    void clearRBSize(QString msg);


    void on_rb_34_clicked(bool checked);

    void on_rb_35_clicked(bool checked);

    void on_rb_36_clicked(bool checked);

    void on_rb_37_clicked(bool checked);

    void on_rb_38_clicked(bool checked);

    void on_rb_39_clicked(bool checked);

    void on_rb_40_clicked(bool checked);

    void on_rb_41_clicked(bool checked);

    void on_rb_42_clicked(bool checked);

    void on_rb_43_clicked(bool checked);

    void on_rb_44_clicked(bool checked);

    void on_rb_45_clicked(bool checked);

    void on_rb_46_clicked(bool checked);

    void on_rb_47_clicked(bool checked);

    void on_rb_48_clicked(bool checked);

private:
    Ui::ApplyMerchForm *ui;

    void updateSize();

    bool m_isCloseWidget;   
    QImage m_tempimg;
    QString m_sizemsg;


};

#endif // APPLYMERCHFORM_H
