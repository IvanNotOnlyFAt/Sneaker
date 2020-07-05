#ifndef TRADERMERCHFORM_H
#define TRADERMERCHFORM_H
#include "merchinfo.h"
#include <QWidget>

namespace Ui {
class TraderMerchForm;
}

class TraderMerchForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderMerchForm(MerchInfo info, QWidget *parent = 0);
    ~TraderMerchForm();
    void setMerchHostPhoto();

private:
    Ui::TraderMerchForm *ui;
    MerchInfo m_merchInfo;
};
typedef QList<TraderMerchForm> TraderMerchFormList;
#endif // TRADERMERCHFORM_H
