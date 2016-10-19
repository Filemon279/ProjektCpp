/********************************************************************************
** Form generated from reading UI file 'magazynwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYNWINDOW_H
#define UI_MAGAZYNWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_magazynWindow
{
public:
    QGroupBox *asortymentBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *magazynWindow)
    {
        if (magazynWindow->objectName().isEmpty())
            magazynWindow->setObjectName(QStringLiteral("magazynWindow"));
        magazynWindow->resize(800, 600);
        magazynWindow->setStyleSheet(QStringLiteral("#magazynWindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        asortymentBox = new QGroupBox(magazynWindow);
        asortymentBox->setObjectName(QStringLiteral("asortymentBox"));
        asortymentBox->setGeometry(QRect(20, 20, 761, 361));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        asortymentBox->setFont(font);
        asortymentBox->setStyleSheet(QStringLiteral("#asortymentBox {color:white}"));
        scrollArea = new QScrollArea(asortymentBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 80, 741, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 739, 229));
        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 741, 231));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(asortymentBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 101, 23));
        lineEdit = new QLineEdit(asortymentBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(580, 51, 171, 21));
        pushButton_2 = new QPushButton(asortymentBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 320, 111, 31));
        pushButton_3 = new QPushButton(asortymentBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(670, 320, 81, 31));

        retranslateUi(magazynWindow);

        QMetaObject::connectSlotsByName(magazynWindow);
    } // setupUi

    void retranslateUi(QDialog *magazynWindow)
    {
        magazynWindow->setWindowTitle(QApplication::translate("magazynWindow", "ShoppedOUT - Magazyn", 0));
        asortymentBox->setTitle(QApplication::translate("magazynWindow", "Asortyment", 0));
        pushButton->setText(QApplication::translate("magazynWindow", "Skanuj", 0));
        pushButton_2->setText(QApplication::translate("magazynWindow", "Dodaj Wiele", 0));
        pushButton_3->setText(QApplication::translate("magazynWindow", "Usu\305\204", 0));
    } // retranslateUi

};

namespace Ui {
    class magazynWindow: public Ui_magazynWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYNWINDOW_H
