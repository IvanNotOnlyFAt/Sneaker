#ifndef HOMESTOREITEM_H
#define HOMESTOREITEM_H

#include <QWidget>

namespace Ui {
class HomeStoreItem;
}

class HomeStoreItem : public QWidget
{
    Q_OBJECT

public:
    explicit HomeStoreItem(QWidget *parent = 0);
    ~HomeStoreItem();

private:
    Ui::HomeStoreItem *ui;
};

#endif // HOMESTOREITEM_H
