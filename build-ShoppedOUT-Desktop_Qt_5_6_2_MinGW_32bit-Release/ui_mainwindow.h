/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *MainWidget;
    QLabel *logo;
    QPushButton *sklepButton;
    QPushButton *codeButton;
    QPushButton *settingButton;
    QPushButton *magazynButton;
    QTextEdit *adminText;
    QLabel *statusBazy;
    QPushButton *zakupyButton;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(980, 636);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setWindowOpacity(1);
        MainWindow->setStyleSheet(QStringLiteral("#MainWindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        MainWindow->setAnimated(true);
        MainWidget = new QWidget(MainWindow);
        MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->setAutoFillBackground(false);
        MainWidget->setStyleSheet(QLatin1String("#MainWidget {border-image: url(:/img/Img/bg_dark.jpg);}\n"
"\n"
""));
        logo = new QLabel(MainWidget);
        logo->setObjectName(QStringLiteral("logo"));
        logo->setGeometry(QRect(310, 10, 371, 81));
        logo->setStyleSheet(QStringLiteral("border-image: url(:/img/Img/long_shoppedOUT_logo_white.png);"));
        sklepButton = new QPushButton(MainWidget);
        sklepButton->setObjectName(QStringLiteral("sklepButton"));
        sklepButton->setGeometry(QRect(90, 130, 321, 171));
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
        codeButton = new QPushButton(MainWidget);
        codeButton->setObjectName(QStringLiteral("codeButton"));
        codeButton->setGeometry(QRect(90, 340, 321, 171));
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
        settingButton = new QPushButton(MainWidget);
        settingButton->setObjectName(QStringLiteral("settingButton"));
        settingButton->setGeometry(QRect(570, 340, 321, 171));
        settingButton->setStyleSheet(QLatin1String("#settingButton {\n"
"border-image: url(:/img/Img/ustawienia.png);\n"
"font: 87 20pt \"Arial Black\";\n"
"color:white;\n"
"border-width: 3px;\n"
"border-radius: 7px;\n"
"}\n"
"#settingButton:pressed {\n"
"border-image: url(:/img/Img/ustawienia_clicked.png);\n"
"\n"
"}\n"
"\n"
""));
        magazynButton = new QPushButton(MainWidget);
        magazynButton->setObjectName(QStringLiteral("magazynButton"));
        magazynButton->setGeometry(QRect(570, 130, 321, 171));
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
        adminText = new QTextEdit(MainWidget);
        adminText->setObjectName(QStringLiteral("adminText"));
        adminText->setEnabled(false);
        adminText->setGeometry(QRect(670, 570, 311, 71));
        statusBazy = new QLabel(MainWidget);
        statusBazy->setObjectName(QStringLiteral("statusBazy"));
        statusBazy->setGeometry(QRect(20, 590, 221, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        statusBazy->setFont(font);
        statusBazy->setStyleSheet(QLatin1String("color:green\n"
""));
        zakupyButton = new QPushButton(MainWidget);
        zakupyButton->setObjectName(QStringLiteral("zakupyButton"));
        zakupyButton->setGeometry(QRect(10, 580, 141, 41));
        pushButton = new QPushButton(MainWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(784, 10, 191, 51));
        pushButton_2 = new QPushButton(MainWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 191, 51));
        MainWindow->setCentralWidget(MainWidget);

        retranslateUi(MainWindow);

        magazynButton->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ShoppedOUT", 0));
        logo->setText(QString());
        sklepButton->setText(QApplication::translate("MainWindow", "SKLEP", 0));
        codeButton->setText(QApplication::translate("MainWindow", "KODY KRESKOWE", 0));
        settingButton->setText(QApplication::translate("MainWindow", "USTAWIENIA", 0));
        magazynButton->setText(QApplication::translate("MainWindow", "MAGAZYN", 0));
        statusBazy->setText(QString());
        zakupyButton->setText(QApplication::translate("MainWindow", "TEST - ZAKUPY", 0));
        pushButton->setText(QApplication::translate("MainWindow", "TEST - MAGAZYN", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "TEST - KODY", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
