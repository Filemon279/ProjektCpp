#include "produkt_info.h"
#include "ui_produkt_info.h"

produkt_info::produkt_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produkt_info)
{
    ui->setupUi(this);
}

produkt_info::~produkt_info()
{
    delete ui;
}

void produkt_info::on_pushButton_clicked()
{
    this->close();
}



void produkt_info::get_productKey(QString kodIN) //Barcode moze zawierac znaki nne niz 0-9
{
kod = kodIN;
}

void produkt_info::receiveBaza(QSqlDatabase Baza)
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
         QString polecenie = "SELECT * FROM asortyment WHERE Kod_Kreskowy=\"";
         polecenie.append(kod);
         polecenie.append("\"");
        QSqlQuery query(polecenie);

        int Rows=query.record().count();


        query.next();
        for(int i=0; i<Rows;i++)
        {
           QString nazwa = query.record().fieldName(i);
           QString wartosc =query.value(i).toString();
           if (nazwa=="VAT") ui->label_vat->setText(wartosc+"%");
           else if(nazwa=="Cena_Brutto") ui->label_brutto->setText(wartosc+"zł");
           else if(nazwa=="Cena_Netto") ui->label_netto->setText(wartosc+"zł");
           else if(nazwa=="Nazwa") ui->label_nazwa->setText(wartosc);
           else if(nazwa=="Opis")ui->label_opis->setText(wartosc);
           else if(nazwa=="Ilość") ui->label_ilosc->setText(wartosc);

        }

    }

}


