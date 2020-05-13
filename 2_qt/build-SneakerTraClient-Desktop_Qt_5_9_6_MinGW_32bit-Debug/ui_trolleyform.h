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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrolleyForm
{
public:

    void setupUi(QWidget *TrolleyForm)
    {
        if (TrolleyForm->objectName().isEmpty())
            TrolleyForm->setObjectName(QStringLiteral("TrolleyForm"));
        TrolleyForm->resize(1110, 800);

        retranslateUi(TrolleyForm);

        QMetaObject::connectSlotsByName(TrolleyForm);
    } // setupUi

    void retranslateUi(QWidget *TrolleyForm)
    {
        TrolleyForm->setWindowTitle(QApplication::translate("TrolleyForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TrolleyForm: public Ui_TrolleyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TROLLEYFORM_H
