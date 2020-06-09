#ifndef TRADERSTOREITEM_H
#define TRADERSTOREITEM_H

#include <QWidget>

namespace Ui {
class TraderStoreItem;
}

class TraderStoreItem : public QWidget
{
    Q_OBJECT

public:
    explicit TraderStoreItem(QWidget *parent = 0);
    ~TraderStoreItem();

private:
    Ui::TraderStoreItem *ui;
};

#endif // TRADERSTOREITEM_H
