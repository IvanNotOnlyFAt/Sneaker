/********************************************************************************
** Form generated from reading UI file 'fanschangepswdform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSCHANGEPSWDFORM_H
#define UI_FANSCHANGEPSWDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansChangePswdForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *FansChangePswdForm)
    {
        if (FansChangePswdForm->objectName().isEmpty())
            FansChangePswdForm->setObjectName(QStringLiteral("FansChangePswdForm"));
        FansChangePswdForm->resize(1110, 800);
        pushButton = new QPushButton(FansChangePswdForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(490, 440, 311, 161));

        retranslateUi(FansChangePswdForm);

        QMetaObject::connectSlotsByName(FansChangePswdForm);
    } // setupUi

    void retranslateUi(QWidget *FansChangePswdForm)
    {
        FansChangePswdForm->setWindowTitle(QApplication::translate("FansChangePswdForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FansChangePswdForm", "F\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansChangePswdForm: public Ui_FansChangePswdForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSCHANGEPSWDFORM_H
