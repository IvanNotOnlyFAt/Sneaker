/********************************************************************************
** Form generated from reading UI file 'traderstoreitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERSTOREITEM_H
#define UI_TRADERSTOREITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderStoreItem
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *le_name;
    QLabel *label_4;
    QLineEdit *le_date;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QLineEdit *le_status;
    QPushButton *pb_delete;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *le_id;
    QLabel *label_3;
    QLineEdit *le_type;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_switch;
    QPushButton *pb_change;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *lb_photo;

    void setupUi(QWidget *TraderStoreItem)
    {
        if (TraderStoreItem->objectName().isEmpty())
            TraderStoreItem->setObjectName(QStringLiteral("TraderStoreItem"));
        TraderStoreItem->resize(1060, 152);
        TraderStoreItem->setMinimumSize(QSize(1060, 0));
        TraderStoreItem->setMaximumSize(QSize(1060, 16777215));
        TraderStoreItem->setStyleSheet(QLatin1String("QLineEdit{\n"
"background-color:transparent;\n"
"	color: rgb(85, 0, 255);\n"
"	font: 75 12pt \"Adobe Devanagari\";\n"
"}\n"
"QLineEdit{border-width:0;border-style:outset}"));
        layoutWidget = new QWidget(TraderStoreItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 10, 1041, 137));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setMinimumSize(QSize(200, 0));
        le_name->setMaximumSize(QSize(200, 16777215));
        le_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_name);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_4);

        le_date = new QLineEdit(layoutWidget);
        le_date->setObjectName(QStringLiteral("le_date"));
        le_date->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_date->sizePolicy().hasHeightForWidth());
        le_date->setSizePolicy(sizePolicy1);
        le_date->setMinimumSize(QSize(200, 0));
        le_date->setMaximumSize(QSize(200, 16777215));
        le_date->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_date);

        horizontalSpacer_3 = new QSpacerItem(22, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(105, 16777215));

        horizontalLayout_2->addWidget(label_5);

        le_status = new QLineEdit(layoutWidget);
        le_status->setObjectName(QStringLiteral("le_status"));
        le_status->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_status->sizePolicy().hasHeightForWidth());
        le_status->setSizePolicy(sizePolicy1);
        le_status->setMinimumSize(QSize(100, 0));
        le_status->setMaximumSize(QSize(100, 16777215));
        le_status->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_status);

        pb_delete = new QPushButton(layoutWidget);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        pb_delete->setMinimumSize(QSize(90, 0));
        pb_delete->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_2->addWidget(pb_delete);

        horizontalSpacer_4 = new QSpacerItem(20, 25, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_2);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy2);
        le_id->setMinimumSize(QSize(200, 0));
        le_id->setMaximumSize(QSize(200, 16777215));
        le_id->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_id);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(label_3);

        le_type = new QLineEdit(layoutWidget);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_type->sizePolicy().hasHeightForWidth());
        le_type->setSizePolicy(sizePolicy1);
        le_type->setMinimumSize(QSize(200, 0));
        le_type->setMaximumSize(QSize(200, 16777215));
        le_type->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_type);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pb_switch = new QPushButton(layoutWidget);
        pb_switch->setObjectName(QStringLiteral("pb_switch"));
        pb_switch->setMinimumSize(QSize(200, 0));
        pb_switch->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(pb_switch);

        pb_change = new QPushButton(layoutWidget);
        pb_change->setObjectName(QStringLiteral("pb_change"));
        pb_change->setMinimumSize(QSize(0, 0));
        pb_change->setMaximumSize(QSize(90, 16777215));

        horizontalLayout->addWidget(pb_change);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(1038, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(1038, 10, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 2);

        lb_photo = new QLabel(layoutWidget);
        lb_photo->setObjectName(QStringLiteral("lb_photo"));
        lb_photo->setMinimumSize(QSize(103, 81));
        lb_photo->setMaximumSize(QSize(103, 81));

        gridLayout->addWidget(lb_photo, 1, 0, 2, 1);


        retranslateUi(TraderStoreItem);

        QMetaObject::connectSlotsByName(TraderStoreItem);
    } // setupUi

    void retranslateUi(QWidget *TraderStoreItem)
    {
        TraderStoreItem->setWindowTitle(QApplication::translate("TraderStoreItem", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TraderStoreItem", "\345\272\227\351\223\272\345\220\215\357\274\232", Q_NULLPTR));
        le_name->setText(QString());
        label_4->setText(QApplication::translate("TraderStoreItem", "\345\274\200\345\272\227\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        le_date->setText(QString());
        label_5->setText(QApplication::translate("TraderStoreItem", " \345\272\227\351\223\272\345\275\223\345\211\215\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        le_status->setText(QString());
        pb_delete->setText(QApplication::translate("TraderStoreItem", "\346\263\250 \351\224\200", Q_NULLPTR));
        label_2->setText(QApplication::translate("TraderStoreItem", "\345\272\227\351\223\272ID:", Q_NULLPTR));
        le_id->setText(QString());
        label_3->setText(QApplication::translate("TraderStoreItem", "\344\270\273\350\246\201\347\273\217\350\220\245\357\274\232", Q_NULLPTR));
        le_type->setText(QString());
        pb_switch->setText(QApplication::translate("TraderStoreItem", "\346\211\223 \347\203\212 / \350\220\245 \344\270\232", Q_NULLPTR));
        pb_change->setText(QApplication::translate("TraderStoreItem", "\346\233\264 \346\224\271", Q_NULLPTR));
        lb_photo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TraderStoreItem: public Ui_TraderStoreItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERSTOREITEM_H
