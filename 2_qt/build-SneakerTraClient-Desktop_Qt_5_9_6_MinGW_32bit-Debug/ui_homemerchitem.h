/********************************************************************************
** Form generated from reading UI file 'homemerchitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEMERCHITEM_H
#define UI_HOMEMERCHITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeMerchItem
{
public:
    QPushButton *pb_merch;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HomeMerchItem)
    {
        if (HomeMerchItem->objectName().isEmpty())
            HomeMerchItem->setObjectName(QStringLiteral("HomeMerchItem"));
        HomeMerchItem->resize(260, 300);
        HomeMerchItem->setMinimumSize(QSize(260, 0));
        HomeMerchItem->setMaximumSize(QSize(260, 16777215));
        pb_merch = new QPushButton(HomeMerchItem);
        pb_merch->setObjectName(QStringLiteral("pb_merch"));
        pb_merch->setGeometry(QRect(7, 227, 241, 61));
        widget = new QWidget(HomeMerchItem);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 242, 214));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(13, 197, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(200, 200));
        label->setMaximumSize(QSize(200, 200));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(13, 197, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(238, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 3);


        retranslateUi(HomeMerchItem);

        QMetaObject::connectSlotsByName(HomeMerchItem);
    } // setupUi

    void retranslateUi(QWidget *HomeMerchItem)
    {
        HomeMerchItem->setWindowTitle(QApplication::translate("HomeMerchItem", "Form", Q_NULLPTR));
        pb_merch->setText(QApplication::translate("HomeMerchItem", "15\344\270\252\345\255\227\347\254\246", Q_NULLPTR));
        label->setText(QApplication::translate("HomeMerchItem", "   ==\345\233\276\347\211\207\345\212\240\350\275\275\345\244\261\350\264\245==", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HomeMerchItem: public Ui_HomeMerchItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEMERCHITEM_H
