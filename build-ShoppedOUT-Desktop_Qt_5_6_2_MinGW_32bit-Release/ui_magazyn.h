/********************************************************************************
** Form generated from reading UI file 'magazyn.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYN_H
#define UI_MAGAZYN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "wyswietl.h"

QT_BEGIN_NAMESPACE

class Ui_Magazyn
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_szukaj;
    QTableWidget *Asortyment;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_nieZnaleziono;
    QPushButton *pushButton_dodajProdukt;
    QLabel *label_info;
    QVBoxLayout *verticalLayout;
    wyswietl *graphicsView;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_down;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_save;
    QPushButton *pushButton_add;
    QPushButton *pushButton_up;
    QPushButton *pushButton_delete;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_dodaj_nowy;

    void setupUi(QDialog *Magazyn)
    {
        if (Magazyn->objectName().isEmpty())
            Magazyn->setObjectName(QStringLiteral("Magazyn"));
        Magazyn->setWindowModality(Qt::NonModal);
        Magazyn->resize(1110, 699);
        Magazyn->setStyleSheet(QStringLiteral("#Magazyn{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}"));
        horizontalLayout_3 = new QHBoxLayout(Magazyn);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 20, 10, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Magazyn);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color:white"));

        horizontalLayout->addWidget(label_2);

        lineEdit_szukaj = new QLineEdit(Magazyn);
        lineEdit_szukaj->setObjectName(QStringLiteral("lineEdit_szukaj"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit_szukaj->setFont(font1);
        lineEdit_szukaj->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 90);color:white"));
        lineEdit_szukaj->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_szukaj);


        verticalLayout_2->addLayout(horizontalLayout);

        Asortyment = new QTableWidget(Magazyn);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        Asortyment->setFont(font2);
        Asortyment->setStyleSheet(QLatin1String("gridline-color: white; \n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"background-image: url(:/img/Img/white_40_small.png);\n"
" background-repeat: no-repeat;\n"
"\n"
" background-position: center;\n"
"background-opacity: 153;\n"
"gridline-color:white;\n"
"color:white\n"
""));

        verticalLayout_2->addWidget(Asortyment);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_nieZnaleziono = new QLabel(Magazyn);
        label_nieZnaleziono->setObjectName(QStringLiteral("label_nieZnaleziono"));
        label_nieZnaleziono->setFont(font1);
        label_nieZnaleziono->setStyleSheet(QStringLiteral("color:red;background-color: rgba(0,0,0,100);"));
        label_nieZnaleziono->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_nieZnaleziono);

        pushButton_dodajProdukt = new QPushButton(Magazyn);
        pushButton_dodajProdukt->setObjectName(QStringLiteral("pushButton_dodajProdukt"));
        pushButton_dodajProdukt->setMinimumSize(QSize(0, 80));
        pushButton_dodajProdukt->setFont(font);
        pushButton_dodajProdukt->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255));color:white"));

        verticalLayout_3->addWidget(pushButton_dodajProdukt);


        verticalLayout_2->addLayout(verticalLayout_3);

        label_info = new QLabel(Magazyn);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label_info->setFont(font3);
        label_info->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 100);"));

        verticalLayout_2->addWidget(label_info);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 20, 10, 20);
        graphicsView = new wyswietl(Magazyn);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setMinimumSize(QSize(0, 0));
        graphicsView->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(graphicsView);

        tabWidget = new QTabWidget(Magazyn);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("\n"
"QTabBar::tab {height: 70px; width: 120px};\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_down = new QPushButton(tab);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy);
        pushButton_down->setFont(font);
        pushButton_down->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_3->addWidget(pushButton_down, 1, 0, 1, 1);

        pushButton_refresh = new QPushButton(tab);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_refresh->sizePolicy().hasHeightForWidth());
        pushButton_refresh->setSizePolicy(sizePolicy1);
        pushButton_refresh->setFont(font);
        pushButton_refresh->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_refresh, 1, 1, 1, 1);

        pushButton_save = new QPushButton(tab);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        sizePolicy1.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy1);
        pushButton_save->setFont(font);
        pushButton_save->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_save, 1, 2, 1, 1);

        pushButton_add = new QPushButton(tab);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        sizePolicy1.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy1);
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_add, 0, 1, 1, 1);

        pushButton_up = new QPushButton(tab);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        sizePolicy1.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QStringLiteral("FontAwesome"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_up->setFont(font4);
        pushButton_up->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_3->addWidget(pushButton_up, 0, 0, 1, 1);

        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy1.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy1);
        pushButton_delete->setFont(font);
        pushButton_delete->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_delete, 0, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_4, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButton_dodaj_nowy = new QPushButton(tab_3);
        pushButton_dodaj_nowy->setObjectName(QStringLiteral("pushButton_dodaj_nowy"));
        sizePolicy1.setHeightForWidth(pushButton_dodaj_nowy->sizePolicy().hasHeightForWidth());
        pushButton_dodaj_nowy->setSizePolicy(sizePolicy1);
        pushButton_dodaj_nowy->setFont(font3);
        pushButton_dodaj_nowy->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_2->addWidget(pushButton_dodaj_nowy, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(Magazyn);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Magazyn);
    } // setupUi

    void retranslateUi(QDialog *Magazyn)
    {
        Magazyn->setWindowTitle(QApplication::translate("Magazyn", "Dialog", 0));
        label_2->setText(QApplication::translate("Magazyn", "SZUKAJ:", 0));
        lineEdit_szukaj->setText(QString());
        label_nieZnaleziono->setText(QApplication::translate("Magazyn", "Nic nie znaleziono", 0));
        pushButton_dodajProdukt->setText(QApplication::translate("Magazyn", "Dodaj produkt", 0));
        label_info->setText(QString());
        pushButton_down->setText(QApplication::translate("Magazyn", "[DOWN]", 0));
        pushButton_refresh->setText(QApplication::translate("Magazyn", "OD\305\232WIE\305\273 BAZ\304\230", 0));
        pushButton_save->setText(QApplication::translate("Magazyn", "ZAPISZ BAZE", 0));
        pushButton_add->setText(QApplication::translate("Magazyn", "DODAJ REKORD", 0));
        pushButton_up->setText(QApplication::translate("Magazyn", "[UP]", 0));
        pushButton_delete->setText(QApplication::translate("Magazyn", "USU\305\203 REKORD", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Magazyn", "Baza Danych", 0));
        pushButton->setText(QApplication::translate("Magazyn", "USU\305\203 LOKALIZACJ\304\230", 0));
        pushButton_2->setText(QApplication::translate("Magazyn", "PRZYPISZ LOKALIZACJ\304\230", 0));
        pushButton_3->setText(QApplication::translate("Magazyn", "WYCZY\305\232\304\206 WSZYSTKO", 0));
        pushButton_4->setText(QApplication::translate("Magazyn", "PRZYPISZ WSZYSTKIM", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Magazyn", "Mapa Magazynu", 0));
        pushButton_dodaj_nowy->setText(QApplication::translate("Magazyn", "DODAJ NOWY PRODUKT", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Magazyn", "Dodaj", 0));
    } // retranslateUi

};

namespace Ui {
    class Magazyn: public Ui_Magazyn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYN_H
