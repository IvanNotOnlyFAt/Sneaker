/********************************************************************************
** Form generated from reading UI file 'traderchangepswdform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERCHANGEPSWDFORM_H
#define UI_TRADERCHANGEPSWDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderChangePswdForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TraderChangePswdForm)
    {
        if (TraderChangePswdForm->objectName().isEmpty())
            TraderChangePswdForm->setObjectName(QStringLiteral("TraderChangePswdForm"));
        TraderChangePswdForm->resize(1110, 800);
        pushButton = new QPushButton(TraderChangePswdForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 210, 201, 91));

        retranslateUi(TraderChangePswdForm);

        QMetaObject::connectSlotsByName(TraderChangePswdForm);
    } // setupUi

    void retranslateUi(QWidget *TraderChangePswdForm)
    {
        TraderChangePswdForm->setWindowTitle(QApplication::translate("TraderChangePswdForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TraderChangePswdForm", "T\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderChangePswdForm: public Ui_TraderChangePswdForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERCHANGEPSWDFORM_H
