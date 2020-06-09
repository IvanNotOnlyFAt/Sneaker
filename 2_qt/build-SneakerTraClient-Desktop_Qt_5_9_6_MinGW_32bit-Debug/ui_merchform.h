/********************************************************************************
** Form generated from reading UI file 'merchform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHFORM_H
#define UI_MERCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerchForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *MerchForm)
    {
        if (MerchForm->objectName().isEmpty())
            MerchForm->setObjectName(QStringLiteral("MerchForm"));
        MerchForm->resize(1110, 800);
        pushButton = new QPushButton(MerchForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 210, 201, 91));

        retranslateUi(MerchForm);

        QMetaObject::connectSlotsByName(MerchForm);
    } // setupUi

    void retranslateUi(QWidget *MerchForm)
    {
        MerchForm->setWindowTitle(QApplication::translate("MerchForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MerchForm", "T\345\225\206\345\223\201\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerchForm: public Ui_MerchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHFORM_H
