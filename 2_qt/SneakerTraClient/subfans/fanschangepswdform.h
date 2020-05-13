#ifndef FANSCHANGEPSWDFORM_H
#define FANSCHANGEPSWDFORM_H

#include <QWidget>

namespace Ui {
class FansChangePswdForm;
}

class FansChangePswdForm : public QWidget
{
    Q_OBJECT

public:
    explicit FansChangePswdForm(QWidget *parent = 0);
    ~FansChangePswdForm();

private:
    Ui::FansChangePswdForm *ui;
};

#endif // FANSCHANGEPSWDFORM_H
