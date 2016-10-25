#include "skanowanie.h"
#include "ui_skanowanie.h"
#include <windows.h>

Skanowanie::Skanowanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Skanowanie)
{
     ui->setupUi(this);
     ui->Zeskanowane->setColumnCount(5);
     ui->Zeskanowane->horizontalHeader()->setStretchLastSection(true);
     ui->Zeskanowane->setStyleSheet("QTableWidget::item:selected{ background-color: #6da5ff }" );
     ui->Zeskanowane->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
     ui->Zeskanowane->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
     ui->Zeskanowane->setSelectionMode(QAbstractItemView::SingleSelection);
     ui->Zeskanowane->setSelectionBehavior(QAbstractItemView::SelectRows);


}

Skanowanie::~Skanowanie()
{

    delete ui;
}



void Skanowanie::keyPressEvent(QKeyEvent* e)
{
    ui->productKey->setText(ui->productKey->text()+e->key());

    polecenie="SELECT `Nazwa`, `Cena_Netto`, `Cena_Brutto`, `Kod_Kreskowy` FROM `asortyment` WHERE Kod_Kreskowy LIKE \"%";
    polecenie.append(ui->productKey->text());
    polecenie.append("%\"");

    ui->panel->append(polecenie);

  QSqlQuery query(polecenie);
  if(query.size()==1)
  { ui->label->setText("GRA");


      int rows = ui->Zeskanowane->rowCount();
      bool found = false;
     for(int i = 0; i < rows; ++i)
      {
          if(ui->Zeskanowane->item(i, 3)->text().contains(ui->productKey->text()))
          {
            /*   int k = ui->Zeskanowane->item(i, 4)->text().toInt();
              k++;
              ui->Zeskanowane->item(i, 4)->setText(QString::number(k));*/
              found = true;
              break;
          }
      }
      if(!found)
      {




    ilosc++;



      ui->Zeskanowane->setRowCount(ilosc);



      for(int i=0; i<query.record().count();i++)
      {
          QTableWidgetItem *newItem = new QTableWidgetItem(query.record().fieldName(i));


           ui->Zeskanowane->setHorizontalHeaderItem(i, newItem);     // naglowki

      }

      QTableWidgetItem *newItem = new QTableWidgetItem("Sztuki");
       ui->Zeskanowane->setHorizontalHeaderItem(4, newItem);

      while (query.next())
      {
          for(int i=0; i<query.record().count();i++)
          {

              ui->Zeskanowane->setItem(index,i,new QTableWidgetItem(query.value(i).toString()));

          }
 ui->Zeskanowane->setItem(index,query.record().count(),new QTableWidgetItem("1"));
      index++;
      }



}
        ui->productKey->setText("");

  }


  else if(query.size()==0){ ui->label->setText("NIE GRA");
    ui->productKey->setText("");
}



  ui->Zeskanowane->resizeColumnsToContents();
}


void Skanowanie::receiveBaza(QSqlDatabase Baza)
{

    if (!Baza.isOpen()) {
        if(!Baza.open())
        {
        ui->label->setText("Błąd połączenia: \n"+Baza.lastError().text());
        ui->label->setStyleSheet("color:red");
        }
        else
        {
             ui->label->setText("Połączono");
             ui->label->setStyleSheet("color:green");
        }
    }
    else
    {
         ui->label->setText("Połączono");
         ui->label->setStyleSheet("color:green");

    }

}

void Skanowanie::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void Skanowanie::on_zaplac_button_clicked()
{

}





void Skanowanie::cos()
{
    ui->label->setText("Dupa");
}




