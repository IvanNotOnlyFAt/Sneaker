/********************************************************************************
** Form generated from reading UI file 'trolleyform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TROLLEYFORM_H
#define UI_TROLLEYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrolleyForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TrolleyForm)
    {
        if (TrolleyForm->objectName().isEmpty())
            TrolleyForm->setObjectName(QStringLiteral("TrolleyForm"));
        TrolleyForm->resize(1110, 800);
        pushButton = new QPushButton(TrolleyForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 190, 201, 91));

        retranslateUi(TrolleyForm);

        QMetaObject::connectSlotsByName(TrolleyForm);
    } // setupUi

    void retranslateUi(QWidget *TrolleyForm)
    {
        TrolleyForm->setWindowTitle(QApplication::translate("TrolleyForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TrolleyForm", "F\350\264\255\347\211\251\350\275\246\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrolleyForm: public Ui_TrolleyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TROLLEYFORM_H
