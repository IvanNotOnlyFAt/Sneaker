#ifndef FANSHOMEFORM_H
#define FANSHOMEFORM_H
#include "homemerchitem.h"
#include "homestoreitem.h"
#include "purchasform.h"
#include "storeinfo.h"
#include "merchinfo.h"

#include <QListWidget>
#include <QList>
#include <QWidget>
#include <QTableWidgetItem>
namespace Ui {
class FansHomeForm;
}

class FansHomeForm : public QWidget
{
    Q_OBJECT

public:
    explicit FansHomeForm(QWidget *parent = 0);
    ~FansHomeForm();
    enum Search_HomeCondition{
            Search_None = 0,
            Search_StoreID,
            Search_StoreName,
            Search_MerchID,
            Search_MerchName

    };
signals:
    void signalRefreshHomeData();
    void signalHomeStoreApply(QString msg);
    void signalHomeMerchApply(QString msg);
private slots:
    void on_pb_search_clicked();

    void on_cb_condition_activated(int index);

    void on_pb_change_clicked();

//    void on_listWidget_itemClicked(QListWidgetItem *item);

    void slotGainHomeInfo(bool res);
    void slotGainHomeStorePhoto(bool res);
    void slotGainHomeMerchPhoto(bool res);
    void slotPBPurchase(QString merchID);
//    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::FansHomeForm *ui;
    void deleteAllItem();
    QList<HomeMerchItem*> itemWidgetList;
    int m_searchCond;
    int m_merchIndex;
    QStringList m_storeDisplayList;
    QStringList m_merchDisplayList;

    QString m_currentMerchID;
    QString m_currentStoreID;
    PurchasForm *m_puchasWidget;



};

#endif // FANSHOMEFORM_H
