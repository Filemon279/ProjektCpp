/********************************************************************************
** Form generated from reading UI file 'shopped_podlicz.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPED_PODLICZ_H
#define UI_SHOPPED_PODLICZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Shopped_podlicz
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLineEdit *lineEdit_zaplacono;
    QLabel *label_3;
    QPushButton *pushButton_gotowka;
    QLabel *label_dozaplaty;
    QLabel *label_reszta;
    QPushButton *pushButton_karta;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *Shopped_podlicz)
    {
        if (Shopped_podlicz->objectName().isEmpty())
            Shopped_podlicz->setObjectName(QStringLiteral("Shopped_podlicz"));
        Shopped_podlicz->resize(659, 392);
        Shopped_podlicz->setStyleSheet(QStringLiteral("#Shopped_podlicz{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}"));
        gridLayout_2 = new QGridLayout(Shopped_podlicz);
        gridLayout_2->setSpacing(10);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label = new QLabel(Shopped_podlicz);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color:white"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        lineEdit_zaplacono = new QLineEdit(Shopped_podlicz);
        lineEdit_zaplacono->setObjectName(QStringLiteral("lineEdit_zaplacono"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        lineEdit_zaplacono->setFont(font1);
        lineEdit_zaplacono->setStyleSheet(QLatin1String("color:white;\n"
"background-color: rgba(0, 0, 0, 150);"));
        lineEdit_zaplacono->setMaxLength(9);

        gridLayout_2->addWidget(lineEdit_zaplacono, 1, 1, 1, 2);

        label_3 = new QLabel(Shopped_podlicz);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color:white"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 2);

        pushButton_gotowka = new QPushButton(Shopped_podlicz);
        pushButton_gotowka->setObjectName(QStringLiteral("pushButton_gotowka"));
        pushButton_gotowka->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_gotowka->setFont(font2);
        pushButton_gotowka->setStyleSheet(QLatin1String("color:white;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255))"));

        gridLayout_2->addWidget(pushButton_gotowka, 4, 2, 1, 2);

        label_dozaplaty = new QLabel(Shopped_podlicz);
        label_dozaplaty->setObjectName(QStringLiteral("label_dozaplaty"));
        sizePolicy.setHeightForWidth(label_dozaplaty->sizePolicy().hasHeightForWidth());
        label_dozaplaty->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        label_dozaplaty->setFont(font3);
        label_dozaplaty->setStyleSheet(QStringLiteral("color:white"));

        gridLayout_2->addWidget(label_dozaplaty, 0, 2, 1, 2);

        label_reszta = new QLabel(Shopped_podlicz);
        label_reszta->setObjectName(QStringLiteral("label_reszta"));
        sizePolicy.setHeightForWidth(label_reszta->sizePolicy().hasHeightForWidth());
        label_reszta->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        label_reszta->setFont(font4);
        label_reszta->setStyleSheet(QStringLiteral("color:white"));

        gridLayout_2->addWidget(label_reszta, 2, 2, 1, 2);

        pushButton_karta = new QPushButton(Shopped_podlicz);
        pushButton_karta->setObjectName(QStringLiteral("pushButton_karta"));
        pushButton_karta->setMinimumSize(QSize(0, 50));
        pushButton_karta->setFont(font2);
        pushButton_karta->setStyleSheet(QLatin1String("color:white;\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255));"));

        gridLayout_2->addWidget(pushButton_karta, 4, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);


        retranslateUi(Shopped_podlicz);

        QMetaObject::connectSlotsByName(Shopped_podlicz);
    } // setupUi

    void retranslateUi(QDialog *Shopped_podlicz)
    {
        Shopped_podlicz->setWindowTitle(QApplication::translate("Shopped_podlicz", "Dialog", 0));
        label->setText(QApplication::translate("Shopped_podlicz", "Do zap\305\202aty:", 0));
        label_3->setText(QApplication::translate("Shopped_podlicz", "Reszta:", 0));
        pushButton_gotowka->setText(QApplication::translate("Shopped_podlicz", "Got\303\263wka", 0));
        label_dozaplaty->setText(QApplication::translate("Shopped_podlicz", "0.00z\305\202", 0));
        label_reszta->setText(QApplication::translate("Shopped_podlicz", "0.00z\305\202", 0));
        pushButton_karta->setText(QApplication::translate("Shopped_podlicz", "Karta", 0));
    } // retranslateUi

};

namespace Ui {
    class Shopped_podlicz: public Ui_Shopped_podlicz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPED_PODLICZ_H
