#ifndef TRADERTRANSCFORM_H
#define TRADERTRANSCFORM_H

#include <QWidget>

namespace Ui {
class TraderTranscForm;
}

class TraderTranscForm : public QWidget
{
    Q_OBJECT

public:
    explicit TraderTranscForm(QWidget *parent = 0);
    ~TraderTranscForm();

private:
    Ui::TraderTranscForm *ui;
};

#endif // TRADERTRANSCFORM_H
