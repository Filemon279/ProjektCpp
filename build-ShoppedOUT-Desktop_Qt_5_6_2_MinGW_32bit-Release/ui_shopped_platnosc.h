/********************************************************************************
** Form generated from reading UI file 'shopped_platnosc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPED_PLATNOSC_H
#define UI_SHOPPED_PLATNOSC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_shopped_platnosc
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label_title;
    QLabel *label_movie;
    QLabel *label_end;

    void setupUi(QDialog *shopped_platnosc)
    {
        if (shopped_platnosc->objectName().isEmpty())
            shopped_platnosc->setObjectName(QStringLiteral("shopped_platnosc"));
        shopped_platnosc->resize(614, 357);
        shopped_platnosc->setStyleSheet(QStringLiteral("#shopped_platnosc{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));}"));
        gridLayout_2 = new QGridLayout(shopped_platnosc);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_title = new QLabel(shopped_platnosc);
        label_title->setObjectName(QStringLiteral("label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_title->setFont(font);
        label_title->setStyleSheet(QStringLiteral("color: rgb(75, 218, 13);"));
        label_title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_title, 0, 0, 1, 1);

        label_movie = new QLabel(shopped_platnosc);
        label_movie->setObjectName(QStringLiteral("label_movie"));
        sizePolicy.setHeightForWidth(label_movie->sizePolicy().hasHeightForWidth());
        label_movie->setSizePolicy(sizePolicy);
        label_movie->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_movie, 1, 0, 1, 1);

        label_end = new QLabel(shopped_platnosc);
        label_end->setObjectName(QStringLiteral("label_end"));
        sizePolicy.setHeightForWidth(label_end->sizePolicy().hasHeightForWidth());
        label_end->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_end->setFont(font1);
        label_end->setStyleSheet(QStringLiteral("color: rgb(75, 218, 13);"));
        label_end->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_end, 2, 0, 1, 1);


        retranslateUi(shopped_platnosc);

        QMetaObject::connectSlotsByName(shopped_platnosc);
    } // setupUi

    void retranslateUi(QDialog *shopped_platnosc)
    {
        shopped_platnosc->setWindowTitle(QApplication::translate("shopped_platnosc", "Dialog", 0));
        label_title->setText(QString());
        label_movie->setText(QApplication::translate("shopped_platnosc", "TextLabel", 0));
        label_end->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class shopped_platnosc: public Ui_shopped_platnosc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPED_PLATNOSC_H
