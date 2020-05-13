#ifndef TRADERCHANGEPSWDFORM_H
#define TRADERCHANGEPSWDFORM_H

#include <QWidget>

namespace Ui {
class TraderChangePswdForm;
}

class TraderChangePswdForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderChangePswdForm(QWidget *parent = 0);
    ~TraderChangePswdForm();

private:
    Ui::TraderChangePswdForm *ui;
};

#endif // TRADERCHANGEPSWDFORM_H
