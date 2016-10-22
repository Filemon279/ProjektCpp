#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "bazadanych.h"


#include <QtCore/QCoreApplication>
#include <QtSQL>




SettingsWindow::SettingsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsWindow)
{
   ui->setupUi(this);

}

bool SettingsWindow::eventFilter(QObject *obj, QEvent *event) {

    if (event->type() == QEvent::Close) {
        event->ignore();
        hide();
        return true;
    }
    return 0;
}

void SettingsWindow::hide() {

this->hide();
}



void SettingsWindow::setInfoField(QString value)
{
   ui->infoField->setText(value);
}

SettingsWindow::~SettingsWindow()
{
    delete ui;

}

void SettingsWindow::on_pushButton_3_clicked()
{

}


