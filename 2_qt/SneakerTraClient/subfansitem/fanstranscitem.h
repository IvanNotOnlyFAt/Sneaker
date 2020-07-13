#ifndef FANSTRANSCITEM_H
#define FANSTRANSCITEM_H

#include <QWidget>

namespace Ui {
class FansTranscItem;
}

class FansTranscItem : public QWidget
{
    Q_OBJECT

public:
    explicit FansTranscItem(QWidget *parent = 0);
    ~FansTranscItem();

private:
    Ui::FansTranscItem *ui;
};

#endif // FANSTRANSCITEM_H
