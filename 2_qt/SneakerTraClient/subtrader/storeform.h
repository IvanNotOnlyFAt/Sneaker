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

private:
    Ui::StoreForm *ui;
};

#endif // STOREFORM_H
