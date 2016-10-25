/********************************************************************************
** Form generated from reading UI file 'settingswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSWINDOW_H
#define UI_SETTINGSWINDOW_H

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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QGroupBox *BazaBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *StanPolaczenia;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QGroupBox *wizualizacjaBox;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QTextEdit *infoField;
    QLabel *label;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(800, 600);
        SettingsWindow->setStyleSheet(QStringLiteral("#SettingsWindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        BazaBox = new QGroupBox(SettingsWindow);
        BazaBox->setObjectName(QStringLiteral("BazaBox"));
        BazaBox->setGeometry(QRect(20, 390, 461, 201));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        BazaBox->setFont(font);
        BazaBox->setStyleSheet(QStringLiteral("#BazaBox {color:white}"));
        lineEdit = new QLineEdit(BazaBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 151, 20));
        lineEdit_2 = new QLineEdit(BazaBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(310, 30, 141, 20));
        pushButton_6 = new QPushButton(BazaBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 90, 61, 23));
        label_2 = new QLabel(BazaBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 30, 51, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:white"));
        label_3 = new QLabel(BazaBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 30, 51, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white"));
        label_4 = new QLabel(BazaBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 100, 191, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color:white"));
        StanPolaczenia = new QLabel(BazaBox);
        StanPolaczenia->setObjectName(QStringLiteral("StanPolaczenia"));
        StanPolaczenia->setGeometry(QRect(10, 120, 441, 71));
        StanPolaczenia->setFont(font);
        StanPolaczenia->setStyleSheet(QStringLiteral("color:white"));
        label_6 = new QLabel(BazaBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 60, 81, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:white"));
        lineEdit_3 = new QLineEdit(BazaBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 60, 141, 20));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        lineEdit_4 = new QLineEdit(BazaBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 60, 151, 20));
        label_7 = new QLabel(BazaBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 60, 51, 20));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color:white"));
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton_6->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        StanPolaczenia->raise();
        label_6->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        label_7->raise();
        wizualizacjaBox = new QGroupBox(SettingsWindow);
        wizualizacjaBox->setObjectName(QStringLiteral("wizualizacjaBox"));
        wizualizacjaBox->setGeometry(QRect(20, 10, 761, 371));
        wizualizacjaBox->setFont(font);
        wizualizacjaBox->setStyleSheet(QStringLiteral("#wizualizacjaBox {color:white}"));
        pushButton_4 = new QPushButton(wizualizacjaBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 330, 91, 31));
        pushButton_5 = new QPushButton(wizualizacjaBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 330, 91, 31));
        label_5 = new QLabel(wizualizacjaBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 170, 361, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color:white"));
        infoField = new QTextEdit(SettingsWindow);
        infoField->setObjectName(QStringLiteral("infoField"));
        infoField->setEnabled(true);
        infoField->setGeometry(QRect(500, 500, 291, 91));
        label = new QLabel(SettingsWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 480, 101, 20));
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white"));

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "ShoppedOUT - Ustawienia", 0));
        BazaBox->setTitle(QApplication::translate("SettingsWindow", "Baza Danych", 0));
        pushButton_6->setText(QApplication::translate("SettingsWindow", "Po\305\202\304\205cz", 0));
        label_2->setText(QApplication::translate("SettingsWindow", "Port", 0));
        label_3->setText(QApplication::translate("SettingsWindow", "IP", 0));
        label_4->setText(QApplication::translate("SettingsWindow", "OBECNE PO\305\201\304\204CZENIE:", 0));
        StanPolaczenia->setText(QApplication::translate("SettingsWindow", ".", 0));
        label_6->setText(QApplication::translate("SettingsWindow", "U\305\274ytkownik", 0));
        label_7->setText(QApplication::translate("SettingsWindow", "Has\305\202o", 0));
        wizualizacjaBox->setTitle(QApplication::translate("SettingsWindow", "Wizualizacja Bazy", 0));
        pushButton_4->setText(QApplication::translate("SettingsWindow", "Importuj", 0));
        pushButton_5->setText(QApplication::translate("SettingsWindow", "Stw\303\263rz Projekt", 0));
        label_5->setText(QApplication::translate("SettingsWindow", "TRWAJ\304\204 PRACE NAD T\304\204 FUNKCJONALNO\305\232CI\304\204", 0));
        label->setText(QApplication::translate("SettingsWindow", "Logs Panel", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
