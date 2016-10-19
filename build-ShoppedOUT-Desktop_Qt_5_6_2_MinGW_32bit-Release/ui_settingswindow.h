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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SettingsWindow
{
public:
    QGroupBox *BazaBox;
    QListView *listView;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *wizualizacjaBox;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *SettingsWindow)
    {
        if (SettingsWindow->objectName().isEmpty())
            SettingsWindow->setObjectName(QStringLiteral("SettingsWindow"));
        SettingsWindow->resize(800, 600);
        SettingsWindow->setStyleSheet(QStringLiteral("#SettingsWindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        BazaBox = new QGroupBox(SettingsWindow);
        BazaBox->setObjectName(QStringLiteral("BazaBox"));
        BazaBox->setGeometry(QRect(540, 20, 251, 291));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        BazaBox->setFont(font);
        BazaBox->setStyleSheet(QStringLiteral("#BazaBox {color:white}"));
        listView = new QListView(BazaBox);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 60, 231, 141));
        label = new QLabel(BazaBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 191, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color:white"));
        pushButton = new QPushButton(BazaBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 210, 111, 23));
        pushButton_2 = new QPushButton(BazaBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 210, 101, 23));
        pushButton_3 = new QPushButton(BazaBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 240, 231, 41));
        wizualizacjaBox = new QGroupBox(SettingsWindow);
        wizualizacjaBox->setObjectName(QStringLiteral("wizualizacjaBox"));
        wizualizacjaBox->setGeometry(QRect(20, 20, 501, 291));
        wizualizacjaBox->setFont(font);
        wizualizacjaBox->setStyleSheet(QStringLiteral("#wizualizacjaBox {color:white}"));
        pushButton_4 = new QPushButton(wizualizacjaBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(404, 250, 91, 31));
        pushButton_5 = new QPushButton(wizualizacjaBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(5, 250, 91, 31));

        retranslateUi(SettingsWindow);

        QMetaObject::connectSlotsByName(SettingsWindow);
    } // setupUi

    void retranslateUi(QDialog *SettingsWindow)
    {
        SettingsWindow->setWindowTitle(QApplication::translate("SettingsWindow", "ShoppedOUT - Ustawienia", 0));
        BazaBox->setTitle(QApplication::translate("SettingsWindow", "Baza Danych", 0));
        label->setText(QApplication::translate("SettingsWindow", "Zapisane Bazy Danych", 0));
        pushButton->setText(QApplication::translate("SettingsWindow", "Dodaj now\304\205 baz\304\231", 0));
        pushButton_2->setText(QApplication::translate("SettingsWindow", "Usu\305\204 Baz\304\231 z listy", 0));
        pushButton_3->setText(QApplication::translate("SettingsWindow", "Po\305\202\304\205cz", 0));
        wizualizacjaBox->setTitle(QApplication::translate("SettingsWindow", "Wizualizacja Bazy", 0));
        pushButton_4->setText(QApplication::translate("SettingsWindow", "Importuj", 0));
        pushButton_5->setText(QApplication::translate("SettingsWindow", "Stw\303\263rz Projekt", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsWindow: public Ui_SettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSWINDOW_H
