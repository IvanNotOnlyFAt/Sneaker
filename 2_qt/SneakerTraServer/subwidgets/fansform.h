#ifndef FANSFORM_H
#define FANSFORM_H

#include <QWidget>

namespace Ui {
class FansForm;
}

class FansForm : public QWidget
{
    Q_OBJECT

public:
    explicit FansForm(QWidget *parent = 0);
    ~FansForm();
    enum Search_Condition{
            Search_None = 0,
            Search_ID,
            Search_NickName,
            Search_Tele
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
    Ui::FansForm *ui;
    int m_searchCond;
    int m_operData;

    void updataTableInfos(void);
    void initWidgetUnits(void);
    void pushButtonStatus(void);
};

#endif // FANSFORM_H
