#include "magazyn.h"
#include "ui_magazyn.h"

Magazyn::Magazyn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Magazyn)
{
    ui->setupUi(this);
    ui->Asortyment->horizontalHeader()->setStretchLastSection(true);
 //   ui->Asortyment->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255)); background-image: url(:/img/Img/white_40_small.png);background-repeat: no-repeat;background-position: center;background-opacity: 153;gridline-color:white" );
    ui->Asortyment->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Asortyment->setSelectionBehavior(QAbstractItemView::SelectRows);


}

Magazyn::~Magazyn()
{
    delete ui;
}




void Magazyn::receiveBaza(QSqlDatabase Baza)
{

    if (!Baza.isOpen()) {
        if(!Baza.open())
        {
        ui->label_info->setText("Błąd połączenia: \n"+Baza.lastError().text());
        ui->label_info->setStyleSheet("color:red");
        }
        else
        {
             ui->label_info->setText("Połączono");
             ui->label_info->setStyleSheet("color:green");
        }
    }
    else
    {
         ui->label_info->setText("Połączono");
         ui->label_info->setStyleSheet("color:green");

    }


}


