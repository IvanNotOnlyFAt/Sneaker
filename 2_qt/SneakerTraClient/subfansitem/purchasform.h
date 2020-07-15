#ifndef PURCHASFORM_H
#define PURCHASFORM_H

#include <QWidget>
#include "merchinfo.h"
namespace Ui {
class PurchasForm;
}

class PurchasForm : public QWidget
{
    Q_OBJECT

public:
    explicit PurchasForm(MerchInfo info, QWidget *parent = 0);
    ~PurchasForm();

private slots:


    void on_pb_addTerolly_clicked();

    void on_pb_purchase_clicked();

private:
    Ui::PurchasForm *ui;
    MerchInfo m_merchInfo;
};

#endif // PURCHASFORM_H
