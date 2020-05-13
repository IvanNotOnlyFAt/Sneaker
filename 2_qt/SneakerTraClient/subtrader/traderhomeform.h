#ifndef TRADERHOMEFORM_H
#define TRADERHOMEFORM_H

#include <QWidget>

namespace Ui {
class TraderHomeForm;
}

class TraderHomeForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderHomeForm(QWidget *parent = 0);
    ~TraderHomeForm();

private:
    Ui::TraderHomeForm *ui;
};

#endif // TRADERHOMEFORM_H
