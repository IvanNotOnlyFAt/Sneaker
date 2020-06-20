#ifndef TRADERSTOREFORM_H
#define TRADERSTOREFORM_H

#include <QWidget>

namespace Ui {
class TraderStoreForm;
}
enum Search_Condition{
        Search_None = 0,
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
    void signalRefreshStoreData(void);
private slots:
    void on_cb_condition_currentIndexChanged(int index);

    void on_pb_search_clicked();

    void on_pb_applystore_clicked();
    void slotGainStoreInfoResult(bool res);
private:
    Ui::TraderStoreForm *ui;

    int m_searchCond;
};

#endif // TRADERSTOREFORM_H