#ifndef HOMEMERCHITEM_H
#define HOMEMERCHITEM_H

#include "merchinfo.h"

#include <QWidget>

namespace Ui {
class HomeMerchItem;
}

class HomeMerchItem : public QWidget
{
    Q_OBJECT

public:
    explicit HomeMerchItem(MerchInfo info, QWidget *parent = 0);
    ~HomeMerchItem();
    void setMerchHostPhoto();
//    QString getMerchID();
signals:
    void signalPBPurchase(QString merchID);
private slots:
    void on_pb_merch_clicked();

private:
    Ui::HomeMerchItem *ui;
    MerchInfo m_merchInfo;
};

#endif // HOMEMERCHITEM_H
