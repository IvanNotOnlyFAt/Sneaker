/********************************************************************************
** Form generated from reading UI file 'fansinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSINFOFORM_H
#define UI_FANSINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansInfoForm
{
public:

    void setupUi(QWidget *FansInfoForm)
    {
        if (FansInfoForm->objectName().isEmpty())
            FansInfoForm->setObjectName(QStringLiteral("FansInfoForm"));
        FansInfoForm->resize(1110, 800);

        retranslateUi(FansInfoForm);

        QMetaObject::connectSlotsByName(FansInfoForm);
    } // setupUi

    void retranslateUi(QWidget *FansInfoForm)
    {
        FansInfoForm->setWindowTitle(QApplication::translate("FansInfoForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansInfoForm: public Ui_FansInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSINFOFORM_H
