/********************************************************************************
** Form generated from reading UI file 'traderhomeform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERHOMEFORM_H
#define UI_TRADERHOMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderHomeForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TraderHomeForm)
    {
        if (TraderHomeForm->objectName().isEmpty())
            TraderHomeForm->setObjectName(QStringLiteral("TraderHomeForm"));
        TraderHomeForm->resize(1110, 800);
        pushButton = new QPushButton(TraderHomeForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 250, 201, 91));

        retranslateUi(TraderHomeForm);

        QMetaObject::connectSlotsByName(TraderHomeForm);
    } // setupUi

    void retranslateUi(QWidget *TraderHomeForm)
    {
        TraderHomeForm->setWindowTitle(QApplication::translate("TraderHomeForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TraderHomeForm", "T\344\270\273\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderHomeForm: public Ui_TraderHomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERHOMEFORM_H
