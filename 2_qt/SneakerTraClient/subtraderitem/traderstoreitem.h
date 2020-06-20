#ifndef TRADERSTOREITEM_H
#define TRADERSTOREITEM_H

#include "storeinfo.h"

#include <QWidget>

namespace Ui {
class TraderStoreItem;
}

class TraderStoreItem : public QWidget
{
    Q_OBJECT

public:
    explicit TraderStoreItem(StoreInfo info, QWidget *parent = 0);
    ~TraderStoreItem();

private slots:
    void on_pb_switch_clicked();

    void on_pb_change_clicked();

    void on_pb_delete_clicked();

private:
    Ui::TraderStoreItem *ui;
    void updataStoreStatus();

    bool m_storeStatus;
    int m_index;
    StoreInfo m_storeInfo;
    QString m_logoPath;
    QString m_logoFilePath;

};

#endif // TRADERSTOREITEM_H
