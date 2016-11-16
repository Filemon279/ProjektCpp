/********************************************************************************
** Form generated from reading UI file 'magazyn2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGAZYN2_H
#define UI_MAGAZYN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magazyn2
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QDialog *Magazyn2)
    {
        if (Magazyn2->objectName().isEmpty())
            Magazyn2->setObjectName(QStringLiteral("Magazyn2"));
        Magazyn2->resize(1063, 641);
        Magazyn2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255));"));
        horizontalLayout_2 = new QHBoxLayout(Magazyn2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(Magazyn2);
        widget->setObjectName(QStringLiteral("widget"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(520, -10, 519, 623));
        layoutWidget = new QWidget(widget_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 0, 434, 403));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 20, 10, 20);

        horizontalLayout_2->addWidget(widget);


        retranslateUi(Magazyn2);

        QMetaObject::connectSlotsByName(Magazyn2);
    } // setupUi

    void retranslateUi(QDialog *Magazyn2)
    {
        Magazyn2->setWindowTitle(QApplication::translate("Magazyn2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Magazyn2: public Ui_Magazyn2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGAZYN2_H
