#ifndef MERCHFORM_H
#define MERCHFORM_H

#include <QWidget>

namespace Ui {
class MerchForm;
}

class MerchForm : public QWidget
{
    Q_OBJECT

public:
    explicit MerchForm(QWidget *parent = 0);
    ~MerchForm();
    enum Search_Condition{
            Search_None = 0,
            Search_ID,
            Search_StoreID,
            Search_Name,
            Search_Price,
            Search_Stock,
            Search_MerchSize,
            Search_AdPhoto,
            Search_Descri
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
    Ui::MerchForm *ui;
    int m_searchCond;
    int m_operData;

    void updataTableInfos(void);
    void initWidgetUnits(void);
    void pushButtonStatus(void);
};

#endif // MERCHFORM_H
