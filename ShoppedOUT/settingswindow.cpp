#include "settingswindow.h"
#include "ui_settingswindow.h"
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

void SettingsWindow::receiveBaza(QSqlDatabase Baza)
{
    if (!Baza.isOpen()) {
        ui->StanPolaczenia->setText("Brak połączenia\n");
            ui->StanPolaczenia->setStyleSheet("color:red");

    }
    else
    {
         ui->StanPolaczenia->setText("Połączono");
             ui->StanPolaczenia->setStyleSheet("color:green");

    }


}



void SettingsWindow::on_pushButton_3_clicked()
{

}



void SettingsWindow::on_pushButton_6_clicked()
{
  //  Baza.setHostName("127.0.0.1");
 //   Baza.setDatabaseName("sklep");
 //   Baza.setUserName("root");
 //   Baza.setPassword("root");
}
