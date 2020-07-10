/********************************************************************************
** Form generated from reading UI file 'merchform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHFORM_H
#define UI_MERCHFORM_H

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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerchForm
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
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
    QLineEdit *le_storeid;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLineEdit *le_storename;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_addmerch;
    QPushButton *pb_deletemerch;
    QPushButton *pb_modifymerch;
    QPushButton *pb_photo;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *listWidget;

    void setupUi(QWidget *MerchForm)
    {
        if (MerchForm->objectName().isEmpty())
            MerchForm->setObjectName(QStringLiteral("MerchForm"));
        MerchForm->resize(1204, 800);
        gridLayout_4 = new QGridLayout(MerchForm);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(MerchForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(69);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 58, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        groupBox = new QGroupBox(MerchForm);
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


        gridLayout->addWidget(groupBox, 0, 2, 1, 1);

        groupBox_3 = new QGroupBox(MerchForm);
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

        le_storeid = new QLineEdit(groupBox_3);
        le_storeid->setObjectName(QStringLiteral("le_storeid"));
        le_storeid->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_storeid->sizePolicy().hasHeightForWidth());
        le_storeid->setSizePolicy(sizePolicy4);
        le_storeid->setMinimumSize(QSize(200, 0));
        le_storeid->setMaximumSize(QSize(200, 16777215));
        le_storeid->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_storeid);

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

        le_storename = new QLineEdit(groupBox_3);
        le_storename->setObjectName(QStringLiteral("le_storename"));
        le_storename->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(le_storename->sizePolicy().hasHeightForWidth());
        le_storename->setSizePolicy(sizePolicy6);
        le_storename->setMinimumSize(QSize(250, 0));
        le_storename->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_storename);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_addmerch = new QPushButton(groupBox_3);
        pb_addmerch->setObjectName(QStringLiteral("pb_addmerch"));
        pb_addmerch->setEnabled(false);
        pb_addmerch->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(pb_addmerch);

        pb_deletemerch = new QPushButton(groupBox_3);
        pb_deletemerch->setObjectName(QStringLiteral("pb_deletemerch"));
        pb_deletemerch->setEnabled(false);
        pb_deletemerch->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(pb_deletemerch);

        pb_modifymerch = new QPushButton(groupBox_3);
        pb_modifymerch->setObjectName(QStringLiteral("pb_modifymerch"));
        pb_modifymerch->setEnabled(false);
        pb_modifymerch->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(pb_modifymerch);

        pb_photo = new QPushButton(groupBox_3);
        pb_photo->setObjectName(QStringLiteral("pb_photo"));
        pb_photo->setEnabled(false);
        pb_photo->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(pb_photo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 3);

        listWidget = new QListWidget(MerchForm);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 2, 0, 1, 3);


        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(MerchForm);

        QMetaObject::connectSlotsByName(MerchForm);
    } // setupUi

    void retranslateUi(QWidget *MerchForm)
    {
        MerchForm->setWindowTitle(QApplication::translate("MerchForm", "Form", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("MerchForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   Sneaker|\345\220\276\351\236\213</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600; color:#ff0000;\">   sneaker .com</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MerchForm", "\345\272\227\351\223\272\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("MerchForm", "\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        cb_condition->clear();
        cb_condition->insertItems(0, QStringList()
         << QApplication::translate("MerchForm", "\346\227\240\346\235\241\344\273\266", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\345\225\206\345\223\201\345\217\267", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\345\225\206\345\223\201\345\220\215", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MerchForm", "\346\235\241\344\273\266\357\274\232", Q_NULLPTR));
        pb_search->setText(QApplication::translate("MerchForm", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MerchForm", "\345\272\227\351\223\272\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("MerchForm", "\345\272\227\351\223\272ID\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MerchForm", "\345\272\227\351\223\272\345\220\215\357\274\232", Q_NULLPTR));
        pb_addmerch->setText(QApplication::translate("MerchForm", " \346\267\273\345\212\240", Q_NULLPTR));
        pb_deletemerch->setText(QApplication::translate("MerchForm", "\345\210\240\351\231\244", Q_NULLPTR));
        pb_modifymerch->setText(QApplication::translate("MerchForm", "\346\233\264\346\224\271", Q_NULLPTR));
        pb_photo->setText(QApplication::translate("MerchForm", "\350\257\246\345\233\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerchForm: public Ui_MerchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHFORM_H
