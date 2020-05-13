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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansTranscForm
{
public:

    void setupUi(QWidget *FansTranscForm)
    {
        if (FansTranscForm->objectName().isEmpty())
            FansTranscForm->setObjectName(QStringLiteral("FansTranscForm"));
        FansTranscForm->resize(1110, 800);

        retranslateUi(FansTranscForm);

        QMetaObject::connectSlotsByName(FansTranscForm);
    } // setupUi

    void retranslateUi(QWidget *FansTranscForm)
    {
        FansTranscForm->setWindowTitle(QApplication::translate("FansTranscForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansTranscForm: public Ui_FansTranscForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSTRANSCFORM_H
