#ifndef TRADERTRANSCITEM_H
#define TRADERTRANSCITEM_H

#include <QWidget>

namespace Ui {
class TraderTranscItem;
}

class TraderTranscItem : public QWidget
{
    Q_OBJECT

public:
    explicit TraderTranscItem(QWidget *parent = 0);
    ~TraderTranscItem();

private:
    Ui::TraderTranscItem *ui;
};

#endif // TRADERTRANSCITEM_H
