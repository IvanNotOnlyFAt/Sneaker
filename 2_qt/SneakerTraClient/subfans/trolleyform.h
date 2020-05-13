#ifndef TROLLEYFORM_H
#define TROLLEYFORM_H

#include <QWidget>

namespace Ui {
class TrolleyForm;
}

class TrolleyForm : public QWidget
{
    Q_OBJECT

public:
    explicit TrolleyForm(QWidget *parent = 0);
    ~TrolleyForm();

private:
    Ui::TrolleyForm *ui;
};

#endif // TROLLEYFORM_H
