/********************************************************************************
** Form generated from reading UI file 'fansinfoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FANSINFOFORM_H
#define UI_FANSINFOFORM_H

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

class Ui_FansInfoForm
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *le_nickname;
    QLineEdit *le_tele;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *le_id;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QWidget *FansInfoForm)
    {
        if (FansInfoForm->objectName().isEmpty())
            FansInfoForm->setObjectName(QStringLiteral("FansInfoForm"));
        FansInfoForm->resize(1110, 800);
        FansInfoForm->setStyleSheet(QLatin1String("QWidget#FansInfoForm{\n"
"background-image: url(:/images/back9.png);\n"
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
        layoutWidget = new QWidget(FansInfoForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(550, 240, 531, 461));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        le_nickname = new QLineEdit(layoutWidget);
        le_nickname->setObjectName(QStringLiteral("le_nickname"));
        le_nickname->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_nickname->sizePolicy().hasHeightForWidth());
        le_nickname->setSizePolicy(sizePolicy);
        le_nickname->setMaximumSize(QSize(16777215, 60));
        le_nickname->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_nickname, 4, 1, 1, 1);

        le_tele = new QLineEdit(layoutWidget);
        le_tele->setObjectName(QStringLiteral("le_tele"));
        le_tele->setEnabled(false);
        sizePolicy.setHeightForWidth(le_tele->sizePolicy().hasHeightForWidth());
        le_tele->setSizePolicy(sizePolicy);
        le_tele->setMaximumSize(QSize(16777215, 60));
        le_tele->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_tele, 6, 1, 1, 1);

        verticalSpacer = new QSpacerItem(10, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        le_id = new QLineEdit(layoutWidget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setMaximumSize(QSize(16777215, 60));
        le_id->setLayoutDirection(Qt::LeftToRight);
        le_id->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(le_id, 2, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 7, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(true);
        label_4->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 2);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setSizeIncrement(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setSizeIncrement(QSize(0, 0));
        label->setFont(font1);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setSizeIncrement(QSize(0, 0));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);


        retranslateUi(FansInfoForm);

        QMetaObject::connectSlotsByName(FansInfoForm);
    } // setupUi

    void retranslateUi(QWidget *FansInfoForm)
    {
        FansInfoForm->setWindowTitle(QApplication::translate("FansInfoForm", "Form", Q_NULLPTR));
        le_id->setText(QString());
        label_4->setText(QApplication::translate("FansInfoForm", "\351\236\213  \345\217\213  \344\277\241  \346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("FansInfoForm", "\346\230\265 \347\247\260\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("FansInfoForm", "\350\264\246 \345\217\267\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("FansInfoForm", "\346\211\213 \346\234\272\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FansInfoForm: public Ui_FansInfoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FANSINFOFORM_H
