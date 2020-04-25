#ifndef TROLLEYFORM_H
#define TROLLEYFORM_H

#include <QWidget>

namespace Ui {
class TrolleyForm;
}

class TrolleyForm : public QWidget
{
    Q_OBJECT

public:
    explicit TrolleyForm(QWidget *parent = 0);
    ~TrolleyForm();
    enum Search_Condition{
            Search_None = 0,
            Search_ID,
            Search_FansID,
            Search_MerchID,
            Search_MerchNum,
            Search_SelectSize,
            Search_Date,
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
    Ui::TrolleyForm *ui;
    int m_searchCond;
    int m_operData;

    void updataTableInfos(void);
    void initWidgetUnits(void);
    void pushButtonStatus(void);
};

#endif // TROLLEYFORM_H
