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

void SklepWindow::receiveItems(QTableWidget *table)
{
    int row =table->rowCount();
    int column = table->columnCount();

    ui->itemsList->setRowCount(row);
    ui->itemsList->setColumnCount(column);

    for(int i = 0; i<column; i++)
    {
        for (int j = 0; j<row;j++)
        {
            ui->itemsList->setItem(j,i,new QTableWidgetItem(table->item(j,i)->text()));
        }

    }





}


void SklepWindow::on_pushButton_3_clicked()
{
    skanowanie = new Skanowanie(this);
    skanowanie->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  skanowanie,SLOT(receiveBaza(QSqlDatabase)));
    connect(skanowanie,SIGNAL(sendItems(QTableWidget*)), this,SLOT(receiveItems(QTableWidget*)));
    emit sendBaza(BazaIn);
    skanowanie->exec();
}
