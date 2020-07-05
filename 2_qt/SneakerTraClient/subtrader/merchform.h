#ifndef MERCHFORM_H
#define MERCHFORM_H
#include "applymerchform.h"
#include "tradermerchform.h"

#include <QWidget>
#include <QListWidget>
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
private slots:

    void on_pb_addmerch_clicked();

    void on_pb_deletemerch_clicked();

    void on_pb_modifymerch_clicked();

    void on_pb_photo_clicked();

    void on_pb_search_clicked();

    void on_cb_condition_activated(int index);
    void slotAroundMerch(void);



    void slotGainMerchInfoResult(bool res);
    void slotGainMerchHostPhotoResult(bool res);
private:
    Ui::MerchForm *ui;

    int m_searchCond;
    void initMerchForm();

//    TraderMerchForm *m_merchItem;
    TraderMerchFormList *m_merchItemList;

};

#endif // MERCHFORM_H
