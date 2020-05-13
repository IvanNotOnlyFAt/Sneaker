/********************************************************************************
** Form generated from reading UI file 'traderinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERINFOFORM_H
#define UI_TRADERINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderInfoForm
{
public:

    void setupUi(QWidget *TraderInfoForm)
    {
        if (TraderInfoForm->objectName().isEmpty())
            TraderInfoForm->setObjectName(QStringLiteral("TraderInfoForm"));
        TraderInfoForm->resize(1110, 800);

        retranslateUi(TraderInfoForm);

        QMetaObject::connectSlotsByName(TraderInfoForm);
    } // setupUi

    void retranslateUi(QWidget *TraderInfoForm)
    {
        TraderInfoForm->setWindowTitle(QApplication::translate("TraderInfoForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderInfoForm: public Ui_TraderInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERINFOFORM_H
