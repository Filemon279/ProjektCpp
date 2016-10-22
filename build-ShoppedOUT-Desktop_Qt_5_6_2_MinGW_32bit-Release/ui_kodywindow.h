/********************************************************************************
** Form generated from reading UI file 'kodywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KODYWINDOW_H
#define UI_KODYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_kodywindow
{
public:
    QLabel *label;
    QGroupBox *kodyBox;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_7;

    void setupUi(QDialog *kodywindow)
    {
        if (kodywindow->objectName().isEmpty())
            kodywindow->setObjectName(QStringLiteral("kodywindow"));
        kodywindow->resize(800, 600);
        kodywindow->setStyleSheet(QStringLiteral("#kodywindow {border-image: url(:/img/Img/bg_dark.jpg);}"));
        label = new QLabel(kodywindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(570, 560, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color:white\n"
""));
        kodyBox = new QGroupBox(kodywindow);
        kodyBox->setObjectName(QStringLiteral("kodyBox"));
        kodyBox->setGeometry(QRect(10, 10, 371, 401));
        kodyBox->setFont(font);
        kodyBox->setStyleSheet(QStringLiteral("#kodyBox {color:white}"));
        graphicsView = new QGraphicsView(kodyBox);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 30, 351, 151));
        pushButton = new QPushButton(kodyBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 330, 131, 31));
        pushButton_2 = new QPushButton(kodyBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 370, 91, 21));
        lineEdit = new QLineEdit(kodyBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 190, 281, 20));
        lineEdit_2 = new QLineEdit(kodyBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(10, 370, 131, 20));
        label_2 = new QLabel(kodyBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(25, 190, 47, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:white"));
        label_3 = new QLabel(kodyBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 220, 61, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color:white"));
        lineEdit_3 = new QLineEdit(kodyBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(80, 220, 281, 20));
        lineEdit_4 = new QLineEdit(kodyBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEnabled(false);
        lineEdit_4->setGeometry(QRect(150, 370, 113, 20));
        pushButton_3 = new QPushButton(kodyBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(150, 330, 113, 31));
        label_4 = new QLabel(kodyBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(15, 250, 81, 20));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("color:white"));
        lineEdit_5 = new QLineEdit(kodyBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(80, 250, 31, 20));
        label_5 = new QLabel(kodyBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 250, 16, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color:white"));
        label_6 = new QLabel(kodyBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 250, 81, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color:white"));
        lineEdit_6 = new QLineEdit(kodyBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(140, 270, 201, 20));
        radioButton = new QRadioButton(kodyBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(240, 250, 61, 17));
        radioButton->setFont(font1);
        radioButton->setStyleSheet(QLatin1String("color:white\n"
""));
        radioButton_2 = new QRadioButton(kodyBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(300, 250, 61, 17));
        radioButton_2->setFont(font1);
        radioButton_2->setStyleSheet(QLatin1String("color:white\n"
""));
        label_7 = new QLabel(kodyBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 270, 21, 20));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color:white"));

        retranslateUi(kodywindow);

        QMetaObject::connectSlotsByName(kodywindow);
    } // setupUi

    void retranslateUi(QDialog *kodywindow)
    {
        kodywindow->setWindowTitle(QApplication::translate("kodywindow", "ShoppedOUT - Generator kod\303\263w", 0));
        label->setText(QApplication::translate("kodywindow", "Baza danych:", 0));
        kodyBox->setTitle(QApplication::translate("kodywindow", "Stw\303\263rz kod kreskowy", 0));
        pushButton->setText(QApplication::translate("kodywindow", "Generuj Kod", 0));
        pushButton_2->setText(QApplication::translate("kodywindow", "Zapisz", 0));
        label_2->setText(QApplication::translate("kodywindow", "Nazwa:", 0));
        label_3->setText(QApplication::translate("kodywindow", "Opis:", 0));
        pushButton_3->setText(QApplication::translate("kodywindow", "Wska\305\274 Lokalizacje", 0));
        label_4->setText(QApplication::translate("kodywindow", "Podatek:", 0));
        label_5->setText(QApplication::translate("kodywindow", "%", 0));
        label_6->setText(QApplication::translate("kodywindow", "Cena:", 0));
        radioButton->setText(QApplication::translate("kodywindow", "Netto", 0));
        radioButton_2->setText(QApplication::translate("kodywindow", "Brutto", 0));
        label_7->setText(QApplication::translate("kodywindow", "z\305\202", 0));
    } // retranslateUi

};

namespace Ui {
    class kodywindow: public Ui_kodywindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KODYWINDOW_H
