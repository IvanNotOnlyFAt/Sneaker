#ifndef TRADERSTOREFORM_H
#define TRADERSTOREFORM_H

#include "applystoreform.h"

#include <QWidget>

namespace Ui {
class TraderStoreForm;
}
enum Search_StoreCondition{
        Search_StoreNone = 0,
        Search_StoreID,
        Search_StoreName
};
class TraderStoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderStoreForm(QWidget *parent = 0);
    ~TraderStoreForm();

signals:
    void signalAddStore(QString msg,QByteArray image);
    void signalRefreshStoreData(void);
    void signalApplyStoreLogo(void);
    void signalDeleteStoreItem(QString msg);
    void signalAroundMerch(void);


private slots:
    void on_cb_condition_currentIndexChanged(int index);

    void on_pb_search_clicked();

    void on_pb_applystore_clicked();
    void slotGainStoreInfoResult(bool res);
    void slotGainStoreLogoResult(bool res);

    void slotApplyAddStore(QString msg,QByteArray image);
    void slotApplyStoreResult(bool res, QString msg);
    void slotDeleteStoreResult(bool res);
    void slotDeleteStore(QString msg);
private:
    Ui::TraderStoreForm *ui;

    int m_searchCond;
    ApplyStoreForm *m_applyWidget;

};

#endif // TRADERSTOREFORM_H
