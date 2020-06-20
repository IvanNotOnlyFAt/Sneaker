/********************************************************************************
** Form generated from reading UI file 'traderinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERINFOFORM_H
#define UI_TRADERINFOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderInfoForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLineEdit *le_id;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *le_name;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *le_idnum;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *le_tele;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_6;
    QLabel *label_4;

    void setupUi(QWidget *TraderInfoForm)
    {
        if (TraderInfoForm->objectName().isEmpty())
            TraderInfoForm->setObjectName(QStringLiteral("TraderInfoForm"));
        TraderInfoForm->resize(1110, 800);
        TraderInfoForm->setStyleSheet(QLatin1String("QWidget#TraderInfoForm{\n"
"background-image: url(:/images/6.png);\n"
"}\n"
"QLabel{\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit{\n"
"background-color:transparent;\n"
"	\n"
"	color: rgb(255, 255, 0);\n"
"	font: 75 16pt \"Sitka\";\n"
"}\n"
"QLineEdit{border-width:0;border-style:outset}"));
        layoutWidget = new QWidget(TraderInfoForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(500, 130, 561, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(298, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setMaximumSize(QSize(16777215, 60));
        le_id->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_id, 2, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(308, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 2);

        le_name = new QLineEdit(layoutWidget);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        sizePolicy.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy);
        le_name->setMaximumSize(QSize(16777215, 60));
        le_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_name, 4, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setSizeIncrement(QSize(0, 0));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setSizeIncrement(QSize(0, 0));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        le_idnum = new QLineEdit(layoutWidget);
        le_idnum->setObjectName(QStringLiteral("le_idnum"));
        le_idnum->setEnabled(false);
        sizePolicy.setHeightForWidth(le_idnum->sizePolicy().hasHeightForWidth());
        le_idnum->setSizePolicy(sizePolicy);
        le_idnum->setMaximumSize(QSize(16777215, 60));
        le_idnum->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_idnum, 6, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(308, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 9, 0, 1, 2);

        le_tele = new QLineEdit(layoutWidget);
        le_tele->setObjectName(QStringLiteral("le_tele"));
        le_tele->setEnabled(false);
        sizePolicy.setHeightForWidth(le_tele->sizePolicy().hasHeightForWidth());
        le_tele->setSizePolicy(sizePolicy);
        le_tele->setMaximumSize(QSize(16777215, 60));
        le_tele->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_tele, 8, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(308, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(288, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 7, 0, 1, 2);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setSizeIncrement(QSize(0, 0));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setMaximumSize(QSize(16777215, 120));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);


        retranslateUi(TraderInfoForm);

        QMetaObject::connectSlotsByName(TraderInfoForm);
    } // setupUi

    void retranslateUi(QWidget *TraderInfoForm)
    {
        TraderInfoForm->setWindowTitle(QApplication::translate("TraderInfoForm", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TraderInfoForm", "\350\264\246    \345\217\267\357\274\232", Q_NULLPTR));
        le_id->setText(QString());
        le_name->setText(QString());
        label_2->setText(QApplication::translate("TraderInfoForm", "\345\247\223    \345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("TraderInfoForm", "\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        le_idnum->setText(QString());
        le_tele->setText(QString());
        label_6->setText(QApplication::translate("TraderInfoForm", "\347\224\265    \350\257\235\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("TraderInfoForm", "\351\236\213  \345\225\206  \344\277\241  \346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderInfoForm: public Ui_TraderInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERINFOFORM_H
