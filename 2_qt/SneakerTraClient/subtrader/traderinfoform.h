#ifndef TRADERINFOFORM_H
#define TRADERINFOFORM_H

#include <QWidget>

namespace Ui {
class TraderInfoForm;
}

class TraderInfoForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderInfoForm(QWidget *parent = 0);
    ~TraderInfoForm();
signals:
    void signalRefreshStoreData(void);
public slots:
    void slotGainTraderInfoResult(bool res);
protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::TraderInfoForm *ui;
};

#endif // TRADERINFOFORM_H
