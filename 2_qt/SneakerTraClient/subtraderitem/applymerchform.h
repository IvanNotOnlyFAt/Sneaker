#ifndef APPLYMERCHFORM_H
#define APPLYMERCHFORM_H

#include <QWidget>

namespace Ui {
class ApplyMerchForm;
}

class ApplyMerchForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyMerchForm(QWidget *parent = 0);
    ~ApplyMerchForm();

private:
    Ui::ApplyMerchForm *ui;
};

#endif // APPLYMERCHFORM_H
