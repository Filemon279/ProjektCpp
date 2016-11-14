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
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *verticalSpacer;
    QWidget *widget_Kod;
    QVBoxLayout *kodLayout;
    QLabel *label_nazwa;
    QLabel *label_opis;
    QLabel *label_kodKreskowy;
    QLabel *label_kodNumer;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_wygenerowany;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QDial *dial;
    QLabel *label_dlugosc;
    QLabel *label_3;
    QLabel *label_errors;

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
"background-color: rgba(0, 0, 0, 100);\n"
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
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 2);

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


        gridLayout->addWidget(widget_Kod, 1, 1, 1, 1);

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


        gridLayout->addWidget(verticalWidget, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 2);


        verticalLayout_4->addWidget(groupBox);


        verticalLayout_2->addLayout(verticalLayout_4);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(Kody);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QLatin1String("\n"
"QTabBar::tab {height: 70px; width: 120px};\n"
"background-color: rgba(0, 0, 0, 0);\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        tabWidget->setTabPosition(QTabWidget::South);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QLatin1String("#tab{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}\n"
""));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(20);
        gridLayout_4->setVerticalSpacing(15);
        gridLayout_4->setContentsMargins(20, 20, 20, 20);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout_4->addWidget(label, 0, 1, 1, 2);

        lineEdit_wygenerowany = new QLineEdit(tab);
        lineEdit_wygenerowany->setObjectName(QStringLiteral("lineEdit_wygenerowany"));
        lineEdit_wygenerowany->setMinimumSize(QSize(0, 50));
        lineEdit_wygenerowany->setBaseSize(QSize(0, 1));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        lineEdit_wygenerowany->setFont(font4);
        lineEdit_wygenerowany->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 100);\n"
"color:white"));
        lineEdit_wygenerowany->setAlignment(Qt::AlignCenter);
        lineEdit_wygenerowany->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit_wygenerowany, 6, 1, 1, 2);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy6);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color:white"));

        gridLayout_4->addWidget(pushButton_3, 7, 2, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy6.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy6);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));\n"
"color:white"));

        gridLayout_4->addWidget(pushButton_2, 7, 1, 1, 1);

        dial = new QDial(tab);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setStyleSheet(QStringLiteral("background-color: rgb(77, 159, 0);"));
        dial->setMinimum(5);
        dial->setMaximum(13);

        gridLayout_4->addWidget(dial, 3, 1, 1, 2);

        label_dlugosc = new QLabel(tab);
        label_dlugosc->setObjectName(QStringLiteral("label_dlugosc"));
        sizePolicy5.setHeightForWidth(label_dlugosc->sizePolicy().hasHeightForWidth());
        label_dlugosc->setSizePolicy(sizePolicy5);
        QFont font5;
        font5.setFamily(QStringLiteral("Arial"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setWeight(50);
        label_dlugosc->setFont(font5);
        label_dlugosc->setStyleSheet(QStringLiteral("color:white"));
        label_dlugosc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_dlugosc, 4, 2, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:white"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_3, 4, 1, 1, 1);

        label_errors = new QLabel(tab);
        label_errors->setObjectName(QStringLiteral("label_errors"));
        sizePolicy5.setHeightForWidth(label_errors->sizePolicy().hasHeightForWidth());
        label_errors->setSizePolicy(sizePolicy5);
        QFont font6;
        font6.setFamily(QStringLiteral("Arial"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        label_errors->setFont(font6);
        label_errors->setStyleSheet(QStringLiteral("color:orange"));
        label_errors->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_errors, 1, 1, 1, 2);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(Kody);

        tabWidget->setCurrentIndex(0);


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
        label->setText(QApplication::translate("Kody", "GENERUJ KOD 3-9", 0));
        pushButton_3->setText(QApplication::translate("Kody", "Przypisz zaznaczonemu", 0));
        pushButton_2->setText(QApplication::translate("Kody", "Generuj", 0));
        label_dlugosc->setText(QApplication::translate("Kody", "5", 0));
        label_3->setText(QApplication::translate("Kody", "D\305\202ugo\305\233\304\207:", 0));
        label_errors->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Kody", "Generuj 3-9", 0));
    } // retranslateUi

};

namespace Ui {
    class Kody: public Ui_Kody {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KODY_H
