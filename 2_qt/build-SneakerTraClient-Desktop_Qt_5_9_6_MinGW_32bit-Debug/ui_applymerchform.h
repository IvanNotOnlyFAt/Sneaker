/********************************************************************************
** Form generated from reading UI file 'applymerchform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLYMERCHFORM_H
#define UI_APPLYMERCHFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ApplyMerchForm
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_3;
    QPushButton *pb_selectlogo;
    QGridLayout *gridLayout;
    QCheckBox *rb_34;
    QCheckBox *rb_35;
    QCheckBox *rb_36;
    QCheckBox *rb_37;
    QCheckBox *rb_38;
    QCheckBox *rb_39;
    QCheckBox *rb_40;
    QCheckBox *rb_41;
    QCheckBox *rb_42;
    QCheckBox *rb_43;
    QCheckBox *rb_44;
    QCheckBox *rb_45;
    QCheckBox *rb_46;
    QCheckBox *rb_47;
    QCheckBox *rb_48;
    QLineEdit *le_merchsize;
    QLabel *label_7;
    QLineEdit *le_logopath;
    QLabel *lb_hostphoto;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLineEdit *le_merchid;
    QLabel *label;
    QComboBox *cb_storeid;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *le_merchname;
    QLineEdit *le_merchprice;
    QLabel *label_5;
    QTextEdit *textEdit;
    QLineEdit *le_merchstock;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *le_adnum;
    QGridLayout *gridLayout_7;
    QPushButton *pb_modify;
    QPushButton *pb_addmerch;

    void setupUi(QWidget *ApplyMerchForm)
    {
        if (ApplyMerchForm->objectName().isEmpty())
            ApplyMerchForm->setObjectName(QStringLiteral("ApplyMerchForm"));
        ApplyMerchForm->resize(700, 810);
        gridLayout_6 = new QGridLayout(ApplyMerchForm);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox = new QGroupBox(ApplyMerchForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pb_selectlogo = new QPushButton(groupBox);
        pb_selectlogo->setObjectName(QStringLiteral("pb_selectlogo"));
        pb_selectlogo->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(pb_selectlogo, 0, 3, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        rb_34 = new QCheckBox(groupBox);
        rb_34->setObjectName(QStringLiteral("rb_34"));

        gridLayout->addWidget(rb_34, 0, 0, 1, 1);

        rb_35 = new QCheckBox(groupBox);
        rb_35->setObjectName(QStringLiteral("rb_35"));

        gridLayout->addWidget(rb_35, 0, 1, 1, 1);

        rb_36 = new QCheckBox(groupBox);
        rb_36->setObjectName(QStringLiteral("rb_36"));

        gridLayout->addWidget(rb_36, 0, 2, 1, 1);

        rb_37 = new QCheckBox(groupBox);
        rb_37->setObjectName(QStringLiteral("rb_37"));

        gridLayout->addWidget(rb_37, 0, 3, 1, 1);

        rb_38 = new QCheckBox(groupBox);
        rb_38->setObjectName(QStringLiteral("rb_38"));

        gridLayout->addWidget(rb_38, 0, 4, 1, 1);

        rb_39 = new QCheckBox(groupBox);
        rb_39->setObjectName(QStringLiteral("rb_39"));

        gridLayout->addWidget(rb_39, 1, 0, 1, 1);

        rb_40 = new QCheckBox(groupBox);
        rb_40->setObjectName(QStringLiteral("rb_40"));

        gridLayout->addWidget(rb_40, 1, 1, 1, 1);

        rb_41 = new QCheckBox(groupBox);
        rb_41->setObjectName(QStringLiteral("rb_41"));

        gridLayout->addWidget(rb_41, 1, 2, 1, 1);

        rb_42 = new QCheckBox(groupBox);
        rb_42->setObjectName(QStringLiteral("rb_42"));

        gridLayout->addWidget(rb_42, 1, 3, 1, 1);

        rb_43 = new QCheckBox(groupBox);
        rb_43->setObjectName(QStringLiteral("rb_43"));

        gridLayout->addWidget(rb_43, 1, 4, 1, 1);

        rb_44 = new QCheckBox(groupBox);
        rb_44->setObjectName(QStringLiteral("rb_44"));

        gridLayout->addWidget(rb_44, 2, 0, 1, 1);

        rb_45 = new QCheckBox(groupBox);
        rb_45->setObjectName(QStringLiteral("rb_45"));

        gridLayout->addWidget(rb_45, 2, 1, 1, 1);

        rb_46 = new QCheckBox(groupBox);
        rb_46->setObjectName(QStringLiteral("rb_46"));

        gridLayout->addWidget(rb_46, 2, 2, 1, 1);

        rb_47 = new QCheckBox(groupBox);
        rb_47->setObjectName(QStringLiteral("rb_47"));

        gridLayout->addWidget(rb_47, 2, 3, 1, 1);

        rb_48 = new QCheckBox(groupBox);
        rb_48->setObjectName(QStringLiteral("rb_48"));

        gridLayout->addWidget(rb_48, 2, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 1, 1, 1, 3);

        le_merchsize = new QLineEdit(groupBox);
        le_merchsize->setObjectName(QStringLiteral("le_merchsize"));
        le_merchsize->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_merchsize->sizePolicy().hasHeightForWidth());
        le_merchsize->setSizePolicy(sizePolicy);
        le_merchsize->setMaximumSize(QSize(400, 30));
        le_merchsize->setSizeIncrement(QSize(400, 28));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        le_merchsize->setFont(font);

        gridLayout_3->addWidget(le_merchsize, 2, 2, 1, 2);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(80, 0));
        label_7->setMaximumSize(QSize(80, 16777215));

        gridLayout_3->addWidget(label_7, 2, 1, 1, 1);

        le_logopath = new QLineEdit(groupBox);
        le_logopath->setObjectName(QStringLiteral("le_logopath"));
        le_logopath->setEnabled(false);
        sizePolicy.setHeightForWidth(le_logopath->sizePolicy().hasHeightForWidth());
        le_logopath->setSizePolicy(sizePolicy);
        le_logopath->setMaximumSize(QSize(400, 30));
        le_logopath->setSizeIncrement(QSize(400, 28));
        le_logopath->setFont(font);

        gridLayout_3->addWidget(le_logopath, 0, 1, 1, 2);

        lb_hostphoto = new QLabel(groupBox);
        lb_hostphoto->setObjectName(QStringLiteral("lb_hostphoto"));
        lb_hostphoto->setMinimumSize(QSize(200, 200));
        lb_hostphoto->setMaximumSize(QSize(200, 200));

        gridLayout_3->addWidget(lb_hostphoto, 0, 0, 3, 1);


        gridLayout_9->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ApplyMerchForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        le_merchid = new QLineEdit(groupBox_2);
        le_merchid->setObjectName(QStringLiteral("le_merchid"));
        le_merchid->setEnabled(false);
        sizePolicy.setHeightForWidth(le_merchid->sizePolicy().hasHeightForWidth());
        le_merchid->setSizePolicy(sizePolicy);
        le_merchid->setMinimumSize(QSize(0, 40));
        le_merchid->setMaximumSize(QSize(450, 16777215));
        le_merchid->setFont(font);
        le_merchid->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_merchid, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(14);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        cb_storeid = new QComboBox(groupBox_2);
        cb_storeid->setObjectName(QStringLiteral("cb_storeid"));
        cb_storeid->setEnabled(true);
        cb_storeid->setMinimumSize(QSize(0, 40));

        gridLayout_2->addWidget(cb_storeid, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(150, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(150, 16777215));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(150, 16777215));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        le_merchname = new QLineEdit(groupBox_2);
        le_merchname->setObjectName(QStringLiteral("le_merchname"));
        le_merchname->setEnabled(true);
        sizePolicy.setHeightForWidth(le_merchname->sizePolicy().hasHeightForWidth());
        le_merchname->setSizePolicy(sizePolicy);
        le_merchname->setMinimumSize(QSize(0, 40));
        le_merchname->setMaximumSize(QSize(450, 16777215));
        le_merchname->setFont(font);
        le_merchname->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_merchname, 2, 1, 1, 1);

        le_merchprice = new QLineEdit(groupBox_2);
        le_merchprice->setObjectName(QStringLiteral("le_merchprice"));
        le_merchprice->setEnabled(true);
        sizePolicy.setHeightForWidth(le_merchprice->sizePolicy().hasHeightForWidth());
        le_merchprice->setSizePolicy(sizePolicy);
        le_merchprice->setMinimumSize(QSize(0, 40));
        le_merchprice->setMaximumSize(QSize(450, 16777215));
        le_merchprice->setFont(font);
        le_merchprice->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_merchprice, 3, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(150, 16777215));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_2->addWidget(textEdit, 7, 0, 1, 2);

        le_merchstock = new QLineEdit(groupBox_2);
        le_merchstock->setObjectName(QStringLiteral("le_merchstock"));
        le_merchstock->setEnabled(true);
        sizePolicy.setHeightForWidth(le_merchstock->sizePolicy().hasHeightForWidth());
        le_merchstock->setSizePolicy(sizePolicy);
        le_merchstock->setMinimumSize(QSize(0, 40));
        le_merchstock->setMaximumSize(QSize(450, 16777215));
        le_merchstock->setFont(font);
        le_merchstock->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_merchstock, 4, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(150, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 5, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(150, 16777215));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 6, 0, 1, 2);

        le_adnum = new QLineEdit(groupBox_2);
        le_adnum->setObjectName(QStringLiteral("le_adnum"));
        le_adnum->setEnabled(false);
        sizePolicy.setHeightForWidth(le_adnum->sizePolicy().hasHeightForWidth());
        le_adnum->setSizePolicy(sizePolicy);
        le_adnum->setMinimumSize(QSize(0, 40));
        le_adnum->setMaximumSize(QSize(450, 16777215));
        le_adnum->setFont(font);
        le_adnum->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(le_adnum, 5, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pb_modify = new QPushButton(ApplyMerchForm);
        pb_modify->setObjectName(QStringLiteral("pb_modify"));
        pb_modify->setMinimumSize(QSize(240, 75));
        QFont font2;
        font2.setFamily(QStringLiteral("Adobe Devanagari"));
        font2.setPointSize(22);
        font2.setBold(true);
        font2.setWeight(75);
        pb_modify->setFont(font2);

        gridLayout_7->addWidget(pb_modify, 0, 0, 1, 1);

        pb_addmerch = new QPushButton(ApplyMerchForm);
        pb_addmerch->setObjectName(QStringLiteral("pb_addmerch"));
        pb_addmerch->setMinimumSize(QSize(240, 75));
        pb_addmerch->setFont(font2);

        gridLayout_7->addWidget(pb_addmerch, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_7, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);


        retranslateUi(ApplyMerchForm);

        QMetaObject::connectSlotsByName(ApplyMerchForm);
    } // setupUi

    void retranslateUi(QWidget *ApplyMerchForm)
    {
        ApplyMerchForm->setWindowTitle(QApplication::translate("ApplyMerchForm", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ApplyMerchForm", "\345\225\206\346\240\207", Q_NULLPTR));
        pb_selectlogo->setText(QApplication::translate("ApplyMerchForm", "...", Q_NULLPTR));
        rb_34->setText(QApplication::translate("ApplyMerchForm", "34", Q_NULLPTR));
        rb_35->setText(QApplication::translate("ApplyMerchForm", "35", Q_NULLPTR));
        rb_36->setText(QApplication::translate("ApplyMerchForm", "36", Q_NULLPTR));
        rb_37->setText(QApplication::translate("ApplyMerchForm", "37", Q_NULLPTR));
        rb_38->setText(QApplication::translate("ApplyMerchForm", "38", Q_NULLPTR));
        rb_39->setText(QApplication::translate("ApplyMerchForm", "39", Q_NULLPTR));
        rb_40->setText(QApplication::translate("ApplyMerchForm", "40", Q_NULLPTR));
        rb_41->setText(QApplication::translate("ApplyMerchForm", "41", Q_NULLPTR));
        rb_42->setText(QApplication::translate("ApplyMerchForm", "42", Q_NULLPTR));
        rb_43->setText(QApplication::translate("ApplyMerchForm", "43", Q_NULLPTR));
        rb_44->setText(QApplication::translate("ApplyMerchForm", "44", Q_NULLPTR));
        rb_45->setText(QApplication::translate("ApplyMerchForm", "45", Q_NULLPTR));
        rb_46->setText(QApplication::translate("ApplyMerchForm", "46", Q_NULLPTR));
        rb_47->setText(QApplication::translate("ApplyMerchForm", "47", Q_NULLPTR));
        rb_48->setText(QApplication::translate("ApplyMerchForm", "48", Q_NULLPTR));
        label_7->setText(QApplication::translate("ApplyMerchForm", "\351\236\213\347\240\201\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        lb_hostphoto->setText(QApplication::translate("ApplyMerchForm", "lb_hostphoto", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ApplyMerchForm", "\345\225\206\345\223\201\344\277\241\346\201\257", Q_NULLPTR));
        label->setText(QApplication::translate("ApplyMerchForm", "\345\225\206  \345\223\201  \345\217\267 \357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("ApplyMerchForm", "\345\225\206  \345\223\201  \345\220\215 \357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("ApplyMerchForm", "\344\273\267        \346\240\274 \357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("ApplyMerchForm", "\345\225\206  \345\272\227  \345\217\267 \357\274\232", Q_NULLPTR));
        le_merchname->setText(QString());
        le_merchprice->setText(QString());
        label_5->setText(QApplication::translate("ApplyMerchForm", "\345\272\223       \345\255\230\357\274\232", Q_NULLPTR));
        le_merchstock->setText(QString());
        label_6->setText(QApplication::translate("ApplyMerchForm", "\345\271\277\345\221\212\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_8->setText(QApplication::translate("ApplyMerchForm", "\345\225\206\345\223\201\346\217\217\350\277\260\357\274\232", Q_NULLPTR));
        le_adnum->setText(QApplication::translate("ApplyMerchForm", "00", Q_NULLPTR));
        pb_modify->setText(QApplication::translate("ApplyMerchForm", "\344\277\256 \346\224\271 \344\277\241 \346\201\257", Q_NULLPTR));
        pb_addmerch->setText(QApplication::translate("ApplyMerchForm", "\346\267\273 \345\212\240 \345\225\206 \345\223\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ApplyMerchForm: public Ui_ApplyMerchForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLYMERCHFORM_H
