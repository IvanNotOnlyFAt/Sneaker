#ifndef APPLYSTOREFORM_H
#define APPLYSTOREFORM_H

#include "globalvars.h"
#include "storeinfo.h"

#include <QWidget>
#include <QDialog>
#include <QImage>
#include <QCloseEvent>
#include <QMouseEvent>
namespace Ui {
class ApplyStoreForm;
}

class ApplyStoreForm : public QWidget
{
    Q_OBJECT

public:
    explicit ApplyStoreForm(QString traid,QWidget *parent = 0);
    ApplyStoreForm( StoreInfo info, QWidget *parent = 0);
    ~ApplyStoreForm();

signals:
    void signalApplyAddStore();
    void signalApplyModifyStore();

protected:
    void closeEvent(QCloseEvent *event);
//    void mousePressEvent(QMouseEvent *e);
private slots:
    void on_pb_selectlogo_clicked();

    void on_pb_modify_clicked();

    void on_pb_applystore_clicked();

private:
    Ui::ApplyStoreForm *ui;
    bool m_isCloseWidget;
    QImage m_tempimg;
};

#endif // APPLYSTOREFORM_H
