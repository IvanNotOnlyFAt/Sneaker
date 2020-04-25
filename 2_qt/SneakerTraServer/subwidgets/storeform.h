#ifndef STOREFORM_H
#define STOREFORM_H

#include <QWidget>

namespace Ui {
class StoreForm;
}

class StoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit StoreForm(QWidget *parent = 0);
    ~StoreForm();
    enum Search_Condition{
            Search_None = 0,
            Search_ID,
            Search_TraID,
            Search_Name,
            Search_MerchType,
            Search_Location,
            Search_Logo,
            Search_Date
    };

private slots:
    void on_pb_search_clicked();
    void on_pb_modify_clicked();
    void on_pb_delete_clicked();
    void on_pb_add_clicked();
    void on_pb_cancel_clicked();
    void on_pb_save_clicked();

    void on_tableWidget_clicked(const QModelIndex &index);
    void on_cb_condition_currentIndexChanged(int index);

private:
    Ui::StoreForm *ui;
    int m_searchCond;
    int m_operData;

    void updataTableInfos(void);
    void initWidgetUnits(void);
    void pushButtonStatus(void);
};

#endif // STOREFORM_H
