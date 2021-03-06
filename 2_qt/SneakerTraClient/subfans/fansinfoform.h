#ifndef FANSINFOFORM_H
#define FANSINFOFORM_H

#include <QWidget>

namespace Ui {
class FansInfoForm;
}

class FansInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit FansInfoForm(QWidget *parent = 0);
    ~FansInfoForm();

public slots:
    void slotGainFansInfoResult(bool res);
protected:
    void paintEvent(QPaintEvent *);
private:

    Ui::FansInfoForm *ui;
};

#endif // FANSINFOFORM_H
