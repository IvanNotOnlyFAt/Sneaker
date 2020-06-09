/********************************************************************************
** Form generated from reading UI file 'fanstranscform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSTRANSCFORM_H
#define UI_FANSTRANSCFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansTranscForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *FansTranscForm)
    {
        if (FansTranscForm->objectName().isEmpty())
            FansTranscForm->setObjectName(QStringLiteral("FansTranscForm"));
        FansTranscForm->resize(1110, 800);
        pushButton = new QPushButton(FansTranscForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 200, 201, 91));

        retranslateUi(FansTranscForm);

        QMetaObject::connectSlotsByName(FansTranscForm);
    } // setupUi

    void retranslateUi(QWidget *FansTranscForm)
    {
        FansTranscForm->setWindowTitle(QApplication::translate("FansTranscForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FansTranscForm", "F\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansTranscForm: public Ui_FansTranscForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSTRANSCFORM_H
