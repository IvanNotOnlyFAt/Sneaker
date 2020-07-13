#ifndef FANSTROLLEYITEM_H
#define FANSTROLLEYITEM_H

#include <QWidget>

namespace Ui {
class FansTrolleyItem;
}

class FansTrolleyItem : public QWidget
{
    Q_OBJECT

public:
    explicit FansTrolleyItem(QWidget *parent = 0);
    ~FansTrolleyItem();

private:
    Ui::FansTrolleyItem *ui;
};

#endif // FANSTROLLEYITEM_H
