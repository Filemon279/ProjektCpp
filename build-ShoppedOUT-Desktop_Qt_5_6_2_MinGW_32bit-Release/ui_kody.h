/********************************************************************************
** Form generated from reading UI file 'kody.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KODY_H
#define UI_KODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kody
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *Asortyment;
    QLabel *label_info;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QDialog *Kody)
    {
        if (Kody->objectName().isEmpty())
            Kody->setObjectName(QStringLiteral("Kody"));
        Kody->resize(1058, 657);
        horizontalLayout_2 = new QHBoxLayout(Kody);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 20, 10, 20);
        Asortyment = new QTableWidget(Kody);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));

        verticalLayout->addWidget(Asortyment);

        label_info = new QLabel(Kody);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);

        verticalLayout->addWidget(label_info);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 20, 10, 20);
        tabWidget = new QTabWidget(Kody);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Kody);

        QMetaObject::connectSlotsByName(Kody);
    } // setupUi

    void retranslateUi(QDialog *Kody)
    {
        Kody->setWindowTitle(QApplication::translate("Kody", "Dialog", 0));
        label_info->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Kody", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Kody", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Kody: public Ui_Kody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KODY_H
