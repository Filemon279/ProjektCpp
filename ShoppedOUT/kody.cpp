#include "kody.h"
#include "ui_kody.h"

Kody::Kody(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kody)
{
    ui->setupUi(this);
    ui->Asortyment->horizontalHeader()->setStretchLastSection(true);
 //   ui->Asortyment->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255)); background-image: url(:/img/Img/white_40_small.png);background-repeat: no-repeat;background-position: center;background-opacity: 153;gridline-color:white" );
    ui->Asortyment->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Asortyment->setSelectionBehavior(QAbstractItemView::SelectRows);
}

Kody::~Kody()
{
    delete ui;

}



void Kody::receiveBaza(QSqlDatabase Baza)
{

    if (!Baza.isOpen()) {
        if(!Baza.open())
        {
        ui->label_info->setText("Błąd połączenia: \n"+Baza.lastError().text());
        ui->label_info->setStyleSheet("color:red;background-color: rgb(0, 123, 255);");
        }
        else
        {
             ui->label_info->setText("Połączono");
             ui->label_info->setStyleSheet("color:green;background-color: rgb(0, 123, 255);");
        }
    }
    else
    {
         ui->label_info->setText("Połączono");
         ui->label_info->setStyleSheet("color:green;background-color: rgb(0, 123, 255);");

    }
odswiezBaze();

}


void Kody::deleteRecord()
{
    int row = ui->Asortyment->currentRow();

    QString polecenie;
    polecenie = "DELETE FROM asortyment WHERE ID=";
    polecenie.append(ui->Asortyment->verticalHeaderItem(row)->text());
         QSqlQuery query(polecenie);
          ui->Asortyment->removeRow(row);
}

void Kody::addRecord()
{
    QSqlQuery query("INSERT INTO asortyment() VALUES ()");
    //ODSWIEZAMY
          odswiezBaze();
}


void Kody::odswiezBaze()
{
    QSqlQuery query("SELECT * FROM asortyment");


      ui->Asortyment->setColumnCount(Rows=query.record().count()-1); // pomijamy ID, indeksuje nam iterator
      ui->Asortyment->setRowCount(Columns=query.size());

      int index=0 ;
      for(int i=0; i<=Rows-1;i++)
      {
          QTableWidgetItem *newItem = new QTableWidgetItem(query.record().fieldName(i+1));


           ui->Asortyment->setHorizontalHeaderItem(i, newItem);     // naglowki

      }

      while (query.next())
      {
          for(int i=0; i<=Rows-1;i++)
          {

              ui->Asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));

          }
              ui->Asortyment->setVerticalHeaderItem(index,new QTableWidgetItem(query.value(0).toString()));     //nr ID
      index++;
      }

     //
 for (int row = 0 ; row < ui->Asortyment->rowCount() ; ++row) {
 for (int col = 0 ; col < ui->Asortyment->columnCount() ; ++col) {
 allItems.append(ui->Asortyment->item(row, col));
 }
 }
 ui->Asortyment->show();
     ui->Asortyment->resizeColumnsToContents();
}


void Kody::zapiszBaze()
{
    //ZAPISYWANIE
    int wiersze = ui->Asortyment->rowCount();
    int kolumny = ui->Asortyment->columnCount();

    QString polecenie;

      for(int w=0;w<wiersze;w++)
    {
         polecenie="UPDATE asortyment SET ";
       for(int k=0;k<kolumny-1;k++)
        {
            polecenie.append(" ");
            polecenie.append(ui->Asortyment->horizontalHeaderItem(k)->text());
            polecenie.append(" = \"");
            polecenie.append(ui->Asortyment->item(w,k)->text());
            polecenie.append("\",");
        }
       polecenie.chop(1);                   //usuwa ostatni znak w stringu
        polecenie.append(" WHERE ID = ");
        polecenie.append(ui->Asortyment->verticalHeaderItem(w)->text());


 QSqlQuery query(polecenie);
    }



}
