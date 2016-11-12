#include "magazyn.h"
#include "ui_magazyn.h"
#include <QFontDatabase>
#include <QMessageBox>


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


    int id = QFontDatabase::addApplicationFont(":/fonts/fontawesome-webfont.ttf");
   // QMessageBox::information(NULL,"Message",QString::number(id));  // this shows id is 0.

    QFont fontAws;
    fontAws.setFamily("FontAwesome");
    fontAws.setPointSize(30);

    ui->pushButton_up->setFont(fontAws);
    ui->pushButton_down->setFont(fontAws);
    ui->pushButton_add->setFont(fontAws);
    ui->pushButton_delete->setFont(fontAws);
    ui->pushButton_refresh->setFont(fontAws);
    ui->pushButton_save->setFont(fontAws);

    ui->pushButton_up->setText("\uf0aa");
    ui->pushButton_down->setText("\uf0ab");
    ui->pushButton_add->setText("\uf067 DODAJ REKORD");
    ui->pushButton_delete->setText("\uf1f8 USUŃ ZAZNACZONE");
    ui->pushButton_refresh->setText("\uf021 ODŚWIEŻ BAZĘ");
    ui->pushButton_save->setText("\uf0c7 ZAPISZ ZMIANY");
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


void Magazyn::deleteRecord()
{
    int row = ui->Asortyment->currentRow();

    QString polecenie;
    polecenie = "DELETE FROM asortyment WHERE ID=";
    polecenie.append(ui->Asortyment->verticalHeaderItem(row)->text());
         QSqlQuery query(polecenie);
          ui->Asortyment->removeRow(row);
}

void Magazyn::addRecord()
{
    QSqlQuery query("INSERT INTO asortyment() VALUES ()");
    //ODSWIEZAMY
          odswiezBaze();
}


void Magazyn::odswiezBaze()
{
    QSqlQuery query("SELECT * FROM asortyment");


      ui->Asortyment->setColumnCount(Rows=query.record().count()-1); // pomijamy ID, indeksuje nam iterator
      ui->Asortyment->setRowCount(Columns=query.size());

      int index=0 ;
      for(int i=0; i<=Rows-1;i++)
      {
         QString nazwa = query.record().fieldName(i+1);
          QTableWidgetItem *newItem = new QTableWidgetItem(nazwa);
          if(nazwa=="VAT") VAT_COLUMN=i;
          else if(nazwa=="Cena_Brutto") BRUTTO_COLUMN=i;
           else if(nazwa=="Cena_Netto") NETTO_COLUMN=i;


           ui->Asortyment->setHorizontalHeaderItem(i, newItem);     // naglowki

      }

      while (query.next())
      {
          for(int i=0; i<=Rows-1;i++)
          {
              ui->Asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));
          }
              ui->Asortyment->item(index,BRUTTO_COLUMN)->setFlags( ui->Asortyment->item(index,BRUTTO_COLUMN)->flags() & ~Qt::ItemIsEditable); // BRUTTO NIE JEST ZMIENIALNA
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



void Magazyn::zapiszBaze()
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


void Magazyn::on_pushButton_add_clicked()
{
    addRecord();
}

void Magazyn::on_pushButton_delete_clicked()
{
    deleteRecord();
}

void Magazyn::on_pushButton_save_clicked()
{
    zapiszBaze();
}

void Magazyn::on_pushButton_refresh_clicked()
{
    odswiezBaze();
}

void Magazyn::on_pushButton_up_clicked()
{
    int current = ui->Asortyment->currentRow();
    if(current-1<0)
    {
        ui->Asortyment->selectRow(ui->Asortyment->rowCount()-1);
    }
    else
    {
         ui->Asortyment->selectRow(current-1);
    }

}

void Magazyn::on_pushButton_down_clicked()
{
    int current = ui->Asortyment->currentRow();
    if(current+1>=ui->Asortyment->rowCount())
    {
        ui->Asortyment->selectRow(0);
    }
    else
    {
         ui->Asortyment->selectRow(current+1);
    }


}

void Magazyn::on_Asortyment_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{

    QString out="";
    out.append("Zmieniono R: ");
    out.append(QString::number(currentRow));
    out.append(" C:");
    out.append(QString::number(currentColumn));
   ui->label_info->setText(out);
   float VAT = ui->Asortyment->item(currentRow,VAT_COLUMN)->text().toFloat();
   float NETTO = ui->Asortyment->item(currentRow,NETTO_COLUMN)->text().toFloat();
   float BRUTTO = NETTO+(NETTO*(VAT/100));
   ui->Asortyment->item(currentRow,BRUTTO_COLUMN)->setFlags( ui->Asortyment->item(currentRow,BRUTTO_COLUMN)->flags() & Qt::ItemIsSelectable); // BRUTTO NIE JEST ZMIENIALNA
   ui->Asortyment->item(currentRow,BRUTTO_COLUMN)->setText(QString::number(BRUTTO,'f',2));
   ui->Asortyment->item(currentRow,BRUTTO_COLUMN)->setFlags( ui->Asortyment->item(currentRow,BRUTTO_COLUMN)->flags() & ~Qt::ItemIsEditable); // BRUTTO NIE JEST ZMIENIALNA

}

void Magazyn::on_Asortyment_cellChanged(int row, int column)
{

}
