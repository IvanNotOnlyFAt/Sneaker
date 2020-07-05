/********************************************************************************
** Form generated from reading UI file 'tradermerchform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERMERCHFORM_H
#define UI_TRADERMERCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TraderMerchForm
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *lb_photo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_id;
    QLabel *label;
    QLineEdit *le_name;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *le_storeID;
    QLabel *label_3;
    QLineEdit *le_price;
    QLabel *label_5;
    QLineEdit *le_stock;
    QLabel *label_6;
    QLineEdit *le_adphoto;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *le_size;
    QTextEdit *te_descri;

    void setupUi(QWidget *TraderMerchForm)
    {
        if (TraderMerchForm->objectName().isEmpty())
            TraderMerchForm->setObjectName(QStringLiteral("TraderMerchForm"));
        TraderMerchForm->resize(1060, 230);
        TraderMerchForm->setStyleSheet(QLatin1String("QLineEdit{\n"
"background-color:transparent;\n"
"		\n"
"\n"
"	color: rgb(85, 0, 0);\n"
"	font: 75 12pt \"Adobe Devanagari\";\n"
"	border-width:0;border-style:outset\n"
"}\n"
"QTextEdit{\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 12pt \"Adobe Devanagari\";\n"
"\n"
"}\n"
""));
        gridLayout_2 = new QGridLayout(TraderMerchForm);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lb_photo = new QLabel(TraderMerchForm);
        lb_photo->setObjectName(QStringLiteral("lb_photo"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lb_photo->sizePolicy().hasHeightForWidth());
        lb_photo->setSizePolicy(sizePolicy);
        lb_photo->setMinimumSize(QSize(200, 200));
        lb_photo->setMaximumSize(QSize(200, 200));

        gridLayout->addWidget(lb_photo, 0, 0, 4, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(TraderMerchForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_2);

        le_id = new QLineEdit(TraderMerchForm);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy1);
        le_id->setMinimumSize(QSize(200, 30));
        le_id->setMaximumSize(QSize(200, 16777215));
        le_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(le_id);

        label = new QLabel(TraderMerchForm);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label);

        le_name = new QLineEdit(TraderMerchForm);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setEnabled(false);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy2);
        le_name->setMinimumSize(QSize(400, 30));
        le_name->setMaximumSize(QSize(400, 16777215));
        le_name->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_name);


        gridLayout->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(TraderMerchForm);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_7);

        le_storeID = new QLineEdit(TraderMerchForm);
        le_storeID->setObjectName(QStringLiteral("le_storeID"));
        le_storeID->setEnabled(false);
        sizePolicy.setHeightForWidth(le_storeID->sizePolicy().hasHeightForWidth());
        le_storeID->setSizePolicy(sizePolicy);
        le_storeID->setMinimumSize(QSize(100, 30));
        le_storeID->setMaximumSize(QSize(100, 16777215));
        le_storeID->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_storeID);

        label_3 = new QLabel(TraderMerchForm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_3);

        le_price = new QLineEdit(TraderMerchForm);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setEnabled(false);
        sizePolicy.setHeightForWidth(le_price->sizePolicy().hasHeightForWidth());
        le_price->setSizePolicy(sizePolicy);
        le_price->setMinimumSize(QSize(100, 30));
        le_price->setMaximumSize(QSize(100, 16777215));
        le_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_price);

        label_5 = new QLabel(TraderMerchForm);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(70, 0));
        label_5->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_5);

        le_stock = new QLineEdit(TraderMerchForm);
        le_stock->setObjectName(QStringLiteral("le_stock"));
        le_stock->setEnabled(false);
        sizePolicy.setHeightForWidth(le_stock->sizePolicy().hasHeightForWidth());
        le_stock->setSizePolicy(sizePolicy);
        le_stock->setMinimumSize(QSize(100, 30));
        le_stock->setMaximumSize(QSize(100, 16777215));
        le_stock->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_stock);

        label_6 = new QLabel(TraderMerchForm);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_6);

        le_adphoto = new QLineEdit(TraderMerchForm);
        le_adphoto->setObjectName(QStringLiteral("le_adphoto"));
        le_adphoto->setEnabled(false);
        sizePolicy.setHeightForWidth(le_adphoto->sizePolicy().hasHeightForWidth());
        le_adphoto->setSizePolicy(sizePolicy);
        le_adphoto->setMinimumSize(QSize(100, 30));
        le_adphoto->setMaximumSize(QSize(100, 16777215));
        le_adphoto->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_adphoto);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(TraderMerchForm);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(label_4);

        le_size = new QLineEdit(TraderMerchForm);
        le_size->setObjectName(QStringLiteral("le_size"));
        le_size->setEnabled(false);
        sizePolicy.setHeightForWidth(le_size->sizePolicy().hasHeightForWidth());
        le_size->setSizePolicy(sizePolicy);
        le_size->setMinimumSize(QSize(700, 30));
        le_size->setMaximumSize(QSize(700, 16777215));
        le_size->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_size);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        te_descri = new QTextEdit(TraderMerchForm);
        te_descri->setObjectName(QStringLiteral("te_descri"));
        te_descri->setEnabled(false);

        gridLayout->addWidget(te_descri, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(TraderMerchForm);

        QMetaObject::connectSlotsByName(TraderMerchForm);
    } // setupUi

    void retranslateUi(QWidget *TraderMerchForm)
    {
        TraderMerchForm->setWindowTitle(QApplication::translate("TraderMerchForm", "Form", Q_NULLPTR));
        lb_photo->setText(QApplication::translate("TraderMerchForm", " ======\345\233\276\347\211\207\345\212\240\350\275\275\345\244\261\350\264\245=====", Q_NULLPTR));
        label_2->setText(QApplication::translate("TraderMerchForm", "\345\225\206\345\223\201ID:", Q_NULLPTR));
        le_id->setText(QString());
        label->setText(QApplication::translate("TraderMerchForm", "\345\225\206\345\223\201\345\220\215\357\274\232", Q_NULLPTR));
        le_name->setText(QString());
        label_7->setText(QApplication::translate("TraderMerchForm", "\346\211\200\345\261\236\345\225\206\345\272\227\357\274\232", Q_NULLPTR));
        le_storeID->setText(QString());
        label_3->setText(QApplication::translate("TraderMerchForm", "\344\273\267\346\240\274 \357\274\232", Q_NULLPTR));
        le_price->setText(QString());
        label_5->setText(QApplication::translate("TraderMerchForm", "\345\272\223\345\255\230 \357\274\232", Q_NULLPTR));
        le_stock->setText(QString());
        label_6->setText(QApplication::translate("TraderMerchForm", "\345\271\277\345\221\212\345\233\276\357\274\232", Q_NULLPTR));
        le_adphoto->setText(QString());
        label_4->setText(QApplication::translate("TraderMerchForm", "\345\260\272  \347\240\201 \357\274\232", Q_NULLPTR));
        le_size->setText(QString());
        te_descri->setHtml(QApplication::translate("TraderMerchForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Adobe Devanagari'; font-size:12pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderMerchForm: public Ui_TraderMerchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERMERCHFORM_H
