#ifndef TRADERFORM_H
#define TRADERFORM_H

#include <QWidget>

namespace Ui {
class TraderForm;
}

class TraderForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderForm(QWidget *parent = 0);
    ~TraderForm();
    enum Search_Condition{
            Search_None = 0,
            Search_ID,
            Search_Name,
            Search_Tele,
            Search_IdNum
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
    Ui::TraderForm *ui;
    int m_searchCond;
    int m_operData;

    void updataTableInfos(void);
    void initWidgetUnits(void);
    void pushButtonStatus(void);
};

#endif // TRADERFORM_H
