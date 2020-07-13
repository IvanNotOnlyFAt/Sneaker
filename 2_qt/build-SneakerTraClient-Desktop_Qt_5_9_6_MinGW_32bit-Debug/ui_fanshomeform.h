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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansHomeForm
{
public:
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *cb_condition;
    QLabel *label_6;
    QLineEdit *le_condition;
    QPushButton *pb_search;
    QPushButton *pb_change;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *FansHomeForm)
    {
        if (FansHomeForm->objectName().isEmpty())
            FansHomeForm->setObjectName(QStringLiteral("FansHomeForm"));
        FansHomeForm->resize(1110, 800);
        gridLayout_8 = new QGridLayout(FansHomeForm);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        textBrowser = new QTextBrowser(FansHomeForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(69);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout_5->addWidget(textBrowser, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 66, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer, 0, 1, 1, 1);

        groupBox = new QGroupBox(FansHomeForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setContextMenuPolicy(Qt::NoContextMenu);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        cb_condition = new QComboBox(groupBox);
        cb_condition->setObjectName(QStringLiteral("cb_condition"));
        cb_condition->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_condition->sizePolicy().hasHeightForWidth());
        cb_condition->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(cb_condition, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        le_condition = new QLineEdit(groupBox);
        le_condition->setObjectName(QStringLiteral("le_condition"));
        le_condition->setEnabled(false);
        le_condition->setClearButtonEnabled(true);

        gridLayout_3->addWidget(le_condition, 0, 3, 1, 1);

        pb_search = new QPushButton(groupBox);
        pb_search->setObjectName(QStringLiteral("pb_search"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_search->sizePolicy().hasHeightForWidth());
        pb_search->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(pb_search, 0, 4, 1, 1);

        pb_change = new QPushButton(groupBox);
        pb_change->setObjectName(QStringLiteral("pb_change"));
        sizePolicy3.setHeightForWidth(pb_change->sizePolicy().hasHeightForWidth());
        pb_change->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(pb_change, 0, 5, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        groupBox_2 = new QGroupBox(FansHomeForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 700));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(FansHomeForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tableWidget = new QTableWidget(groupBox_3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(71);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);
        tableWidget->setMinimumSize(QSize(780, 0));
        tableWidget->setMaximumSize(QSize(710, 16777215));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);


        retranslateUi(FansHomeForm);

        QMetaObject::connectSlotsByName(FansHomeForm);
    } // setupUi

    void retranslateUi(QWidget *FansHomeForm)
    {
        FansHomeForm->setWindowTitle(QApplication::translate("FansHomeForm", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("FansHomeForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   Sneaker|\345\220\276\351\236\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   sneaker .com</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FansHomeForm", "\346\220\234\347\264\242\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("FansHomeForm", "\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        cb_condition->clear();
        cb_condition->insertItems(0, QStringList()
         << QApplication::translate("FansHomeForm", "\346\227\240\346\235\241\344\273\266", Q_NULLPTR)
         << QApplication::translate("FansHomeForm", "\345\272\227\351\223\272ID", Q_NULLPTR)
         << QApplication::translate("FansHomeForm", "\345\272\227\351\223\272\345\220\215", Q_NULLPTR)
         << QApplication::translate("FansHomeForm", "\345\225\206\345\223\201ID", Q_NULLPTR)
         << QApplication::translate("FansHomeForm", "\345\225\206\345\223\201\345\220\215", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("FansHomeForm", "\346\235\241\344\273\266\357\274\232", Q_NULLPTR));
        pb_search->setText(QApplication::translate("FansHomeForm", "\346\220\234\347\264\242", Q_NULLPTR));
        pb_change->setText(QApplication::translate("FansHomeForm", "\342\206\222", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("FansHomeForm", "\347\203\255\351\227\250\345\272\227\351\223\272", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("FansHomeForm", "\347\203\255\351\227\250\345\225\206\345\223\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansHomeForm: public Ui_FansHomeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSHOMEFORM_H
