/********************************************************************************
** Form generated from reading UI file 'tradertranscform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERTRANSCFORM_H
#define UI_TRADERTRANSCFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderTranscForm
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TraderTranscForm)
    {
        if (TraderTranscForm->objectName().isEmpty())
            TraderTranscForm->setObjectName(QStringLiteral("TraderTranscForm"));
        TraderTranscForm->resize(1110, 800);
        pushButton = new QPushButton(TraderTranscForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 250, 201, 91));

        retranslateUi(TraderTranscForm);

        QMetaObject::connectSlotsByName(TraderTranscForm);
    } // setupUi

    void retranslateUi(QWidget *TraderTranscForm)
    {
        TraderTranscForm->setWindowTitle(QApplication::translate("TraderTranscForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TraderTranscForm", "T\344\272\244\346\230\223\347\256\241\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderTranscForm: public Ui_TraderTranscForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERTRANSCFORM_H
