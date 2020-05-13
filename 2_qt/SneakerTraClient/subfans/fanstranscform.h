#ifndef FANSTRANSCFORM_H
#define FANSTRANSCFORM_H

#include <QWidget>

namespace Ui {
class FansTranscForm;
}

class FansTranscForm : public QWidget
{
    Q_OBJECT

public:
    explicit FansTranscForm(QWidget *parent = 0);
    ~FansTranscForm();

private:
    Ui::FansTranscForm *ui;
};

#endif // FANSTRANSCFORM_H
