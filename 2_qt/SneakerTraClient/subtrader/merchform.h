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

private:
    Ui::MerchForm *ui;
};

#endif // MERCHFORM_H
