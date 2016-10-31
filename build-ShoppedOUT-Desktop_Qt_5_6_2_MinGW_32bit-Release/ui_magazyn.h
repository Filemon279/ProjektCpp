/********************************************************************************
** Form generated from reading UI file 'magazyn.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYN_H
#define UI_MAGAZYN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Magazyn
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *Asortyment;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_info;
    QTableView *tableView;

    void setupUi(QDialog *Magazyn)
    {
        if (Magazyn->objectName().isEmpty())
            Magazyn->setObjectName(QStringLiteral("Magazyn"));
        Magazyn->resize(1110, 699);
        Magazyn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));"));
        verticalLayout_2 = new QVBoxLayout(Magazyn);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(30, 30, 30, 10);
        Asortyment = new QTableWidget(Magazyn);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));
        Asortyment->setStyleSheet(QLatin1String("gridline-color: white; \n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"background-image: url(:/img/Img/white_40_small.png);\n"
" background-repeat: no-repeat;\n"
" background-position: center;\n"
"background-opacity: 153;\n"
"gridline-color:white;\n"
"color:white\n"
""));

        verticalLayout->addWidget(Asortyment);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_info = new QLabel(Magazyn);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);

        horizontalLayout_2->addWidget(label_info);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        tableView = new QTableView(Magazyn);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        retranslateUi(Magazyn);

        QMetaObject::connectSlotsByName(Magazyn);
    } // setupUi

    void retranslateUi(QDialog *Magazyn)
    {
        Magazyn->setWindowTitle(QApplication::translate("Magazyn", "Dialog", 0));
        label_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Magazyn: public Ui_Magazyn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYN_H
