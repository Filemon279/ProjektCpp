/********************************************************************************
** Form generated from reading UI file 'sklepwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKLEPWINDOW_H
#define UI_SKLEPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SklepWindow
{
public:
    QGroupBox *koszykBox;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QLineEdit *displayNetto;
    QLineEdit *displayBrutto;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton_5;
    QGroupBox *wyszukajBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;

    void setupUi(QDialog *SklepWindow)
    {
        if (SklepWindow->objectName().isEmpty())
            SklepWindow->setObjectName(QStringLiteral("SklepWindow"));
        SklepWindow->resize(800, 600);
        SklepWindow->setStyleSheet(QStringLiteral("#SklepWindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        koszykBox = new QGroupBox(SklepWindow);
        koszykBox->setObjectName(QStringLiteral("koszykBox"));
        koszykBox->setGeometry(QRect(10, 110, 321, 481));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        koszykBox->setFont(font);
        koszykBox->setStyleSheet(QLatin1String("#koszykBox {color: white}\n"
""));
        label_2 = new QLabel(koszykBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 367, 51, 51));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: white"));
        pushButton_3 = new QPushButton(koszykBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 40, 301, 51));
        displayNetto = new QLineEdit(koszykBox);
        displayNetto->setObjectName(QStringLiteral("displayNetto"));
        displayNetto->setEnabled(false);
        displayNetto->setGeometry(QRect(130, 367, 113, 20));
        displayBrutto = new QLineEdit(koszykBox);
        displayBrutto->setObjectName(QStringLiteral("displayBrutto"));
        displayBrutto->setEnabled(false);
        displayBrutto->setGeometry(QRect(130, 397, 113, 20));
        label_3 = new QLabel(koszykBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 370, 47, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("color: white\n"
""));
        label_4 = new QLabel(koszykBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(250, 397, 47, 16));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: white"));
        pushButton_4 = new QPushButton(koszykBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 320, 91, 23));
        scrollArea_2 = new QScrollArea(koszykBox);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 110, 301, 211));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 299, 209));
        tableWidget = new QTableWidget(scrollAreaWidgetContents_2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 301, 221));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        pushButton_5 = new QPushButton(koszykBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 430, 301, 41));
        wyszukajBox = new QGroupBox(SklepWindow);
        wyszukajBox->setObjectName(QStringLiteral("wyszukajBox"));
        wyszukajBox->setGeometry(QRect(570, 19, 221, 571));
        wyszukajBox->setFont(font);
        wyszukajBox->setStyleSheet(QLatin1String("#wyszukajBox {color: white}\n"
""));
        pushButton = new QPushButton(wyszukajBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 30, 201, 23));
        lineEdit = new QLineEdit(wyszukajBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 60, 201, 20));
        pushButton_2 = new QPushButton(wyszukajBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 530, 201, 31));
        scrollArea = new QScrollArea(wyszukajBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 201, 431));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 199, 429));
        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 201, 431));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(SklepWindow);

        QMetaObject::connectSlotsByName(SklepWindow);
    } // setupUi

    void retranslateUi(QDialog *SklepWindow)
    {
        SklepWindow->setWindowTitle(QApplication::translate("SklepWindow", "ShoppedOUT - Sklep", 0));
        koszykBox->setTitle(QApplication::translate("SklepWindow", "Koszyk", 0));
        label_2->setText(QApplication::translate("SklepWindow", "SUMA", 0));
        pushButton_3->setText(QApplication::translate("SklepWindow", "Skanuj produkty", 0));
        label_3->setText(QApplication::translate("SklepWindow", "Netto", 0));
        label_4->setText(QApplication::translate("SklepWindow", "Brutto", 0));
        pushButton_4->setText(QApplication::translate("SklepWindow", "Usu\305\204 z koszyka", 0));
        pushButton_5->setText(QApplication::translate("SklepWindow", "Zap\305\202a\304\207", 0));
        wyszukajBox->setTitle(QApplication::translate("SklepWindow", "Wyszukaj", 0));
        pushButton->setText(QApplication::translate("SklepWindow", "Skanuj", 0));
        pushButton_2->setText(QApplication::translate("SklepWindow", "Dodaj do koszyka", 0));
    } // retranslateUi

};

namespace Ui {
    class SklepWindow: public Ui_SklepWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKLEPWINDOW_H
