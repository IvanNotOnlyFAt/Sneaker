/********************************************************************************
** Form generated from reading UI file 'fanshomeform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSHOMEFORM_H
#define UI_FANSHOMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansHomeForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *FansHomeForm)
    {
        if (FansHomeForm->objectName().isEmpty())
            FansHomeForm->setObjectName(QStringLiteral("FansHomeForm"));
        FansHomeForm->resize(1110, 800);
        pushButton = new QPushButton(FansHomeForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(380, 160, 93, 28));

        retranslateUi(FansHomeForm);

        QMetaObject::connectSlotsByName(FansHomeForm);
    } // setupUi

    void retranslateUi(QWidget *FansHomeForm)
    {
        FansHomeForm->setWindowTitle(QApplication::translate("FansHomeForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FansHomeForm", "F\344\270\273\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansHomeForm: public Ui_FansHomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSHOMEFORM_H
