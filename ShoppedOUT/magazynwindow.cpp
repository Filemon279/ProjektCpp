#include "magazynwindow.h"
#include "ui_magazynwindow.h"

#include <QtSql>


magazynWindow::magazynWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::magazynWindow)
{

    ui->setupUi(this);

      ui->asortyment->setStyleSheet("QTableWidget::item:selected{ background-color: #6da5ff }" );
      ui->asortyment->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
      ui->asortyment->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
      ui->asortyment->setSelectionMode(QAbstractItemView::SingleSelection);
      ui->asortyment->setSelectionBehavior(QAbstractItemView::SelectRows);

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

   odswiezBaze();

}

void magazynWindow::on_pushButton_5_clicked()
{
odswiezBaze();
}




void magazynWindow::on_pushButton_4_clicked()
{

    //ZAPISYWANIE
    int wiersze = ui->asortyment->rowCount();
    int kolumny = ui->asortyment->columnCount();

    QString polecenie;

      for(int w=0;w<wiersze;w++)
    {
         polecenie="UPDATE asortyment SET ";
       for(int k=0;k<kolumny-1;k++)
        {
            polecenie.append(" ");
            polecenie.append(ui->asortyment->horizontalHeaderItem(k)->text());
            polecenie.append(" = \"");
            polecenie.append(ui->asortyment->item(w,k)->text());
            polecenie.append("\",");
        }
       polecenie.chop(1);                   //usuwa ostatni znak w stringu
        polecenie.append(" WHERE ID = ");
        polecenie.append(ui->asortyment->verticalHeaderItem(w)->text());
        ui->test->append(polecenie);

 QSqlQuery query(polecenie);
    }






}

void magazynWindow::on_pushButton_6_clicked()
{

          QSqlQuery query("INSERT INTO asortyment() VALUES ()");
          //ODSWIEZAMY
                odswiezBaze();
}


void magazynWindow::odswiezBaze()
{
    QSqlQuery query("SELECT * FROM asortyment");


      ui->asortyment->setColumnCount(Rows=query.record().count()-1); // pomijamy ID, indeksuje nam iterator
      ui->asortyment->setRowCount(Columns=query.size());

      int index=0 ;
      for(int i=0; i<=Rows-1;i++)
      {
          QTableWidgetItem *newItem = new QTableWidgetItem(query.record().fieldName(i+1));


           ui->asortyment->setHorizontalHeaderItem(i, newItem);     // naglowki

      }

      while (query.next())
      {
          for(int i=0; i<=Rows-1;i++)
          {

              ui->asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));

          }
              ui->asortyment->setVerticalHeaderItem(index,new QTableWidgetItem(query.value(0).toString()));     //nr ID
      index++;
      }

     //



 for (int row = 0 ; row < ui->asortyment->rowCount() ; ++row) {
 for (int col = 0 ; col < ui->asortyment->columnCount() ; ++col) {
 allItems.append(ui->asortyment->item(row, col));
 }
 }









 ui->asortyment->show();
}

void magazynWindow::on_pushButton_3_clicked()
{
    int row = ui->asortyment->currentRow();

    QString polecenie;
    polecenie = "DELETE FROM asortyment WHERE ID=";
    polecenie.append(ui->asortyment->verticalHeaderItem(row)->text());
         QSqlQuery query(polecenie);
          ui->asortyment->removeRow(row);
    ui->test->append(polecenie);

}

void magazynWindow::on_szukajField_textChanged(const QString &arg1)
{


     QList<QTableWidgetItem *> items = ui->asortyment->findItems(arg1,Qt::MatchContains);


     for(int i = 0; i < allItems.count(); i++) ui->asortyment->hideRow(allItems.at(i)->row());

     for(int i = 0; i < items.count(); i++) ui->asortyment->showRow(items.at(i)->row());


    ui->test->append(QString::number(allItems.count()));

}
