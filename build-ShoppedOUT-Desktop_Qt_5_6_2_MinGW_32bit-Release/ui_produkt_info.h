/********************************************************************************
** Form generated from reading UI file 'produkt_info.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUKT_INFO_H
#define UI_PRODUKT_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_produkt_info
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_ilosc;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_netto;
    QLabel *label_brutto;
    QLabel *label_brutto_opis;
    QLabel *label_ilosc_opis;
    QLabel *label_netto_opis;
    QLabel *label_opis;
    QLabel *label_nazwa;
    QLabel *label_info;
    QLabel *label_vat_opis;
    QLabel *label_vat;

    void setupUi(QDialog *produkt_info)
    {
        if (produkt_info->objectName().isEmpty())
            produkt_info->setObjectName(QStringLiteral("produkt_info"));
        produkt_info->resize(648, 372);
        produkt_info->setStyleSheet(QStringLiteral("#produkt_info{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255));}"));
        gridLayout = new QGridLayout(produkt_info);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 30, -1, -1);
        pushButton = new QPushButton(produkt_info);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255));color:white;"));

        gridLayout->addWidget(pushButton, 8, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        label_ilosc = new QLabel(produkt_info);
        label_ilosc->setObjectName(QStringLiteral("label_ilosc"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        label_ilosc->setFont(font1);

        gridLayout->addWidget(label_ilosc, 5, 2, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 3, 1, 1);

        label_netto = new QLabel(produkt_info);
        label_netto->setObjectName(QStringLiteral("label_netto"));
        label_netto->setFont(font1);

        gridLayout->addWidget(label_netto, 6, 2, 1, 2);

        label_brutto = new QLabel(produkt_info);
        label_brutto->setObjectName(QStringLiteral("label_brutto"));
        label_brutto->setFont(font1);

        gridLayout->addWidget(label_brutto, 7, 2, 1, 2);

        label_brutto_opis = new QLabel(produkt_info);
        label_brutto_opis->setObjectName(QStringLiteral("label_brutto_opis"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_brutto_opis->setFont(font2);
        label_brutto_opis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_brutto_opis, 7, 0, 1, 2);

        label_ilosc_opis = new QLabel(produkt_info);
        label_ilosc_opis->setObjectName(QStringLiteral("label_ilosc_opis"));
        label_ilosc_opis->setFont(font2);
        label_ilosc_opis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_ilosc_opis, 5, 0, 1, 2);

        label_netto_opis = new QLabel(produkt_info);
        label_netto_opis->setObjectName(QStringLiteral("label_netto_opis"));
        label_netto_opis->setFont(font2);
        label_netto_opis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_netto_opis, 6, 0, 1, 2);

        label_opis = new QLabel(produkt_info);
        label_opis->setObjectName(QStringLiteral("label_opis"));
        label_opis->setFont(font1);
        label_opis->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_opis, 2, 0, 1, 4);

        label_nazwa = new QLabel(produkt_info);
        label_nazwa->setObjectName(QStringLiteral("label_nazwa"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_nazwa->sizePolicy().hasHeightForWidth());
        label_nazwa->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        label_nazwa->setFont(font3);
        label_nazwa->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_nazwa, 1, 0, 1, 4);

        label_info = new QLabel(produkt_info);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setFont(font1);

        gridLayout->addWidget(label_info, 8, 3, 1, 1);

        label_vat_opis = new QLabel(produkt_info);
        label_vat_opis->setObjectName(QStringLiteral("label_vat_opis"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_vat_opis->sizePolicy().hasHeightForWidth());
        label_vat_opis->setSizePolicy(sizePolicy1);
        label_vat_opis->setFont(font2);
        label_vat_opis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_vat_opis, 3, 1, 1, 1);

        label_vat = new QLabel(produkt_info);
        label_vat->setObjectName(QStringLiteral("label_vat"));
        sizePolicy1.setHeightForWidth(label_vat->sizePolicy().hasHeightForWidth());
        label_vat->setSizePolicy(sizePolicy1);
        label_vat->setFont(font1);

        gridLayout->addWidget(label_vat, 3, 2, 1, 1);


        retranslateUi(produkt_info);

        QMetaObject::connectSlotsByName(produkt_info);
    } // setupUi

    void retranslateUi(QDialog *produkt_info)
    {
        produkt_info->setWindowTitle(QApplication::translate("produkt_info", "Dialog", 0));
        pushButton->setText(QApplication::translate("produkt_info", "Zamknij", 0));
        label_ilosc->setText(QApplication::translate("produkt_info", "0 szt.", 0));
        label_netto->setText(QApplication::translate("produkt_info", "00.00z\305\202", 0));
        label_brutto->setText(QApplication::translate("produkt_info", "00.00z\305\202", 0));
        label_brutto_opis->setText(QApplication::translate("produkt_info", "Cena Brutto:", 0));
        label_ilosc_opis->setText(QApplication::translate("produkt_info", "STAN MAGAZYNOWY:", 0));
        label_netto_opis->setText(QApplication::translate("produkt_info", "Cena Netto:", 0));
        label_opis->setText(QApplication::translate("produkt_info", "OPIS", 0));
        label_nazwa->setText(QApplication::translate("produkt_info", "NAZWA PRODUKTU", 0));
        label_info->setText(QApplication::translate("produkt_info", "STAN PO\305\201\304\204CZENIA", 0));
        label_vat_opis->setText(QApplication::translate("produkt_info", "STAWKA VAT:", 0));
        label_vat->setText(QApplication::translate("produkt_info", "0%", 0));
    } // retranslateUi

};

namespace Ui {
    class produkt_info: public Ui_produkt_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUKT_INFO_H
