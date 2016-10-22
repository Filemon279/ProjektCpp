#include "magazynwindow.h"
#include "ui_magazynwindow.h"

#include <QtSql>


magazynWindow::magazynWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::magazynWindow)
{
    ui->setupUi(this);
}

magazynWindow::~magazynWindow()
{
    delete ui;
}


void magazynWindow::receiveBaza(QSqlDatabase Baza)
{
Baza.open();





    if (!Baza.open()) {
        ui->StanPolaczenia->setText("Błąd połączenia: \n"+Baza.lastError().text());
            ui->StanPolaczenia->setStyleSheet("color:red");

    }
    else
    {
         ui->StanPolaczenia->setText("Połączono");
             ui->StanPolaczenia->setStyleSheet("color:green");

    }

     QSqlQuery query("SELECT * FROM asortyment");

       int lenght;
       ui->asortyment->setColumnCount(lenght=query.record().count()-1); // pomijamy ID, indeksuje nam iterator
       ui->asortyment->setRowCount(query.size());

       int index=0 ;
       for(int i=0; i<=lenght-1;i++)
       {
            ui->asortyment->setHorizontalHeaderItem(i, new QTableWidgetItem(query.record().fieldName(i+1)));
       }
       while (query.next())
       {
           for(int i=0; i<=lenght-1;i++)
           {

               ui->asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));
           }
       index++;
       }

  ui->asortyment->show();

}

void magazynWindow::on_pushButton_5_clicked()
{

    QSqlQuery query("SELECT * FROM asortyment");

      int lenght;
      ui->asortyment->setColumnCount(lenght=query.record().count()-1); // pomijamy ID, indeksuje nam iterator
      ui->asortyment->setRowCount(query.size());

      int index=0 ;
      for(int i=0; i<=lenght-1;i++)
      {
           ui->asortyment->setHorizontalHeaderItem(i, new QTableWidgetItem(query.record().fieldName(i+1)));
      }
      while (query.next())
      {
          for(int i=0; i<=lenght-1;i++)
          {

              ui->asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));
          }
      index++;
      }
 ui->asortyment->show();




}

void magazynWindow::on_pushButton_4_clicked()
{
    int wiersze = ui->asortyment->rowCount();
    int kolumny = ui->asortyment->columnCount();

    QString polecenie;

      for(int w=0;w<wiersze;w++)
    {
         polecenie="UPDATE asortyment SET ";
       for(int k=0;k<kolumny;k++)
        {
            polecenie.append(" ");
            polecenie.append(ui->asortyment->horizontalHeaderItem(k)->text());
            polecenie.append(" = \"");
            polecenie.append(ui->asortyment->item(w,k)->text());
            polecenie.append("\",");
        }
       polecenie.chop(1);                   //usuwa ostatni znak w stringu
        polecenie.append(" WHERE ID = ");
        polecenie.append(QString::number(w+1));
        ui->test->append(polecenie);

 QSqlQuery query(polecenie);
    }






}
