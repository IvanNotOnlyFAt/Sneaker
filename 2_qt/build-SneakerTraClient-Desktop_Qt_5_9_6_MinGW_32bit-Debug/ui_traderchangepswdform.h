/********************************************************************************
** Form generated from reading UI file 'traderchangepswdform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERCHANGEPSWDFORM_H
#define UI_TRADERCHANGEPSWDFORM_H

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

class Ui_TraderChangePswdForm
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLineEdit *le_again;
    QPushButton *pushButton;
    QLineEdit *le_new;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_old;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *TraderChangePswdForm)
    {
        if (TraderChangePswdForm->objectName().isEmpty())
            TraderChangePswdForm->setObjectName(QStringLiteral("TraderChangePswdForm"));
        TraderChangePswdForm->resize(1110, 800);
        widget = new QWidget(TraderChangePswdForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(300, 170, 431, 381));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 2);

        le_again = new QLineEdit(widget);
        le_again->setObjectName(QStringLiteral("le_again"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(14);
        le_again->setFont(font);

        gridLayout->addWidget(le_again, 6, 1, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 8, 0, 1, 2);

        le_new = new QLineEdit(widget);
        le_new->setObjectName(QStringLiteral("le_new"));
        le_new->setFont(font);

        gridLayout->addWidget(le_new, 4, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font1.setPointSize(36);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        le_old = new QLineEdit(widget);
        le_old->setObjectName(QStringLiteral("le_old"));
        le_old->setFont(font);

        gridLayout->addWidget(le_old, 2, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 7, 0, 1, 2);


        retranslateUi(TraderChangePswdForm);

        QMetaObject::connectSlotsByName(TraderChangePswdForm);
    } // setupUi

    void retranslateUi(QWidget *TraderChangePswdForm)
    {
        TraderChangePswdForm->setWindowTitle(QApplication::translate("TraderChangePswdForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TraderChangePswdForm", "\347\241\256  \345\256\232  \344\277\256  \346\224\271", Q_NULLPTR));
        label_4->setText(QApplication::translate("TraderChangePswdForm", "\345\206\215\346\254\241\350\276\223\345\205\245\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("TraderChangePswdForm", "\345\257\206  \347\240\201  \344\277\256  \346\224\271", Q_NULLPTR));
        label_2->setText(QApplication::translate("TraderChangePswdForm", "\345\216\237 \345\257\206 \347\240\201 \357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("TraderChangePswdForm", "\346\226\260 \345\257\206 \347\240\201 \357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderChangePswdForm: public Ui_TraderChangePswdForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERCHANGEPSWDFORM_H
