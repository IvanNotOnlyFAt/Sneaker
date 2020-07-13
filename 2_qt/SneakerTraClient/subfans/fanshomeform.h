#ifndef FANSHOMEFORM_H
#define FANSHOMEFORM_H
#include "applymerchform.h"
#include "tradermerchform.h"

#include <QListWidget>
#include <QList>
#include <QWidget>

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
private slots:
    void on_pb_search_clicked();

    void on_cb_condition_activated(int index);

    void on_pb_change_clicked();

private:
    Ui::FansHomeForm *ui;
};

#endif // FANSHOMEFORM_H
