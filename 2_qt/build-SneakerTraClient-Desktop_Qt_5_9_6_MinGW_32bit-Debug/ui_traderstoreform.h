/********************************************************************************
** Form generated from reading UI file 'traderstoreform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERSTOREFORM_H
#define UI_TRADERSTOREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderStoreForm
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *cb_condition;
    QLabel *label_6;
    QLineEdit *le_condition;
    QPushButton *pb_search;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_traderid;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *le_tradername;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_applystore;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TraderStoreForm)
    {
        if (TraderStoreForm->objectName().isEmpty())
            TraderStoreForm->setObjectName(QStringLiteral("TraderStoreForm"));
        TraderStoreForm->resize(1110, 800);
        gridLayout_5 = new QGridLayout(TraderStoreForm);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        textBrowser = new QTextBrowser(TraderStoreForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(69);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_4->addItem(verticalSpacer, 0, 1, 1, 1);

        groupBox = new QGroupBox(TraderStoreForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout_2->addWidget(label);

        cb_condition = new QComboBox(groupBox);
        cb_condition->setObjectName(QStringLiteral("cb_condition"));
        cb_condition->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_condition->sizePolicy().hasHeightForWidth());
        cb_condition->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(cb_condition);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        le_condition = new QLineEdit(groupBox);
        le_condition->setObjectName(QStringLiteral("le_condition"));
        le_condition->setEnabled(false);
        le_condition->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(le_condition);

        pb_search = new QPushButton(groupBox);
        pb_search->setObjectName(QStringLiteral("pb_search"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_search->sizePolicy().hasHeightForWidth());
        pb_search->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(pb_search);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(TraderStoreForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout->addWidget(label_2);

        le_traderid = new QLineEdit(groupBox_3);
        le_traderid->setObjectName(QStringLiteral("le_traderid"));
        le_traderid->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_traderid->sizePolicy().hasHeightForWidth());
        le_traderid->setSizePolicy(sizePolicy4);
        le_traderid->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(le_traderid);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setFont(font);
        label_3->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout->addWidget(label_3);

        le_tradername = new QLineEdit(groupBox_3);
        le_tradername->setObjectName(QStringLiteral("le_tradername"));
        le_tradername->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(le_tradername->sizePolicy().hasHeightForWidth());
        le_tradername->setSizePolicy(sizePolicy6);
        le_tradername->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(le_tradername);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_applystore = new QPushButton(groupBox_3);
        pb_applystore->setObjectName(QStringLiteral("pb_applystore"));

        horizontalLayout->addWidget(pb_applystore);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 1, 0, 1, 3);

        groupBox_2 = new QGroupBox(TraderStoreForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 3);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(TraderStoreForm);

        QMetaObject::connectSlotsByName(TraderStoreForm);
    } // setupUi

    void retranslateUi(QWidget *TraderStoreForm)
    {
        TraderStoreForm->setWindowTitle(QApplication::translate("TraderStoreForm", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("TraderStoreForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   Sneaker|\345\220\276\351\236\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   sneaker .com</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TraderStoreForm", "\345\272\227\351\223\272\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("TraderStoreForm", "\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        cb_condition->clear();
        cb_condition->insertItems(0, QStringList()
         << QApplication::translate("TraderStoreForm", "\346\227\240\346\235\241\344\273\266", Q_NULLPTR)
         << QApplication::translate("TraderStoreForm", "\345\272\227\351\223\272\345\217\267", Q_NULLPTR)
         << QApplication::translate("TraderStoreForm", "\345\272\227\351\223\272\345\220\215", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("TraderStoreForm", "\346\235\241\344\273\266\357\274\232", Q_NULLPTR));
        pb_search->setText(QApplication::translate("TraderStoreForm", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("TraderStoreForm", "\345\272\227\351\223\272\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("TraderStoreForm", "\345\272\227\344\270\273ID\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("TraderStoreForm", "\345\272\227\344\270\273\345\220\215\357\274\232", Q_NULLPTR));
        pb_applystore->setText(QApplication::translate("TraderStoreForm", "\347\224\263 \350\257\267 \345\274\200 \345\272\227", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TraderStoreForm", "\345\267\262\346\234\211\345\272\227\351\223\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderStoreForm: public Ui_TraderStoreForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERSTOREFORM_H
