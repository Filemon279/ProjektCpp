/********************************************************************************
** Form generated from reading UI file 'produkt_ilosc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUKT_ILOSC_H
#define UI_PRODUKT_ILOSC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_produkt_ilosc
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_ilosc;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;

    void setupUi(QDialog *produkt_ilosc)
    {
        if (produkt_ilosc->objectName().isEmpty())
            produkt_ilosc->setObjectName(QStringLiteral("produkt_ilosc"));
        produkt_ilosc->resize(451, 337);
        produkt_ilosc->setStyleSheet(QStringLiteral("#produkt_ilosc{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255));}"));
        gridLayout_2 = new QGridLayout(produkt_ilosc);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(-1, 30, -1, -1);
        lineEdit = new QLineEdit(produkt_ilosc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lineEdit->setFont(font);
        lineEdit->setMaxLength(3);
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit, 2, 1, 1, 1);

        label_ilosc = new QLabel(produkt_ilosc);
        label_ilosc->setObjectName(QStringLiteral("label_ilosc"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_ilosc->sizePolicy().hasHeightForWidth());
        label_ilosc->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_ilosc->setFont(font1);
        label_ilosc->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_2->addWidget(label_ilosc, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        pushButton = new QPushButton(produkt_ilosc);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_2->addWidget(pushButton, 3, 1, 1, 1);


        retranslateUi(produkt_ilosc);

        QMetaObject::connectSlotsByName(produkt_ilosc);
    } // setupUi

    void retranslateUi(QDialog *produkt_ilosc)
    {
        produkt_ilosc->setWindowTitle(QApplication::translate("produkt_ilosc", "Dialog", 0));
        label_ilosc->setText(QApplication::translate("produkt_ilosc", "PODAJ ILO\305\232\304\206:", 0));
        pushButton->setText(QApplication::translate("produkt_ilosc", "Zatwierd\305\272", 0));
    } // retranslateUi

};

namespace Ui {
    class produkt_ilosc: public Ui_produkt_ilosc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUKT_ILOSC_H
