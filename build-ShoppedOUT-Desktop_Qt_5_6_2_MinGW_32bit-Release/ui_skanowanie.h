/********************************************************************************
** Form generated from reading UI file 'skanowanie.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKANOWANIE_H
#define UI_SKANOWANIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Skanowanie
{
public:
    QPushButton *zaplacButton;
    QTableWidget *Zeskanowane;
    QLabel *label;
    QLabel *label_suma;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QLineEdit *productKey;
    QTextEdit *panel;

    void setupUi(QDialog *Skanowanie)
    {
        if (Skanowanie->objectName().isEmpty())
            Skanowanie->setObjectName(QStringLiteral("Skanowanie"));
        Skanowanie->resize(712, 514);
        Skanowanie->setStyleSheet(QLatin1String("#Skanowanie {border-image: url(:/img/Img/bg_dark.jpg);\n"
"}\n"
"\n"
""));
        zaplacButton = new QPushButton(Skanowanie);
        zaplacButton->setObjectName(QStringLiteral("zaplacButton"));
        zaplacButton->setGeometry(QRect(270, 460, 181, 41));
        zaplacButton->setAutoDefault(false);
        Zeskanowane = new QTableWidget(Skanowanie);
        Zeskanowane->setObjectName(QStringLiteral("Zeskanowane"));
        Zeskanowane->setEnabled(true);
        Zeskanowane->setGeometry(QRect(10, 120, 691, 251));
        Zeskanowane->setSelectionMode(QAbstractItemView::SingleSelection);
        Zeskanowane->setSelectionBehavior(QAbstractItemView::SelectRows);
        Zeskanowane->setTextElideMode(Qt::ElideMiddle);
        Zeskanowane->setGridStyle(Qt::SolidLine);
        Zeskanowane->setRowCount(0);
        Zeskanowane->setColumnCount(0);
        Zeskanowane->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        Zeskanowane->horizontalHeader()->setStretchLastSection(false);
        Zeskanowane->verticalHeader()->setCascadingSectionResizes(false);
        Zeskanowane->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        Zeskanowane->verticalHeader()->setStretchLastSection(false);
        label = new QLabel(Skanowanie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(530, 430, 51, 16));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_suma = new QLabel(Skanowanie);
        label_suma->setObjectName(QStringLiteral("label_suma"));
        label_suma->setGeometry(QRect(590, 420, 101, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        label_suma->setFont(font1);
        label_suma->setStyleSheet(QStringLiteral("color:white"));
        label_suma->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(Skanowanie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 10, 181, 16));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:white"));
        pushButton_2 = new QPushButton(Skanowanie);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 420, 101, 23));
        productKey = new QLineEdit(Skanowanie);
        productKey->setObjectName(QStringLiteral("productKey"));
        productKey->setEnabled(true);
        productKey->setGeometry(QRect(560, 100, 141, 20));
        productKey->setReadOnly(true);
        panel = new QTextEdit(Skanowanie);
        panel->setObjectName(QStringLiteral("panel"));
        panel->setGeometry(QRect(10, 380, 691, 41));

        retranslateUi(Skanowanie);

        zaplacButton->setDefault(false);


        QMetaObject::connectSlotsByName(Skanowanie);
    } // setupUi

    void retranslateUi(QDialog *Skanowanie)
    {
        Skanowanie->setWindowTitle(QApplication::translate("Skanowanie", "Dialog", 0));
        zaplacButton->setText(QApplication::translate("Skanowanie", "Zap\305\202a\304\207", 0));
        label->setStyleSheet(QApplication::translate("Skanowanie", "color:white", 0));
        label->setText(QApplication::translate("Skanowanie", "SUMA:", 0));
        label_suma->setText(QApplication::translate("Skanowanie", "12.13 z\305\202", 0));
        label_2->setText(QApplication::translate("Skanowanie", "ZESKANUJ PRODUKT", 0));
        pushButton_2->setText(QApplication::translate("Skanowanie", "Usu\305\204 zaznaczony", 0));
    } // retranslateUi

};

namespace Ui {
    class Skanowanie: public Ui_Skanowanie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKANOWANIE_H
