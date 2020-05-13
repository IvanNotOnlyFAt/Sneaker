/********************************************************************************
** Form generated from reading UI file 'logupform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGUPFORM_H
#define UI_LOGUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogupForm
{
public:

    void setupUi(QWidget *LogupForm)
    {
        if (LogupForm->objectName().isEmpty())
            LogupForm->setObjectName(QStringLiteral("LogupForm"));
        LogupForm->resize(400, 300);

        retranslateUi(LogupForm);

        QMetaObject::connectSlotsByName(LogupForm);
    } // setupUi

    void retranslateUi(QWidget *LogupForm)
    {
        LogupForm->setWindowTitle(QApplication::translate("LogupForm", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LogupForm: public Ui_LogupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGUPFORM_H
