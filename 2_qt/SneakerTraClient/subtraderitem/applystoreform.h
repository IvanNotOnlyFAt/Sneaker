#ifndef APPLYSTOREFORM_H
#define APPLYSTOREFORM_H

#include <QWidget>

namespace Ui {
class ApplyStoreForm;
}

class ApplyStoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyStoreForm(QWidget *parent = 0);
    ~ApplyStoreForm();

private:
    Ui::ApplyStoreForm *ui;
};

#endif // APPLYSTOREFORM_H
