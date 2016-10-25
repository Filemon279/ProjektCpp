#include "sklepwindow.h"
#include "mainwindow.h"
#include "ui_sklepwindow.h"

SklepWindow::SklepWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SklepWindow)
{
    ui->setupUi(this);
}

SklepWindow::~SklepWindow()
{
    delete ui;
}

void SklepWindow::on_SklepWindow_finished(int result)
{

}





void SklepWindow::receiveBaza(QSqlDatabase Baza)
{


BazaIn = Baza;

    if (!Baza.isOpen()) {
        if(!Baza.open())
        {
        ui->StanPolaczenia->setText("Błąd połączenia: \n"+Baza.lastError().text());
        ui->StanPolaczenia->setStyleSheet("color:red");
        }
        else
        {
             ui->StanPolaczenia->setText("Połączono");
             ui->StanPolaczenia->setStyleSheet("color:green");
        }
    }
    else
    {
         ui->StanPolaczenia->setText("Połączono");
         ui->StanPolaczenia->setStyleSheet("color:green");

    }



}




void SklepWindow::on_pushButton_3_clicked()
{
    skanowanie = new Skanowanie(this);
    skanowanie->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  skanowanie,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(BazaIn);
    skanowanie->exec();
}
