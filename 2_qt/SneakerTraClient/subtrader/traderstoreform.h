#ifndef TRADERSTOREFORM_H
#define TRADERSTOREFORM_H

#include <QWidget>

namespace Ui {
class TraderStoreForm;
}

class TraderStoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderStoreForm(QWidget *parent = 0);
    ~TraderStoreForm();

private slots:
    void on_cb_condition_currentIndexChanged(int index);

    void on_pb_search_clicked();

    void on_pb_applystore_clicked();

private:
    Ui::TraderStoreForm *ui;
};

#endif // TRADERSTOREFORM_H
