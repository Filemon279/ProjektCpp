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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Kody
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *Asortyment;
    QLabel *label_info;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_kodKreskowy;
    QGridLayout *gridLayout_2;

    void setupUi(QDialog *Kody)
    {
        if (Kody->objectName().isEmpty())
            Kody->setObjectName(QStringLiteral("Kody"));
        Kody->resize(1058, 657);
        Kody->setStyleSheet(QStringLiteral("#Kody {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}"));
        horizontalLayout_2 = new QHBoxLayout(Kody);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 20, 10, 20);
        Asortyment = new QTableWidget(Kody);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Asortyment->sizePolicy().hasHeightForWidth());
        Asortyment->setSizePolicy(sizePolicy);
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
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(Kody);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("color:white\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_kodKreskowy = new QLabel(groupBox);
        label_kodKreskowy->setObjectName(QStringLiteral("label_kodKreskowy"));
        QFont font2;
        font2.setFamily(QStringLiteral("Free 3 of 9 Extended"));
        font2.setPointSize(24);
        label_kodKreskowy->setFont(font2);
        label_kodKreskowy->setStyleSheet(QLatin1String("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        label_kodKreskowy->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_kodKreskowy, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));

        verticalLayout_2->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Kody);

        QMetaObject::connectSlotsByName(Kody);
    } // setupUi

    void retranslateUi(QDialog *Kody)
    {
        Kody->setWindowTitle(QApplication::translate("Kody", "Dialog", 0));
        label_info->setText(QString());
        groupBox->setTitle(QApplication::translate("Kody", "Kod Kreskowy", 0));
        label_kodKreskowy->setText(QApplication::translate("Kody", "*123*", 0));
    } // retranslateUi

};

namespace Ui {
    class Kody: public Ui_Kody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KODY_H
