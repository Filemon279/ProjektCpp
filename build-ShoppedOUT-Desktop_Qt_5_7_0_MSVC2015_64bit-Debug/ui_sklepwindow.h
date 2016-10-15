/********************************************************************************
** Form generated from reading UI file 'sklepwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKLEPWINDOW_H
#define UI_SKLEPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SklepWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *SklepWindow)
    {
        if (SklepWindow->objectName().isEmpty())
            SklepWindow->setObjectName(QStringLiteral("SklepWindow"));
        SklepWindow->resize(400, 300);
        pushButton = new QPushButton(SklepWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 170, 75, 23));

        retranslateUi(SklepWindow);

        QMetaObject::connectSlotsByName(SklepWindow);
    } // setupUi

    void retranslateUi(QDialog *SklepWindow)
    {
        SklepWindow->setWindowTitle(QApplication::translate("SklepWindow", "Dialog", 0));
        pushButton->setText(QApplication::translate("SklepWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class SklepWindow: public Ui_SklepWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKLEPWINDOW_H
