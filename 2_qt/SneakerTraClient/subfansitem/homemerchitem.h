#ifndef HOMEMERCHITEM_H
#define HOMEMERCHITEM_H

#include <QWidget>

namespace Ui {
class HomeMerchItem;
}

class HomeMerchItem : public QWidget
{
    Q_OBJECT

public:
    explicit HomeMerchItem(QWidget *parent = 0);
    ~HomeMerchItem();

private:
    Ui::HomeMerchItem *ui;
};

#endif // HOMEMERCHITEM_H
