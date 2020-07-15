/********************************************************************************
** Form generated from reading UI file 'homestoreitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESTOREITEM_H
#define UI_HOMESTOREITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeStoreItem
{
public:
    QLabel *lb_logo;
    QPushButton *pb_store;

    void setupUi(QWidget *HomeStoreItem)
    {
        if (HomeStoreItem->objectName().isEmpty())
            HomeStoreItem->setObjectName(QStringLiteral("HomeStoreItem"));
        HomeStoreItem->resize(250, 110);
        HomeStoreItem->setMinimumSize(QSize(250, 110));
        HomeStoreItem->setMaximumSize(QSize(250, 110));
        HomeStoreItem->setStyleSheet(QLatin1String("QPushButton{\n"
" \n"
"	background: transparent;\n"
"}\n"
"QPushButton:hover{\n"
"	font: Bold;\n"
"	text-decoration: underline;\n"
"\n"
"}"));
        lb_logo = new QLabel(HomeStoreItem);
        lb_logo->setObjectName(QStringLiteral("lb_logo"));
        lb_logo->setGeometry(QRect(10, 10, 103, 81));
        lb_logo->setMinimumSize(QSize(103, 81));
        lb_logo->setMaximumSize(QSize(103, 81));
        pb_store = new QPushButton(HomeStoreItem);
        pb_store->setObjectName(QStringLiteral("pb_store"));
        pb_store->setGeometry(QRect(120, 30, 121, 41));

        retranslateUi(HomeStoreItem);

        QMetaObject::connectSlotsByName(HomeStoreItem);
    } // setupUi

    void retranslateUi(QWidget *HomeStoreItem)
    {
        HomeStoreItem->setWindowTitle(QApplication::translate("HomeStoreItem", "Form", Q_NULLPTR));
        lb_logo->setText(QApplication::translate("HomeStoreItem", "TextLabel", Q_NULLPTR));
        pb_store->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomeStoreItem: public Ui_HomeStoreItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESTOREITEM_H
