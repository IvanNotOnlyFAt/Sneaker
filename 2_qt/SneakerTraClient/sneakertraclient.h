#ifndef SNEAKERTRACLIENT_H
#define SNEAKERTRACLIENT_H

#include <QMainWindow>

namespace Ui {
class SneakerTraClient;
}

class SneakerTraClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SneakerTraClient(QWidget *parent = 0);
    ~SneakerTraClient();

private slots:
    void on_actionFansInfo_triggered();

    void on_actionFansHome_triggered();

    void on_actionTrolley_triggered();

    void on_actionFansChangPswd_triggered();

    void on_actionFansTranscation_triggered();

    void on_actionTraderInfo_triggered();

    void on_actionTraderHome_triggered();

    void on_actionStore_triggered();

    void on_actionMerch_triggered();

    void on_actionTraderTransc_triggered();

    void on_actionTraderChangePswd_triggered();

private:
    Ui::SneakerTraClient *ui;
};

#endif // SNEAKERTRACLIENT_H
