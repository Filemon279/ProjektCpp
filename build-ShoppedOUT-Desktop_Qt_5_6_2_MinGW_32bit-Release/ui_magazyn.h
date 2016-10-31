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
#include <QtWidgets/QGraphicsView>
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

QT_BEGIN_NAMESPACE

class Ui_Magazyn
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *Asortyment;
    QLabel *label_info;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_up;
    QPushButton *pushButton_add;
    QPushButton *pushButton_down;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_save;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;

    void setupUi(QDialog *Magazyn)
    {
        if (Magazyn->objectName().isEmpty())
            Magazyn->setObjectName(QStringLiteral("Magazyn"));
        Magazyn->resize(1110, 699);
        Magazyn->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));"));
        horizontalLayout_3 = new QHBoxLayout(Magazyn);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 20, 10, 20);
        Asortyment = new QTableWidget(Magazyn);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        Asortyment->setFont(font);
        Asortyment->setStyleSheet(QLatin1String("gridline-color: white; \n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"background-image: url(:/img/Img/white_40_small.png);\n"
" background-repeat: no-repeat;\n"
" background-position: center;\n"
"background-opacity: 153;\n"
"gridline-color:white;\n"
"color:white\n"
""));

        verticalLayout_2->addWidget(Asortyment);

        label_info = new QLabel(Magazyn);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_info->setFont(font1);
        label_info->setStyleSheet(QStringLiteral("background-color: rgb(0, 123, 255);"));

        verticalLayout_2->addWidget(label_info);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 20, 10, 20);
        graphicsView = new QGraphicsView(Magazyn);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

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
        pushButton_up = new QPushButton(tab);
        pushButton_up->setObjectName(QStringLiteral("pushButton_up"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_up->sizePolicy().hasHeightForWidth());
        pushButton_up->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("FontAwesome"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_up->setFont(font2);
        pushButton_up->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_3->addWidget(pushButton_up, 0, 0, 1, 1);

        pushButton_add = new QPushButton(tab);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_add->setFont(font3);
        pushButton_add->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_add, 0, 1, 1, 1);

        pushButton_down = new QPushButton(tab);
        pushButton_down->setObjectName(QStringLiteral("pushButton_down"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_down->sizePolicy().hasHeightForWidth());
        pushButton_down->setSizePolicy(sizePolicy1);
        pushButton_down->setFont(font3);
        pushButton_down->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        gridLayout_3->addWidget(pushButton_down, 1, 0, 1, 1);

        pushButton_delete = new QPushButton(tab);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        sizePolicy.setHeightForWidth(pushButton_delete->sizePolicy().hasHeightForWidth());
        pushButton_delete->setSizePolicy(sizePolicy);
        pushButton_delete->setFont(font3);
        pushButton_delete->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_delete, 0, 2, 1, 1);

        pushButton_refresh = new QPushButton(tab);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        sizePolicy.setHeightForWidth(pushButton_refresh->sizePolicy().hasHeightForWidth());
        pushButton_refresh->setSizePolicy(sizePolicy);
        pushButton_refresh->setFont(font3);
        pushButton_refresh->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_refresh, 1, 1, 1, 1);

        pushButton_save = new QPushButton(tab);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        sizePolicy.setHeightForWidth(pushButton_save->sizePolicy().hasHeightForWidth());
        pushButton_save->setSizePolicy(sizePolicy);
        pushButton_save->setFont(font3);
        pushButton_save->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_3->addWidget(pushButton_save, 1, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font3);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setFont(font3);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(159, 255, 106, 255), stop:0.994318 rgba(30, 30, 30, 255));"));

        gridLayout_4->addWidget(pushButton_4, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(235, 235, 235);"));

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 2);

        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_2->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(tab_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(14, 146, 0, 255), stop:1 rgba(0, 255, 104, 255));"));

        gridLayout_2->addWidget(pushButton_6, 2, 1, 1, 1);

        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("COLOR:WHITE;\n"
"background-color: rgb(0, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(Magazyn);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Magazyn);
    } // setupUi

    void retranslateUi(QDialog *Magazyn)
    {
        Magazyn->setWindowTitle(QApplication::translate("Magazyn", "Dialog", 0));
        label_info->setText(QString());
        pushButton_up->setText(QApplication::translate("Magazyn", "[UP]", 0));
        pushButton_add->setText(QApplication::translate("Magazyn", "DODAJ REKORD", 0));
        pushButton_down->setText(QApplication::translate("Magazyn", "[DOWN]", 0));
        pushButton_delete->setText(QApplication::translate("Magazyn", "USU\305\203 REKORD", 0));
        pushButton_refresh->setText(QApplication::translate("Magazyn", "OD\305\232WIE\305\273 BAZ\304\230", 0));
        pushButton_save->setText(QApplication::translate("Magazyn", "ZAPISZ BAZE", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Magazyn", "Baza Danych", 0));
        pushButton->setText(QApplication::translate("Magazyn", "USU\305\203 LOKALIZACJ\304\230", 0));
        pushButton_2->setText(QApplication::translate("Magazyn", "PRZYPISZ LOKALIZACJ\304\230", 0));
        pushButton_3->setText(QApplication::translate("Magazyn", "WYCZY\305\232\304\206 WSZYSTKO", 0));
        pushButton_4->setText(QApplication::translate("Magazyn", "PRZYPISZ WSZYSTKIM", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Magazyn", "Mapa Magazynu", 0));
        pushButton_5->setText(QApplication::translate("Magazyn", "WYKONAJ", 0));
        pushButton_6->setText(QApplication::translate("Magazyn", "WYCZY\305\232\304\206", 0));
        label->setText(QApplication::translate("Magazyn", "MySQL Command Panel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Magazyn", "SQL", 0));
    } // retranslateUi

};

namespace Ui {
    class Magazyn: public Ui_Magazyn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYN_H
