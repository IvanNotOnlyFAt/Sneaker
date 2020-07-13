/********************************************************************************
** Form generated from reading UI file 'tradertranscitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADERTRANSCITEM_H
#define UI_TRADERTRANSCITEM_H

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

class Ui_TraderTranscItem
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *le_transactionid;
    QLabel *label_8;
    QLineEdit *le_troellyid;
    QLabel *label_11;
    QLineEdit *le_fansID;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *le_storeID;
    QLabel *label_2;
    QLineEdit *le_id;
    QLabel *label_9;
    QLineEdit *le_ordertime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *le_merchsize;
    QLabel *label_3;
    QLineEdit *le_price;
    QLabel *label_4;
    QLineEdit *le_num;
    QLabel *label_5;
    QLineEdit *le_num_2;
    QLabel *lb_photo;

    void setupUi(QWidget *TraderTranscItem)
    {
        if (TraderTranscItem->objectName().isEmpty())
            TraderTranscItem->setObjectName(QStringLiteral("TraderTranscItem"));
        TraderTranscItem->resize(1060, 169);
        TraderTranscItem->setMinimumSize(QSize(1060, 0));
        TraderTranscItem->setMaximumSize(QSize(1060, 16777215));
        gridLayout_2 = new QGridLayout(TraderTranscItem);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(TraderTranscItem);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(60, 0));
        label_10->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_10);

        le_transactionid = new QLineEdit(TraderTranscItem);
        le_transactionid->setObjectName(QStringLiteral("le_transactionid"));
        le_transactionid->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_transactionid->sizePolicy().hasHeightForWidth());
        le_transactionid->setSizePolicy(sizePolicy);
        le_transactionid->setMinimumSize(QSize(300, 30));
        le_transactionid->setMaximumSize(QSize(200, 16777215));
        le_transactionid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(le_transactionid);

        label_8 = new QLabel(TraderTranscItem);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(60, 0));
        label_8->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label_8);

        le_troellyid = new QLineEdit(TraderTranscItem);
        le_troellyid->setObjectName(QStringLiteral("le_troellyid"));
        le_troellyid->setEnabled(false);
        sizePolicy.setHeightForWidth(le_troellyid->sizePolicy().hasHeightForWidth());
        le_troellyid->setSizePolicy(sizePolicy);
        le_troellyid->setMinimumSize(QSize(300, 30));
        le_troellyid->setMaximumSize(QSize(200, 16777215));
        le_troellyid->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(le_troellyid);

        label_11 = new QLabel(TraderTranscItem);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(70, 16777215));

        horizontalLayout->addWidget(label_11);

        le_fansID = new QLineEdit(TraderTranscItem);
        le_fansID->setObjectName(QStringLiteral("le_fansID"));
        le_fansID->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(le_fansID->sizePolicy().hasHeightForWidth());
        le_fansID->setSizePolicy(sizePolicy1);
        le_fansID->setMinimumSize(QSize(100, 30));
        le_fansID->setMaximumSize(QSize(100, 16777215));
        le_fansID->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_fansID);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(TraderTranscItem);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);
        label_7->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(label_7);

        le_storeID = new QLineEdit(TraderTranscItem);
        le_storeID->setObjectName(QStringLiteral("le_storeID"));
        le_storeID->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_storeID->sizePolicy().hasHeightForWidth());
        le_storeID->setSizePolicy(sizePolicy1);
        le_storeID->setMinimumSize(QSize(100, 30));
        le_storeID->setMaximumSize(QSize(100, 16777215));
        le_storeID->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(le_storeID);

        label_2 = new QLabel(TraderTranscItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));
        label_2->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_2);

        le_id = new QLineEdit(TraderTranscItem);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setEnabled(false);
        sizePolicy.setHeightForWidth(le_id->sizePolicy().hasHeightForWidth());
        le_id->setSizePolicy(sizePolicy);
        le_id->setMinimumSize(QSize(200, 30));
        le_id->setMaximumSize(QSize(200, 16777215));
        le_id->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(le_id);

        label_9 = new QLabel(TraderTranscItem);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(70, 0));
        label_9->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(label_9);

        le_ordertime = new QLineEdit(TraderTranscItem);
        le_ordertime->setObjectName(QStringLiteral("le_ordertime"));
        le_ordertime->setEnabled(false);
        sizePolicy.setHeightForWidth(le_ordertime->sizePolicy().hasHeightForWidth());
        le_ordertime->setSizePolicy(sizePolicy);
        le_ordertime->setMinimumSize(QSize(200, 30));
        le_ordertime->setMaximumSize(QSize(200, 16777215));
        le_ordertime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(le_ordertime);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(TraderTranscItem);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_6);

        le_merchsize = new QLineEdit(TraderTranscItem);
        le_merchsize->setObjectName(QStringLiteral("le_merchsize"));
        le_merchsize->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_merchsize->sizePolicy().hasHeightForWidth());
        le_merchsize->setSizePolicy(sizePolicy1);
        le_merchsize->setMinimumSize(QSize(100, 30));
        le_merchsize->setMaximumSize(QSize(100, 16777215));
        le_merchsize->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_merchsize);

        label_3 = new QLabel(TraderTranscItem);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(70, 0));
        label_3->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_3);

        le_price = new QLineEdit(TraderTranscItem);
        le_price->setObjectName(QStringLiteral("le_price"));
        le_price->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_price->sizePolicy().hasHeightForWidth());
        le_price->setSizePolicy(sizePolicy1);
        le_price->setMinimumSize(QSize(100, 30));
        le_price->setMaximumSize(QSize(100, 16777215));
        le_price->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_price);

        label_4 = new QLabel(TraderTranscItem);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(70, 0));
        label_4->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_4);

        le_num = new QLineEdit(TraderTranscItem);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_num->sizePolicy().hasHeightForWidth());
        le_num->setSizePolicy(sizePolicy1);
        le_num->setMinimumSize(QSize(100, 30));
        le_num->setMaximumSize(QSize(100, 16777215));
        le_num->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_num);

        label_5 = new QLabel(TraderTranscItem);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(70, 0));
        label_5->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_3->addWidget(label_5);

        le_num_2 = new QLineEdit(TraderTranscItem);
        le_num_2->setObjectName(QStringLiteral("le_num_2"));
        le_num_2->setEnabled(false);
        sizePolicy1.setHeightForWidth(le_num_2->sizePolicy().hasHeightForWidth());
        le_num_2->setSizePolicy(sizePolicy1);
        le_num_2->setMinimumSize(QSize(100, 30));
        le_num_2->setMaximumSize(QSize(100, 16777215));
        le_num_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(le_num_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        lb_photo = new QLabel(TraderTranscItem);
        lb_photo->setObjectName(QStringLiteral("lb_photo"));
        sizePolicy1.setHeightForWidth(lb_photo->sizePolicy().hasHeightForWidth());
        lb_photo->setSizePolicy(sizePolicy1);
        lb_photo->setMinimumSize(QSize(100, 100));
        lb_photo->setMaximumSize(QSize(100, 100));

        gridLayout->addWidget(lb_photo, 1, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(TraderTranscItem);

        QMetaObject::connectSlotsByName(TraderTranscItem);
    } // setupUi

    void retranslateUi(QWidget *TraderTranscItem)
    {
        TraderTranscItem->setWindowTitle(QApplication::translate("TraderTranscItem", "Form", Q_NULLPTR));
        label_10->setText(QApplication::translate("TraderTranscItem", "\350\256\242\345\215\225\347\274\226\345\217\267ID:", Q_NULLPTR));
        le_transactionid->setText(QString());
        label_8->setText(QApplication::translate("TraderTranscItem", "\346\224\266\350\227\217ID:", Q_NULLPTR));
        le_troellyid->setText(QString());
        label_11->setText(QApplication::translate("TraderTranscItem", "\351\236\213\345\217\213ID\357\274\232", Q_NULLPTR));
        le_fansID->setText(QString());
        label_7->setText(QApplication::translate("TraderTranscItem", "\345\225\206\345\272\227ID\357\274\232", Q_NULLPTR));
        le_storeID->setText(QString());
        label_2->setText(QApplication::translate("TraderTranscItem", "\345\225\206\345\223\201ID:", Q_NULLPTR));
        le_id->setText(QString());
        label_9->setText(QApplication::translate("TraderTranscItem", "\344\270\213\345\215\225\346\227\266\351\227\264:", Q_NULLPTR));
        le_ordertime->setText(QString());
        label_6->setText(QApplication::translate("TraderTranscItem", "\351\236\213   \347\240\201\357\274\232", Q_NULLPTR));
        le_merchsize->setText(QString());
        label_3->setText(QApplication::translate("TraderTranscItem", "\345\215\225\344\273\267 \357\274\232", Q_NULLPTR));
        le_price->setText(QString());
        label_4->setText(QApplication::translate("TraderTranscItem", "\346\225\260\351\207\217 \357\274\232", Q_NULLPTR));
        le_num->setText(QString());
        label_5->setText(QApplication::translate("TraderTranscItem", "\346\200\273\344\273\267 \357\274\232", Q_NULLPTR));
        le_num_2->setText(QString());
        lb_photo->setText(QApplication::translate("TraderTranscItem", " =\345\212\240\350\275\275\345\244\261\350\264\245=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TraderTranscItem: public Ui_TraderTranscItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADERTRANSCITEM_H
