/********************************************************************************
** Form generated from reading UI file 'storeform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREFORM_H
#define UI_STOREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StoreForm
{
public:

    void setupUi(QWidget *StoreForm)
    {
        if (StoreForm->objectName().isEmpty())
            StoreForm->setObjectName(QStringLiteral("StoreForm"));
        StoreForm->resize(1110, 800);

        retranslateUi(StoreForm);

        QMetaObject::connectSlotsByName(StoreForm);
    } // setupUi

    void retranslateUi(QWidget *StoreForm)
    {
        StoreForm->setWindowTitle(QApplication::translate("StoreForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StoreForm: public Ui_StoreForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREFORM_H
