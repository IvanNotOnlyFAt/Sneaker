#ifndef MERCHADPHOTOFORM_H
#define MERCHADPHOTOFORM_H

#include <QWidget>

namespace Ui {
class MerchADPhotoForm;
}

class MerchADPhotoForm : public QWidget
{
    Q_OBJECT

public:
    explicit MerchADPhotoForm(QWidget *parent = 0);
    ~MerchADPhotoForm();

private:
    Ui::MerchADPhotoForm *ui;
};

#endif // MERCHADPHOTOFORM_H
