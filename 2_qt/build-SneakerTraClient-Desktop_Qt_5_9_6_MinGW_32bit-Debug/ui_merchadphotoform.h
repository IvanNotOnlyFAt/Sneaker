/********************************************************************************
** Form generated from reading UI file 'merchadphotoform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHADPHOTOFORM_H
#define UI_MERCHADPHOTOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MerchADPhotoForm
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_photopath;
    QPushButton *pb_selectphoto;
    QPushButton *pb_delete;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QGridLayout *gridLayout_4;
    QPushButton *pb_modify;
    QPushButton *pb_addadphoto;

    void setupUi(QWidget *MerchADPhotoForm)
    {
        if (MerchADPhotoForm->objectName().isEmpty())
            MerchADPhotoForm->setObjectName(QStringLiteral("MerchADPhotoForm"));
        MerchADPhotoForm->resize(700, 800);
        gridLayout_5 = new QGridLayout(MerchADPhotoForm);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(MerchADPhotoForm);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        le_photopath = new QLineEdit(groupBox);
        le_photopath->setObjectName(QStringLiteral("le_photopath"));
        le_photopath->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_photopath->sizePolicy().hasHeightForWidth());
        le_photopath->setSizePolicy(sizePolicy);
        le_photopath->setMaximumSize(QSize(400, 30));
        le_photopath->setSizeIncrement(QSize(400, 28));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        le_photopath->setFont(font);

        horizontalLayout->addWidget(le_photopath);

        pb_selectphoto = new QPushButton(groupBox);
        pb_selectphoto->setObjectName(QStringLiteral("pb_selectphoto"));
        pb_selectphoto->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(pb_selectphoto);

        pb_delete = new QPushButton(groupBox);
        pb_delete->setObjectName(QStringLiteral("pb_delete"));
        pb_delete->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(pb_delete);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MerchADPhotoForm);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(groupBox_2);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pb_modify = new QPushButton(MerchADPhotoForm);
        pb_modify->setObjectName(QStringLiteral("pb_modify"));
        pb_modify->setMinimumSize(QSize(240, 75));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        pb_modify->setFont(font1);

        gridLayout_4->addWidget(pb_modify, 0, 0, 1, 1);

        pb_addadphoto = new QPushButton(MerchADPhotoForm);
        pb_addadphoto->setObjectName(QStringLiteral("pb_addadphoto"));
        pb_addadphoto->setMinimumSize(QSize(240, 75));
        pb_addadphoto->setFont(font1);

        gridLayout_4->addWidget(pb_addadphoto, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 1, 0, 1, 1);


        retranslateUi(MerchADPhotoForm);

        QMetaObject::connectSlotsByName(MerchADPhotoForm);
    } // setupUi

    void retranslateUi(QWidget *MerchADPhotoForm)
    {
        MerchADPhotoForm->setWindowTitle(QApplication::translate("MerchADPhotoForm", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MerchADPhotoForm", "\345\233\276\347\211\207\351\200\211\346\213\251", Q_NULLPTR));
        pb_selectphoto->setText(QApplication::translate("MerchADPhotoForm", "...", Q_NULLPTR));
        pb_delete->setText(QApplication::translate("MerchADPhotoForm", "<-", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MerchADPhotoForm", "\345\233\276\347\211\207\344\277\241\346\201\257", Q_NULLPTR));
        pb_modify->setText(QApplication::translate("MerchADPhotoForm", "\344\277\256 \346\224\271 \345\233\276  \347\211\207 ", Q_NULLPTR));
        pb_addadphoto->setText(QApplication::translate("MerchADPhotoForm", "\346\217\220 \344\272\244 \345\233\276 \347\211\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MerchADPhotoForm: public Ui_MerchADPhotoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHADPHOTOFORM_H
