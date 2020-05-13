#ifndef FANSHOMEFORM_H
#define FANSHOMEFORM_H

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

private:
    Ui::FansHomeForm *ui;
};

#endif // FANSHOMEFORM_H
