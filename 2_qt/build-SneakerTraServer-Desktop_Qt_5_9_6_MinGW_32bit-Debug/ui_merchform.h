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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerchForm
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cb_condition;
    QLabel *label_6;
    QLineEdit *le_condition;
    QPushButton *pb_search;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *le_id;
    QLabel *label_3;
    QLineEdit *le_storeid;
    QLabel *label_9;
    QLineEdit *le_adphoto;
    QLabel *label_4;
    QLineEdit *le_name;
    QLabel *label_5;
    QLineEdit *le_price;
    QLabel *label_10;
    QLineEdit *le_descri;
    QLabel *label_7;
    QLineEdit *le_stock;
    QLabel *label_8;
    QLineEdit *le_size;
    QPushButton *pb_modify;
    QPushButton *pb_delete;
    QPushButton *pb_add;
    QPushButton *pb_cancel;
    QPushButton *pb_save;

    void setupUi(QWidget *MerchForm)
    {
        if (MerchForm->objectName().isEmpty())
            MerchForm->setObjectName(QStringLiteral("MerchForm"));
        MerchForm->resize(1105, 790);
        gridLayout_6 = new QGridLayout(MerchForm);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        textBrowser = new QTextBrowser(MerchForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(69);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(textBrowser);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        horizontalLayout_2->addItem(verticalSpacer);

        groupBox = new QGroupBox(MerchForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout->addWidget(label);

        cb_condition = new QComboBox(groupBox);
        cb_condition->setObjectName(QStringLiteral("cb_condition"));
        cb_condition->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cb_condition->sizePolicy().hasHeightForWidth());
        cb_condition->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(cb_condition);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        le_condition = new QLineEdit(groupBox);
        le_condition->setObjectName(QStringLiteral("le_condition"));
        le_condition->setEnabled(false);
        le_condition->setClearButtonEnabled(true);

        horizontalLayout->addWidget(le_condition);

        pb_search = new QPushButton(groupBox);
        pb_search->setObjectName(QStringLiteral("pb_search"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pb_search->sizePolicy().hasHeightForWidth());
        pb_search->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(pb_search);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MerchForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableWidget = new QTableWidget(groupBox_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(MerchForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        le_id = new QLineEdit(groupBox_3);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        le_id->setMinimumSize(QSize(0, 24));

        gridLayout_2->addWidget(le_id, 0, 1, 1, 3);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 4, 1, 2);

        le_storeid = new QLineEdit(groupBox_3);
        le_storeid->setObjectName(QStringLiteral("le_storeid"));
        le_storeid->setEnabled(false);
        le_storeid->setMinimumSize(QSize(0, 24));
        le_storeid->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_storeid, 0, 6, 1, 2);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 0, 8, 1, 1);

        le_adphoto = new QLineEdit(groupBox_3);
        le_adphoto->setObjectName(QStringLiteral("le_adphoto"));
        le_adphoto->setEnabled(false);
        le_adphoto->setMinimumSize(QSize(0, 24));
        le_adphoto->setBaseSize(QSize(0, 0));
        le_adphoto->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_adphoto, 0, 9, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        le_name = new QLineEdit(groupBox_3);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        le_name->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_name, 1, 1, 1, 3);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 1, 4, 1, 2);

        le_price = new QLineEdit(groupBox_3);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setEnabled(false);
        le_price->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_price, 1, 6, 1, 2);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 1, 8, 3, 1);

        le_descri = new QLineEdit(groupBox_3);
        le_descri->setObjectName(QStringLiteral("le_descri"));
        le_descri->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(le_descri->sizePolicy().hasHeightForWidth());
        le_descri->setSizePolicy(sizePolicy4);
        le_descri->setMinimumSize(QSize(0, 85));
        le_descri->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_descri, 1, 9, 3, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        le_stock = new QLineEdit(groupBox_3);
        le_stock->setObjectName(QStringLiteral("le_stock"));
        le_stock->setEnabled(false);
        le_stock->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_stock, 2, 1, 1, 3);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 2, 4, 1, 2);

        le_size = new QLineEdit(groupBox_3);
        le_size->setObjectName(QStringLiteral("le_size"));
        le_size->setEnabled(false);
        le_size->setClearButtonEnabled(true);

        gridLayout_2->addWidget(le_size, 2, 6, 1, 2);

        pb_modify = new QPushButton(groupBox_3);
        pb_modify->setObjectName(QStringLiteral("pb_modify"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pb_modify->sizePolicy().hasHeightForWidth());
        pb_modify->setSizePolicy(sizePolicy5);

        gridLayout_2->addWidget(pb_modify, 3, 0, 1, 2);

        pb_delete = new QPushButton(groupBox_3);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pb_delete->sizePolicy().hasHeightForWidth());
        pb_delete->setSizePolicy(sizePolicy6);

        gridLayout_2->addWidget(pb_delete, 3, 2, 1, 1);

        pb_add = new QPushButton(groupBox_3);
        pb_add->setObjectName(QStringLiteral("pb_add"));

        gridLayout_2->addWidget(pb_add, 3, 3, 1, 2);

        pb_cancel = new QPushButton(groupBox_3);
        pb_cancel->setObjectName(QStringLiteral("pb_cancel"));
        pb_cancel->setEnabled(true);

        gridLayout_2->addWidget(pb_cancel, 3, 5, 1, 2);

        pb_save = new QPushButton(groupBox_3);
        pb_save->setObjectName(QStringLiteral("pb_save"));
        pb_save->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pb_save->sizePolicy().hasHeightForWidth());
        pb_save->setSizePolicy(sizePolicy7);

        gridLayout_2->addWidget(pb_save, 3, 7, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


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
        groupBox->setTitle(QApplication::translate("MerchForm", "\346\235\241\344\273\266\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("MerchForm", "\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        cb_condition->clear();
        cb_condition->insertItems(0, QStringList()
         << QApplication::translate("MerchForm", "\346\227\240\346\235\241\344\273\266", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\350\264\247\345\217\267", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\345\272\227\351\223\272\345\217\267", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\345\225\206\345\223\201\345\220\215", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\344\273\267\346\240\274", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\345\272\223\345\255\230", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\351\236\213\347\240\201", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\344\273\213\347\273\215\345\233\276", Q_NULLPTR)
         << QApplication::translate("MerchForm", "\346\217\217\350\277\260", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MerchForm", "\346\235\241\344\273\266\357\274\232", Q_NULLPTR));
        pb_search->setText(QApplication::translate("MerchForm", "\346\220\234\347\264\242", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MerchForm", "\346\237\245\350\257\242\347\273\223\346\236\234", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MerchForm", "\347\233\270\345\205\263\346\223\215\344\275\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("MerchForm", "\350\264\247  \345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("MerchForm", "\345\272\227\351\223\272\345\217\267\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("MerchForm", "\344\273\213\347\273\215\345\233\276\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MerchForm", "\345\225\206\345\223\201\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MerchForm", "\344\273\267  \346\240\274\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("MerchForm", "\346\217\217  \350\277\260\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MerchForm", "\345\272\223\345\255\230\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("MerchForm", "\351\236\213  \347\240\201\357\274\232", Q_NULLPTR));
        pb_modify->setText(QApplication::translate("MerchForm", "\344\277\256\346\224\271", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("MerchForm", "\345\210\240\351\231\244", Q_NULLPTR));
        pb_add->setText(QApplication::translate("MerchForm", "\346\226\260\345\242\236", Q_NULLPTR));
        pb_cancel->setText(QApplication::translate("MerchForm", "\345\217\226\346\266\210", Q_NULLPTR));
        pb_save->setText(QApplication::translate("MerchForm", "\344\277\235\345\255\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerchForm: public Ui_MerchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHFORM_H
