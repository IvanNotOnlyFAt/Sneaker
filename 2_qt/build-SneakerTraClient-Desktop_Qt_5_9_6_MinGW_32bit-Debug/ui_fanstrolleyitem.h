/********************************************************************************
** Form generated from reading UI file 'fanstrolleyitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSTROLLEYITEM_H
#define UI_FANSTROLLEYITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FansTrolleyItem
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *le_troellyid_2;
    QLabel *label_8;
    QLineEdit *le_merchid_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *le_storename;
    QLabel *label_2;
    QLineEdit *le_merchname;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *le_merchsize;
    QLabel *label_3;
    QLineEdit *le_price;
    QLabel *label_4;
    QLineEdit *le_num;
    QLabel *label_9;
    QLineEdit *le_ordertime;
    QLabel *lb_photo;

    void setupUi(QWidget *FansTrolleyItem)
    {
        if (FansTrolleyItem->objectName().isEmpty())
            FansTrolleyItem->setObjectName(QStringLiteral("FansTrolleyItem"));
        FansTrolleyItem->resize(1060, 170);
        FansTrolleyItem->setMinimumSize(QSize(1060, 170));
        FansTrolleyItem->setMaximumSize(QSize(1060, 170));
        layoutWidget = new QWidget(FansTrolleyItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1038, 148));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(60, 0));
        label_10->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_10);

        le_troellyid_2 = new QLineEdit(layoutWidget);
        le_troellyid_2->setObjectName(QStringLiteral("le_troellyid_2"));
        le_troellyid_2->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_troellyid_2->sizePolicy().hasHeightForWidth());
        le_troellyid_2->setSizePolicy(sizePolicy);
        le_troellyid_2->setMinimumSize(QSize(300, 30));
        le_troellyid_2->setMaximumSize(QSize(200, 16777215));
        le_troellyid_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(le_troellyid_2);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(60, 0));
        label_8->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_8);

        le_merchid_2 = new QLineEdit(layoutWidget);
        le_merchid_2->setObjectName(QStringLiteral("le_merchid_2"));
        le_merchid_2->setEnabled(false);
        sizePolicy.setHeightForWidth(le_merchid_2->sizePolicy().hasHeightForWidth());
        le_merchid_2->setSizePolicy(sizePolicy);
        le_merchid_2->setMinimumSize(QSize(300, 30));
        le_merchid_2->setMaximumSize(QSize(200, 16777215));
        le_merchid_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(le_merchid_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_7);

        le_storename = new QLineEdit(layoutWidget);
        le_storename->setObjectName(QStringLiteral("le_storename"));
        le_storename->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_storename->sizePolicy().hasHeightForWidth());
        le_storename->setSizePolicy(sizePolicy1);
        le_storename->setMinimumSize(QSize(200, 30));
        le_storename->setMaximumSize(QSize(200, 16777215));
        le_storename->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_storename);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(70, 0));
        label_2->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_2);

        le_merchname = new QLineEdit(layoutWidget);
        le_merchname->setObjectName(QStringLiteral("le_merchname"));
        le_merchname->setEnabled(false);
        sizePolicy.setHeightForWidth(le_merchname->sizePolicy().hasHeightForWidth());
        le_merchname->setSizePolicy(sizePolicy);
        le_merchname->setMinimumSize(QSize(300, 30));
        le_merchname->setMaximumSize(QSize(300, 16777215));
        le_merchname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(le_merchname);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_6);

        le_merchsize = new QLineEdit(layoutWidget);
        le_merchsize->setObjectName(QStringLiteral("le_merchsize"));
        le_merchsize->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_merchsize->sizePolicy().hasHeightForWidth());
        le_merchsize->setSizePolicy(sizePolicy1);
        le_merchsize->setMinimumSize(QSize(100, 30));
        le_merchsize->setMaximumSize(QSize(100, 16777215));
        le_merchsize->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_merchsize);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_3);

        le_price = new QLineEdit(layoutWidget);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_price->sizePolicy().hasHeightForWidth());
        le_price->setSizePolicy(sizePolicy1);
        le_price->setMinimumSize(QSize(100, 30));
        le_price->setMaximumSize(QSize(100, 16777215));
        le_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_price);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_4);

        le_num = new QLineEdit(layoutWidget);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_num->sizePolicy().hasHeightForWidth());
        le_num->setSizePolicy(sizePolicy1);
        le_num->setMinimumSize(QSize(100, 30));
        le_num->setMaximumSize(QSize(100, 16777215));
        le_num->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_num);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(70, 0));
        label_9->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(label_9);

        le_ordertime = new QLineEdit(layoutWidget);
        le_ordertime->setObjectName(QStringLiteral("le_ordertime"));
        le_ordertime->setEnabled(false);
        sizePolicy.setHeightForWidth(le_ordertime->sizePolicy().hasHeightForWidth());
        le_ordertime->setSizePolicy(sizePolicy);
        le_ordertime->setMinimumSize(QSize(200, 30));
        le_ordertime->setMaximumSize(QSize(200, 16777215));
        le_ordertime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(le_ordertime);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        lb_photo = new QLabel(layoutWidget);
        lb_photo->setObjectName(QStringLiteral("lb_photo"));
        sizePolicy1.setHeightForWidth(lb_photo->sizePolicy().hasHeightForWidth());
        lb_photo->setSizePolicy(sizePolicy1);
        lb_photo->setMinimumSize(QSize(100, 100));
        lb_photo->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(lb_photo, 1, 0, 2, 1);


        retranslateUi(FansTrolleyItem);

        QMetaObject::connectSlotsByName(FansTrolleyItem);
    } // setupUi

    void retranslateUi(QWidget *FansTrolleyItem)
    {
        FansTrolleyItem->setWindowTitle(QApplication::translate("FansTrolleyItem", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("FansTrolleyItem", "\346\224\266\350\227\217\347\274\226\345\217\267ID:", Q_NULLPTR));
        le_troellyid_2->setText(QString());
        label_8->setText(QApplication::translate("FansTrolleyItem", "\345\225\206\345\223\201ID:", Q_NULLPTR));
        le_merchid_2->setText(QString());
        label_7->setText(QApplication::translate("FansTrolleyItem", "\345\225\206\345\272\227\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        le_storename->setText(QString());
        label_2->setText(QApplication::translate("FansTrolleyItem", "\345\225\206\345\223\201\345\220\215\347\247\260:", Q_NULLPTR));
        le_merchname->setText(QString());
        label_6->setText(QApplication::translate("FansTrolleyItem", "\351\236\213   \347\240\201\357\274\232", Q_NULLPTR));
        le_merchsize->setText(QString());
        label_3->setText(QApplication::translate("FansTrolleyItem", "\345\215\225\344\273\267 \357\274\232", Q_NULLPTR));
        le_price->setText(QString());
        label_4->setText(QApplication::translate("FansTrolleyItem", "\346\225\260\351\207\217 \357\274\232", Q_NULLPTR));
        le_num->setText(QString());
        label_9->setText(QApplication::translate("FansTrolleyItem", "\346\217\220\344\272\244\346\227\266\351\227\264:", Q_NULLPTR));
        le_ordertime->setText(QString());
        lb_photo->setText(QApplication::translate("FansTrolleyItem", " =\345\212\240\350\275\275\345\244\261\350\264\245=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansTrolleyItem: public Ui_FansTrolleyItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSTROLLEYITEM_H
