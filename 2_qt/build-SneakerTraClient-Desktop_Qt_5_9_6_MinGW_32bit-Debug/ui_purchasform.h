/********************************************************************************
** Form generated from reading UI file 'purchasform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASFORM_H
#define UI_PURCHASFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PurchasForm
{
public:
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QLineEdit *le_merchname;
    QLabel *ib_hostPhoto;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_storename;
    QLCDNumber *lcdNumber_price;
    QLabel *label_2;
    QLineEdit *le_storeID;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *sB_num;
    QComboBox *cb_size;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_6;
    QLineEdit *le_stock;
    QPushButton *pb_purchase;
    QPushButton *pb_addTerolly;
    QLabel *label_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget_2;
    QTextEdit *te_descri;

    void setupUi(QWidget *PurchasForm)
    {
        if (PurchasForm->objectName().isEmpty())
            PurchasForm->setObjectName(QStringLiteral("PurchasForm"));
        PurchasForm->resize(700, 800);
        gridLayout_12 = new QGridLayout(PurchasForm);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        groupBox_3 = new QGroupBox(PurchasForm);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_10 = new QGridLayout(groupBox_3);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        le_merchname = new QLineEdit(groupBox_3);
        le_merchname->setObjectName(QStringLiteral("le_merchname"));

        gridLayout_9->addWidget(le_merchname, 0, 0, 1, 2);

        ib_hostPhoto = new QLabel(groupBox_3);
        ib_hostPhoto->setObjectName(QStringLiteral("ib_hostPhoto"));
        ib_hostPhoto->setMinimumSize(QSize(200, 200));
        ib_hostPhoto->setMaximumSize(QSize(200, 200));

        gridLayout_9->addWidget(ib_hostPhoto, 1, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(10, 80, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 2, 3, 1);

        le_storename = new QLineEdit(groupBox_3);
        le_storename->setObjectName(QStringLiteral("le_storename"));
        le_storename->setMinimumSize(QSize(150, 0));

        gridLayout_7->addWidget(le_storename, 0, 3, 1, 3);

        lcdNumber_price = new QLCDNumber(groupBox_3);
        lcdNumber_price->setObjectName(QStringLiteral("lcdNumber_price"));
        lcdNumber_price->setMinimumSize(QSize(150, 0));
        lcdNumber_price->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        lcdNumber_price->setFont(font);
        lcdNumber_price->setMode(QLCDNumber::Dec);
        lcdNumber_price->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_7->addWidget(lcdNumber_price, 1, 1, 2, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(40, 20));
        label_2->setMaximumSize(QSize(40, 20));

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1);

        le_storeID = new QLineEdit(groupBox_3);
        le_storeID->setObjectName(QStringLiteral("le_storeID"));
        le_storeID->setMinimumSize(QSize(150, 0));
        le_storeID->setMaximumSize(QSize(150, 16777215));

        gridLayout_7->addWidget(le_storeID, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(40, 50));
        label_3->setMaximumSize(QSize(40, 50));

        gridLayout_7->addWidget(label_3, 1, 0, 2, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(40, 16777215));

        gridLayout_7->addWidget(label_7, 2, 3, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(40, 16777215));

        gridLayout_7->addWidget(label_8, 1, 3, 1, 1);

        sB_num = new QSpinBox(groupBox_3);
        sB_num->setObjectName(QStringLiteral("sB_num"));
        sB_num->setMaximumSize(QSize(50, 16777215));

        gridLayout_7->addWidget(sB_num, 1, 4, 1, 1);

        cb_size = new QComboBox(groupBox_3);
        cb_size->setObjectName(QStringLiteral("cb_size"));
        cb_size->setMaximumSize(QSize(50, 16777215));

        gridLayout_7->addWidget(cb_size, 2, 4, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(388, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_8->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        le_stock = new QLineEdit(groupBox_3);
        le_stock->setObjectName(QStringLiteral("le_stock"));
        le_stock->setMaximumSize(QSize(60, 16777215));

        gridLayout_6->addWidget(le_stock, 1, 0, 1, 1);

        pb_purchase = new QPushButton(groupBox_3);
        pb_purchase->setObjectName(QStringLiteral("pb_purchase"));
        pb_purchase->setMinimumSize(QSize(150, 60));
        pb_purchase->setMaximumSize(QSize(180, 60));

        gridLayout_6->addWidget(pb_purchase, 0, 2, 2, 1);

        pb_addTerolly = new QPushButton(groupBox_3);
        pb_addTerolly->setObjectName(QStringLiteral("pb_addTerolly"));
        pb_addTerolly->setMinimumSize(QSize(150, 60));
        pb_addTerolly->setMaximumSize(QSize(180, 60));

        gridLayout_6->addWidget(pb_addTerolly, 0, 1, 2, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16677, 15));

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 1, 1, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(PurchasForm);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        listWidget_2 = new QListWidget(groupBox_4);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_2->sizePolicy().hasHeightForWidth());
        listWidget_2->setSizePolicy(sizePolicy);
        listWidget_2->setMinimumSize(QSize(0, 400));
        listWidget_2->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_5->addWidget(listWidget_2, 1, 0, 1, 1);

        te_descri = new QTextEdit(groupBox_4);
        te_descri->setObjectName(QStringLiteral("te_descri"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(te_descri->sizePolicy().hasHeightForWidth());
        te_descri->setSizePolicy(sizePolicy1);
        te_descri->setMinimumSize(QSize(0, 80));
        te_descri->setMaximumSize(QSize(16777215, 80));

        gridLayout_5->addWidget(te_descri, 0, 0, 1, 1);


        gridLayout_11->addWidget(groupBox_4, 1, 0, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);


        retranslateUi(PurchasForm);

        QMetaObject::connectSlotsByName(PurchasForm);
    } // setupUi

    void retranslateUi(QWidget *PurchasForm)
    {
        PurchasForm->setWindowTitle(QApplication::translate("PurchasForm", "Form", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("PurchasForm", "\345\225\206\345\223\201\350\257\246\346\203\205", Q_NULLPTR));
        ib_hostPhoto->setText(QApplication::translate("PurchasForm", "=========\345\212\240\350\275\275\345\244\261\350\264\245=========", Q_NULLPTR));
        label_2->setText(QApplication::translate("PurchasForm", "\345\225\206\345\272\227\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("PurchasForm", "\344\273\267\346\240\274\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("PurchasForm", "\345\260\272\347\240\201\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("PurchasForm", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        pb_purchase->setText(QApplication::translate("PurchasForm", "\347\253\213\345\215\263\350\264\255\344\271\260", Q_NULLPTR));
        pb_addTerolly->setText(QApplication::translate("PurchasForm", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", Q_NULLPTR));
        label_6->setText(QApplication::translate("PurchasForm", " \345\272\223\345\255\230\357\274\232", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("PurchasForm", "\345\233\276\347\211\207\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PurchasForm: public Ui_PurchasForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASFORM_H
