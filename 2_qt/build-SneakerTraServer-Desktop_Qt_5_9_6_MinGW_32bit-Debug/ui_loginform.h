/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pb_logup;
    QLineEdit *le_id;
    QLabel *label_2;
    QPushButton *pb_forget;
    QLineEdit *le_pswd;
    QPushButton *pb_login;
    QLabel *label;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QLabel *lb_top1;
    QLabel *lb_top0;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName(QStringLiteral("LoginForm"));
        LoginForm->resize(1200, 800);
        LoginForm->setStyleSheet(QLatin1String("QWidget#LoginForm{\n"
"background-image: url(:/images/back3.png);\n"
"}\n"
""));
        widget = new QWidget(LoginForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(550, 140, 570, 491));
        widget->setStyleSheet(QLatin1String("QLabel{\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#pb_login{\n"
"    \n"
"	background-color: rgb(84, 204, 255);\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 25px;\n"
"	\n"
"	selection-color: rgb(0, 170, 255);\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"}\n"
"QPushButton#pb_logup{\n"
"    font: bold ;\n"
"	color: rgb(255, 255, 255);\n"
"	background: transparent;\n"
"}\n"
"QPushButton#pb_forget{\n"
"    font: bold ;\n"
"	color: rgb(255, 255, 255);\n"
"	background: transparent;\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pb_logup = new QPushButton(widget);
        pb_logup->setObjectName(QStringLiteral("pb_logup"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pb_logup->sizePolicy().hasHeightForWidth());
        pb_logup->setSizePolicy(sizePolicy);
        pb_logup->setMinimumSize(QSize(0, 0));
        pb_logup->setMaximumSize(QSize(80, 16777215));
        pb_logup->setFlat(true);

        gridLayout->addWidget(pb_logup, 10, 2, 1, 1);

        le_id = new QLineEdit(widget);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy1);
        le_id->setMinimumSize(QSize(380, 45));
        le_id->setMaximumSize(QSize(16777215, 45));
        QFont font;
        font.setFamily(QStringLiteral("Bahnschrift SemiLight"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        le_id->setFont(font);
        le_id->setFrame(true);
        le_id->setEchoMode(QLineEdit::Normal);

        gridLayout->addWidget(le_id, 5, 1, 1, 3);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(20);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        pb_forget = new QPushButton(widget);
        pb_forget->setObjectName(QStringLiteral("pb_forget"));
        pb_forget->setMaximumSize(QSize(120, 16777215));
        pb_forget->setFlat(true);

        gridLayout->addWidget(pb_forget, 10, 3, 1, 1);

        le_pswd = new QLineEdit(widget);
        le_pswd->setObjectName(QStringLiteral("le_pswd"));
        le_pswd->setMinimumSize(QSize(370, 45));
        le_pswd->setMaximumSize(QSize(16777215, 45));
        le_pswd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(le_pswd, 7, 1, 1, 3);

        pb_login = new QPushButton(widget);
        pb_login->setObjectName(QStringLiteral("pb_login"));
        pb_login->setMinimumSize(QSize(266, 70));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        pb_login->setFont(font2);

        gridLayout->addWidget(pb_login, 9, 0, 1, 4);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 0));
        label->setMaximumSize(QSize(100, 16777215));
        label->setFont(font1);

        gridLayout->addWidget(label, 5, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(88, 0));

        gridLayout->addWidget(label_3, 3, 0, 1, 4);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 4);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_3, 6, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_4, 8, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 10, 0, 1, 2);

        lb_top1 = new QLabel(widget);
        lb_top1->setObjectName(QStringLiteral("lb_top1"));
        lb_top1->setMinimumSize(QSize(380, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Black"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        lb_top1->setFont(font3);
        lb_top1->setStyleSheet(QLatin1String("QLabel{\n"
"color: rgb(0, 255, 255);\n"
"}"));

        gridLayout->addWidget(lb_top1, 2, 0, 1, 4);

        lb_top0 = new QLabel(widget);
        lb_top0->setObjectName(QStringLiteral("lb_top0"));
        lb_top0->setFont(font3);
        lb_top0->setStyleSheet(QLatin1String("QLabel{\n"
"color: rgb(0, 255, 255);\n"
"}"));

        gridLayout->addWidget(lb_top0, 0, 0, 1, 4);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QApplication::translate("LoginForm", "Form", Q_NULLPTR));
        pb_logup->setText(QApplication::translate("LoginForm", "\345\205\215\350\264\271\346\263\250\345\206\214", Q_NULLPTR));
        le_id->setText(QApplication::translate("LoginForm", "admin", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginForm", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        pb_forget->setText(QApplication::translate("LoginForm", "\345\277\230\350\256\260\345\257\206\347\240\201", Q_NULLPTR));
        le_pswd->setText(QApplication::translate("LoginForm", "admin", Q_NULLPTR));
        pb_login->setText(QApplication::translate("LoginForm", "\347\253\213     \345\215\263    \347\231\273    \345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("LoginForm", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("LoginForm", "                                                     <\346\234\215\345\212\241\345\231\250\347\211\210>", Q_NULLPTR));
        lb_top1->setText(QApplication::translate("LoginForm", "         SNEAKER | \345\220\276\351\236\213", Q_NULLPTR));
        lb_top0->setText(QApplication::translate("LoginForm", "             \346\254\242   \350\277\216   \347\231\273   \351\231\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
