/********************************************************************************
** Form generated from reading UI file 'applystoreform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYSTOREFORM_H
#define UI_APPLYSTOREFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyStoreForm
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lb_logophoto;
    QLineEdit *le_logopath;
    QPushButton *pb_selectlogo;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *le_storeid;
    QLabel *label_2;
    QLineEdit *le_traderid;
    QLabel *label_3;
    QLineEdit *le_storename;
    QLabel *label_4;
    QLineEdit *le_storetype;
    QLabel *label_5;
    QLineEdit *le_storelocation;
    QLabel *label_6;
    QLineEdit *le_storelogo;
    QLabel *label_8;
    QLineEdit *le_redate;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_modify;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_applystore;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ApplyStoreForm)
    {
        if (ApplyStoreForm->objectName().isEmpty())
            ApplyStoreForm->setObjectName(QStringLiteral("ApplyStoreForm"));
        ApplyStoreForm->resize(700, 650);
        ApplyStoreForm->setStyleSheet(QLatin1String("\n"
"QLineEdit{\n"
"	\n"
"	color: rgb(22, 121, 226);\n"
"}"));
        gridLayout_5 = new QGridLayout(ApplyStoreForm);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox = new QGroupBox(ApplyStoreForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lb_logophoto = new QLabel(groupBox);
        lb_logophoto->setObjectName(QStringLiteral("lb_logophoto"));
        lb_logophoto->setMinimumSize(QSize(103, 81));
        lb_logophoto->setMaximumSize(QSize(103, 81));

        horizontalLayout->addWidget(lb_logophoto);

        le_logopath = new QLineEdit(groupBox);
        le_logopath->setObjectName(QStringLiteral("le_logopath"));
        le_logopath->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_logopath->sizePolicy().hasHeightForWidth());
        le_logopath->setSizePolicy(sizePolicy);
        le_logopath->setMaximumSize(QSize(400, 30));
        le_logopath->setSizeIncrement(QSize(400, 28));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        le_logopath->setFont(font);

        horizontalLayout->addWidget(le_logopath);

        pb_selectlogo = new QPushButton(groupBox);
        pb_selectlogo->setObjectName(QStringLiteral("pb_selectlogo"));
        pb_selectlogo->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(pb_selectlogo);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 5);

        groupBox_2 = new QGroupBox(ApplyStoreForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        le_storeid = new QLineEdit(groupBox_2);
        le_storeid->setObjectName(QStringLiteral("le_storeid"));
        le_storeid->setEnabled(false);
        sizePolicy.setHeightForWidth(le_storeid->sizePolicy().hasHeightForWidth());
        le_storeid->setSizePolicy(sizePolicy);
        le_storeid->setMinimumSize(QSize(0, 40));
        le_storeid->setMaximumSize(QSize(450, 16777215));
        le_storeid->setFont(font);
        le_storeid->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_storeid, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(150, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_traderid = new QLineEdit(groupBox_2);
        le_traderid->setObjectName(QStringLiteral("le_traderid"));
        le_traderid->setEnabled(false);
        sizePolicy.setHeightForWidth(le_traderid->sizePolicy().hasHeightForWidth());
        le_traderid->setSizePolicy(sizePolicy);
        le_traderid->setMinimumSize(QSize(0, 40));
        le_traderid->setMaximumSize(QSize(450, 16777215));
        le_traderid->setFont(font);
        le_traderid->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_traderid, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(150, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        le_storename = new QLineEdit(groupBox_2);
        le_storename->setObjectName(QStringLiteral("le_storename"));
        le_storename->setEnabled(true);
        sizePolicy.setHeightForWidth(le_storename->sizePolicy().hasHeightForWidth());
        le_storename->setSizePolicy(sizePolicy);
        le_storename->setMinimumSize(QSize(0, 40));
        le_storename->setMaximumSize(QSize(450, 16777215));
        le_storename->setFont(font);
        le_storename->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_storename, 2, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(150, 16777215));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        le_storetype = new QLineEdit(groupBox_2);
        le_storetype->setObjectName(QStringLiteral("le_storetype"));
        le_storetype->setEnabled(true);
        sizePolicy.setHeightForWidth(le_storetype->sizePolicy().hasHeightForWidth());
        le_storetype->setSizePolicy(sizePolicy);
        le_storetype->setMinimumSize(QSize(0, 40));
        le_storetype->setMaximumSize(QSize(450, 16777215));
        le_storetype->setFont(font);
        le_storetype->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_storetype, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(150, 16777215));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        le_storelocation = new QLineEdit(groupBox_2);
        le_storelocation->setObjectName(QStringLiteral("le_storelocation"));
        le_storelocation->setEnabled(true);
        sizePolicy.setHeightForWidth(le_storelocation->sizePolicy().hasHeightForWidth());
        le_storelocation->setSizePolicy(sizePolicy);
        le_storelocation->setMinimumSize(QSize(0, 40));
        le_storelocation->setMaximumSize(QSize(450, 16777215));
        le_storelocation->setFont(font);
        le_storelocation->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_storelocation, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(150, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        le_storelogo = new QLineEdit(groupBox_2);
        le_storelogo->setObjectName(QStringLiteral("le_storelogo"));
        le_storelogo->setEnabled(false);
        sizePolicy.setHeightForWidth(le_storelogo->sizePolicy().hasHeightForWidth());
        le_storelogo->setSizePolicy(sizePolicy);
        le_storelogo->setMinimumSize(QSize(0, 40));
        le_storelogo->setMaximumSize(QSize(450, 16777215));
        le_storelogo->setFont(font);
        le_storelogo->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_storelogo, 5, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(150, 16777215));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 1);

        le_redate = new QLineEdit(groupBox_2);
        le_redate->setObjectName(QStringLiteral("le_redate"));
        le_redate->setEnabled(false);
        sizePolicy.setHeightForWidth(le_redate->sizePolicy().hasHeightForWidth());
        le_redate->setSizePolicy(sizePolicy);
        le_redate->setMinimumSize(QSize(0, 40));
        le_redate->setMaximumSize(QSize(450, 16777215));
        le_redate->setFont(font);
        le_redate->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_redate, 6, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 2, 0, 1, 1);

        pb_modify = new QPushButton(ApplyStoreForm);
        pb_modify->setObjectName(QStringLiteral("pb_modify"));
        pb_modify->setMinimumSize(QSize(240, 75));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Devanagari"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        pb_modify->setFont(font2);

        gridLayout_4->addWidget(pb_modify, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        pb_applystore = new QPushButton(ApplyStoreForm);
        pb_applystore->setObjectName(QStringLiteral("pb_applystore"));
        pb_applystore->setMinimumSize(QSize(240, 75));
        pb_applystore->setFont(font2);

        gridLayout_4->addWidget(pb_applystore, 2, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 2, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 5);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(ApplyStoreForm);

        QMetaObject::connectSlotsByName(ApplyStoreForm);
    } // setupUi

    void retranslateUi(QWidget *ApplyStoreForm)
    {
        ApplyStoreForm->setWindowTitle(QApplication::translate("ApplyStoreForm", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ApplyStoreForm", "\345\225\206\346\240\207", Q_NULLPTR));
        lb_logophoto->setText(QApplication::translate("ApplyStoreForm", "lb_logophoto", Q_NULLPTR));
        pb_selectlogo->setText(QApplication::translate("ApplyStoreForm", "...", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ApplyStoreForm", "\345\225\206\345\272\227\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("ApplyStoreForm", "\345\225\206  \345\272\227  \345\217\267 \357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApplyStoreForm", "\345\225\206  \345\256\266  \345\217\267 \357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApplyStoreForm", "\345\225\206  \345\272\227  \345\220\215 \357\274\232", Q_NULLPTR));
        le_storename->setText(QString());
        label_4->setText(QApplication::translate("ApplyStoreForm", "\347\273\217\350\220\245\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        le_storetype->setText(QString());
        label_5->setText(QApplication::translate("ApplyStoreForm", "\347\273\217\350\220\245\345\234\260\345\235\200\357\274\232", Q_NULLPTR));
        le_storelocation->setText(QString());
        label_6->setText(QApplication::translate("ApplyStoreForm", "\345\225\206\346\240\207\346\243\200\347\264\242\357\274\232", Q_NULLPTR));
        le_storelogo->setText(QApplication::translate("ApplyStoreForm", "00", Q_NULLPTR));
        label_8->setText(QApplication::translate("ApplyStoreForm", "\346\263\250\345\206\214\346\227\245\346\234\237\357\274\232", Q_NULLPTR));
        le_redate->setText(QString());
        pb_modify->setText(QApplication::translate("ApplyStoreForm", "\344\277\256 \346\224\271 \344\277\241 \346\201\257", Q_NULLPTR));
        pb_applystore->setText(QApplication::translate("ApplyStoreForm", "\347\224\263 \350\257\267 \345\274\200 \345\272\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplyStoreForm: public Ui_ApplyStoreForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYSTOREFORM_H
