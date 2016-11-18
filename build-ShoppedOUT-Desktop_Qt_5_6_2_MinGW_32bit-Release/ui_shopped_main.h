/********************************************************************************
** Form generated from reading UI file 'shopped_main.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPED_MAIN_H
#define UI_SHOPPED_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Shopped_main
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *codeButton;
    QPushButton *sklepButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *magazynButton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Shopped_main)
    {
        if (Shopped_main->objectName().isEmpty())
            Shopped_main->setObjectName(QStringLiteral("Shopped_main"));
        Shopped_main->resize(981, 596);
        Shopped_main->setStyleSheet(QStringLiteral("#Shopped_main {border-image: url(:/img/Img/bg_dark_logo.jpg);}"));
        gridLayout = new QGridLayout(Shopped_main);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 3);

        codeButton = new QPushButton(Shopped_main);
        codeButton->setObjectName(QStringLiteral("codeButton"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(codeButton->sizePolicy().hasHeightForWidth());
        codeButton->setSizePolicy(sizePolicy);
        codeButton->setStyleSheet(QLatin1String("#codeButton{\n"
"border-image: url(:/img/Img/barcode.png);\n"
"font: 87 20pt \"Arial Black\";\n"
"color:white;\n"
"border-width: 3px;\n"
"border-radius: 7px;\n"
"}\n"
"#codeButton:pressed {\n"
"border-image: url(:/img/Img/barcode_clicked.png);\n"
"\n"
"}"));

        gridLayout->addWidget(codeButton, 2, 2, 1, 1);

        sklepButton = new QPushButton(Shopped_main);
        sklepButton->setObjectName(QStringLiteral("sklepButton"));
        sizePolicy.setHeightForWidth(sklepButton->sizePolicy().hasHeightForWidth());
        sklepButton->setSizePolicy(sizePolicy);
        sklepButton->setStyleSheet(QLatin1String("#sklepButton{\n"
"border-image: url(:/img/Img/sklep.png);\n"
"font: 87 20pt \"Arial Black\";\n"
"color:white;\n"
"border-width: 3px;\n"
"border-radius: 7px;\n"
"}\n"
"#sklepButton:pressed {\n"
"border-image: url(:/img/Img/sklep_clicked.png);\n"
"\n"
"}\n"
"\n"
""));

        gridLayout->addWidget(sklepButton, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 3, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 3, 1);

        magazynButton = new QPushButton(Shopped_main);
        magazynButton->setObjectName(QStringLiteral("magazynButton"));
        sizePolicy.setHeightForWidth(magazynButton->sizePolicy().hasHeightForWidth());
        magazynButton->setSizePolicy(sizePolicy);
        magazynButton->setStyleSheet(QLatin1String("#magazynButton {\n"
"border-image: url(:/img/Img/warehouse.png);\n"
"font: 87 20pt \"Arial Black\";\n"
"color:white;\n"
"border-width: 3px;\n"
"border-radius: 7px;\n"
"}\n"
"#magazynButton:pressed {\n"
"border-image: url(:/img/Img/warehouse_clicked.png);\n"
"\n"
"}\n"
"\n"
""));
        magazynButton->setCheckable(false);
        magazynButton->setAutoDefault(true);

        gridLayout->addWidget(magazynButton, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 3, 2, 1, 1);


        retranslateUi(Shopped_main);

        magazynButton->setDefault(true);


        QMetaObject::connectSlotsByName(Shopped_main);
    } // setupUi

    void retranslateUi(QDialog *Shopped_main)
    {
        Shopped_main->setWindowTitle(QApplication::translate("Shopped_main", "Dialog", 0));
        codeButton->setText(QApplication::translate("Shopped_main", "KODY", 0));
        sklepButton->setText(QApplication::translate("Shopped_main", "SKLEP", 0));
        magazynButton->setText(QApplication::translate("Shopped_main", "MAGAZYN", 0));
    } // retranslateUi

};

namespace Ui {
    class Shopped_main: public Ui_Shopped_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPED_MAIN_H
