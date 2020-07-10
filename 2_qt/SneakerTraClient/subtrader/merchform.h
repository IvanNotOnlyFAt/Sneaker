#ifndef MERCHFORM_H
#define MERCHFORM_H
#include "applymerchform.h"
#include "tradermerchform.h"

#include <QWidget>
#include <QListWidget>
#include <QList>
namespace Ui {
class MerchForm;
}
enum Search_MerchCondition{
        Search_MerchNone = 0,
        Search_MerchID,
        Search_MerchName
};
class MerchForm : public QWidget
{
    Q_OBJECT

public:
    explicit MerchForm(QWidget *parent = 0);
    ~MerchForm();
signals:
    void signalRefreshMerchData();
    void signalApplyMerchPhoto();
    void signalAddMerch(QString msg, QByteArray imsge);
    void signalDeleteMerch(QString msg);
private slots:

    void on_pb_addmerch_clicked();
    void on_pb_deletemerch_clicked();
    void on_pb_modifymerch_clicked();
    void on_pb_photo_clicked();
    void on_pb_search_clicked();

    void slotAroundMerch(void);
    void slotApplyMerchResult(bool res, QString msg);
    void slotGainMerchInfoResult(bool res);
    void slotGainMerchHostPhotoResult(bool res);
    void slotDeleteMerchResult(bool res);

    void on_listWidget_currentRowChanged(int currentRow);
    void slotApplyAddMerch(QString msg,QByteArray buffer);

    void on_cb_condition_activated(int index);
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MerchForm *ui;

    bool m_clickedFlag;

    QList<QWidget*> itemWidgetList;
    QList<QListWidgetItem*> itemList;
    int m_searchCond;
    void initMerchForm();
    void currrentSelect(TraderMerchForm *merchItem);
    void deleteAllItem();
    void disconnectListwidget();
    void connectListwidget();

    TraderMerchForm *m_merchItem;
    QString m_currentMerchID;
    QString m_currentStoreID;
    QString m_currentStoreName;
    ApplyMerchForm *m_applyWidget;
    ApplyMerchForm *m_modifyWidget;

//    TraderMerchFormList *m_merchItemList;

};

#endif // MERCHFORM_H
