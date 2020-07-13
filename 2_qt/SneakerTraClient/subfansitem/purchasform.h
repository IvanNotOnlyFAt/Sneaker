#ifndef PURCHASFORM_H
#define PURCHASFORM_H

#include <QWidget>

namespace Ui {
class PurchasForm;
}

class PurchasForm : public QWidget
{
    Q_OBJECT

public:
    explicit PurchasForm(QWidget *parent = 0);
    ~PurchasForm();

private slots:


private:
    Ui::PurchasForm *ui;
};

#endif // PURCHASFORM_H
