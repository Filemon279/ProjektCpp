/********************************************************************************
** Form generated from reading UI file 'kody.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KODY_H
#define UI_KODY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Kody
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *Asortyment;
    QLabel *label_info;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QWidget *widget_Kod;
    QVBoxLayout *kodLayout;
    QLabel *label_nazwa;
    QLabel *label_opis;
    QLabel *label_kodKreskowy;
    QLabel *label_kodNumer;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_3;
    QWidget *tab_2;

    void setupUi(QDialog *Kody)
    {
        if (Kody->objectName().isEmpty())
            Kody->setObjectName(QStringLiteral("Kody"));
        Kody->resize(1058, 657);
        Kody->setStyleSheet(QStringLiteral("#Kody {background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}"));
        horizontalLayout_2 = new QHBoxLayout(Kody);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 20, 10, 20);
        Asortyment = new QTableWidget(Kody);
        Asortyment->setObjectName(QStringLiteral("Asortyment"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Asortyment->sizePolicy().hasHeightForWidth());
        Asortyment->setSizePolicy(sizePolicy);
        Asortyment->setStyleSheet(QLatin1String("gridline-color: white; \n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));\n"
"background-image: url(:/img/Img/white_40_small.png);\n"
" background-repeat: no-repeat;\n"
" background-position: center;\n"
"background-opacity: 153;\n"
"gridline-color:white;\n"
"color:white\n"
""));

        verticalLayout->addWidget(Asortyment);

        label_info = new QLabel(Kody);
        label_info->setObjectName(QStringLiteral("label_info"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_info->setFont(font);

        verticalLayout->addWidget(label_info);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 20, 10, 20);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox = new QGroupBox(Kody);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QLatin1String("color:white\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 20, -1, 20);
        widget_Kod = new QWidget(groupBox);
        widget_Kod->setObjectName(QStringLiteral("widget_Kod"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_Kod->sizePolicy().hasHeightForWidth());
        widget_Kod->setSizePolicy(sizePolicy2);
        kodLayout = new QVBoxLayout(widget_Kod);
        kodLayout->setSpacing(0);
        kodLayout->setObjectName(QStringLiteral("kodLayout"));
        label_nazwa = new QLabel(widget_Kod);
        label_nazwa->setObjectName(QStringLiteral("label_nazwa"));
        label_nazwa->setFont(font);
        label_nazwa->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:black"));
        label_nazwa->setAlignment(Qt::AlignCenter);
        label_nazwa->setMargin(5);

        kodLayout->addWidget(label_nazwa);

        label_opis = new QLabel(widget_Kod);
        label_opis->setObjectName(QStringLiteral("label_opis"));
        label_opis->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:black"));
        label_opis->setAlignment(Qt::AlignCenter);
        label_opis->setMargin(5);

        kodLayout->addWidget(label_opis);

        label_kodKreskowy = new QLabel(widget_Kod);
        label_kodKreskowy->setObjectName(QStringLiteral("label_kodKreskowy"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_kodKreskowy->sizePolicy().hasHeightForWidth());
        label_kodKreskowy->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Free 3 of 9 Extended"));
        font2.setPointSize(50);
        label_kodKreskowy->setFont(font2);
        label_kodKreskowy->setStyleSheet(QLatin1String("color:black;\n"
"background-color: rgb(255, 255, 255);"));
        label_kodKreskowy->setAlignment(Qt::AlignCenter);
        label_kodKreskowy->setMargin(5);

        kodLayout->addWidget(label_kodKreskowy);

        label_kodNumer = new QLabel(widget_Kod);
        label_kodNumer->setObjectName(QStringLiteral("label_kodNumer"));
        label_kodNumer->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color:black"));
        label_kodNumer->setFrameShadow(QFrame::Plain);
        label_kodNumer->setLineWidth(1);
        label_kodNumer->setMidLineWidth(0);
        label_kodNumer->setTextFormat(Qt::AutoText);
        label_kodNumer->setScaledContents(false);
        label_kodNumer->setAlignment(Qt::AlignCenter);
        label_kodNumer->setWordWrap(false);
        label_kodNumer->setMargin(5);

        kodLayout->addWidget(label_kodNumer);


        gridLayout->addWidget(widget_Kod, 0, 1, 1, 1);

        verticalWidget = new QWidget(groupBox);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        sizePolicy2.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(verticalWidget);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton = new QPushButton(verticalWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy4);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy4.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy4);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));"));

        verticalLayout_3->addWidget(pushButton_2);


        gridLayout->addWidget(verticalWidget, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(Kody);
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
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Kody);

        QMetaObject::connectSlotsByName(Kody);
    } // setupUi

    void retranslateUi(QDialog *Kody)
    {
        Kody->setWindowTitle(QApplication::translate("Kody", "Dialog", 0));
        label_info->setText(QString());
        groupBox->setTitle(QApplication::translate("Kody", "Kod Kreskowy", 0));
        label_nazwa->setText(QApplication::translate("Kody", "Nazwa", 0));
        label_opis->setText(QApplication::translate("Kody", "Opis", 0));
        label_kodKreskowy->setText(QApplication::translate("Kody", "*04041995*", 0));
        label_kodNumer->setText(QApplication::translate("Kody", "04041995", 0));
        pushButton->setText(QApplication::translate("Kody", "Zapisz do pliku", 0));
        pushButton_2->setText(QApplication::translate("Kody", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("Kody", "PushButton", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Kody", "Tab 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Kody", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class Kody: public Ui_Kody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KODY_H
