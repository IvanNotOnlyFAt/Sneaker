#ifndef HOMESTOREITEM_H
#define HOMESTOREITEM_H

#include <QWidget>
#include "storeinfo.h"


namespace Ui {
class HomeStoreItem;
}

class HomeStoreItem : public QWidget
{
    Q_OBJECT

public:
    explicit HomeStoreItem(StoreInfo info, QWidget *parent = 0);
    ~HomeStoreItem();
    void setStoreLogo();
private:
    Ui::HomeStoreItem *ui;
    StoreInfo m_storeInfo;
};

#endif // HOMESTOREITEM_H
