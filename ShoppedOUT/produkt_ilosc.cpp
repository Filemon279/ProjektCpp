#include "produkt_ilosc.h"
#include "ui_produkt_ilosc.h"

produkt_ilosc::produkt_ilosc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produkt_ilosc)
{
    ui->setupUi(this);
}

produkt_ilosc::~produkt_ilosc()
{
    delete ui;
}

void produkt_ilosc::on_pushButton_clicked()
{
    emit send_ilosc(ui->lineEdit->text().toInt());

    this->close();
}
