#include "magazyn.h"
#include "ui_magazyn.h"
#include <QFontDatabase>
#include <QFileDialog>
#include <QMessageBox>


Magazyn::Magazyn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Magazyn)
{
    ui->setupUi(this);
    ui->label_nieZnaleziono->hide();
    ui->pushButton_dodajProdukt->hide();
    ui->Asortyment->horizontalHeader()->setStretchLastSection(true);
    ui->Asortyment->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->Asortyment->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->Asortyment->setSelectionBehavior(QAbstractItemView::SelectRows);

    needToSave=false;

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



              ui->graphicsView->show();


            //	        QMessageBox::information(this, tr("WIDTH HEIGHT"), tr("Width= %1 Height= %2").arg(QString::number(width, 10), QString::number(height, 10)));
          //  ui->graphicsView->fitInView(viewScene->itemsBoundingRect() ,Qt::KeepAspectRatio);





}

Magazyn::~Magazyn()
{
    ui->graphicsView->stopMovie();
    delete ui;
}






void Magazyn::keyPressEvent(QKeyEvent* e)
{
      if( (e->key() == Qt::Key_Escape))
      {
          if(needToSave)
          {
             if(! message_box("UWAGA","Kilka zmian zostało niezapisanych, czy na pewno chcesz zamknąć magazyn?",this)) return;
          }
        ui->graphicsView->stopMovie();
        this->close();
      }
}
/*

void Magazyn::showEvent(QShowEvent *) {
    int width = ui->graphicsView->width();
    int height = ui->graphicsView->height();
    QImage tempImage(":/img/Img/projekt1.jpg");
    QImage image = tempImage.convertToFormat(QImage::Format_RGB32);
    QPixmap pixmap = QPixmap::fromImage(image);
    viewScene = new QGraphicsScene(QRectF(0, 0, width, height), 0);
    QGraphicsPixmapItem *item = viewScene->addPixmap(pixmap.scaled(QSize(
    (int)viewScene->width(), (int)viewScene->height()),
    Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->graphicsView->fitInView(viewScene->sceneRect(),Qt::KeepAspectRatio);
     ui->graphicsView->setScene(viewScene);
}*/


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
    if(needToSave)
    {
       if(!message_box("UWAGA","Kilka zmian zostało niezapisanych, czy na pewno chcesz odświeżyć bazę?",this)) return;

    }
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
          else if(nazwa=="Lokalizacja") LOKALIZACJA_COLUMN=i;


           ui->Asortyment->setHorizontalHeaderItem(i, newItem);     // naglowki

      }

      while (query.next())
      {
          for(int i=0; i<=Rows-1;i++)
          {
              ui->Asortyment->setItem(index,i,new QTableWidgetItem(query.value(i+1).toString()));
               if(i==NETTO_COLUMN)
               {
                   float NETTO = ui->Asortyment->item(index,NETTO_COLUMN)->text().toFloat();
                   ui->Asortyment->item(index,NETTO_COLUMN)->setText(QString::number(NETTO,'f',2));
               }

               if(i==BRUTTO_COLUMN)
               {
                   float BRUTTO = ui->Asortyment->item(index,BRUTTO_COLUMN)->text().toFloat();
                   ui->Asortyment->item(index,BRUTTO_COLUMN)->setText(QString::number(BRUTTO,'f',2));
               }
          }
              ui->Asortyment->item(index,BRUTTO_COLUMN)->setFlags( ui->Asortyment->item(index,BRUTTO_COLUMN)->flags() & ~Qt::ItemIsEditable); // BRUTTO NIE JEST ZMIENIALNA
              ui->Asortyment->item(index,LOKALIZACJA_COLUMN)->setFlags( ui->Asortyment->item(index,LOKALIZACJA_COLUMN)->flags() & ~Qt::ItemIsEditable); // LOKALIZACJA NIE JEST ZMIENIALNA

              ui->Asortyment->setVerticalHeaderItem(index,new QTableWidgetItem(query.value(0).toString()));     //nr ID
      index++;
      }
   allItems.clear();
 for (int row = 0 ; row < ui->Asortyment->rowCount() ; ++row) {
 for (int col = 0 ; col < ui->Asortyment->columnCount() ; ++col) {
 allItems.append(ui->Asortyment->item(row, col));
 }
 }
 ui->Asortyment->show();
ui->Asortyment->resizeColumnsToContents();
needToSave=false;
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
       for(int k=0;k<kolumny;k++)
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

qDebug(polecenie.toUtf8());
 QSqlQuery query(polecenie);
    }
      needToSave=false;
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
showGPS();
}


void Magazyn::on_pushButton_clicked()
{
    ui->graphicsView->deleteGPS();
    if(ui->Asortyment->selectedItems().length()>0)
    {
    ui->Asortyment->item(ui->Asortyment->currentRow(),ui->Asortyment->columnCount()-1)->setText("");
    needToSave=true;
    }

}

void Magazyn::on_pushButton_2_clicked()
{
    if(ui->Asortyment->selectedItems().length()>0 && ui->graphicsView->isRunning())
    {
    QString pozycja=QString::number(ui->graphicsView->xGPS())+"-";
    pozycja.append(QString::number(ui->graphicsView->yGPS()));
    ui->Asortyment->item(ui->Asortyment->currentRow(),LOKALIZACJA_COLUMN)->setFlags( ui->Asortyment->item(ui->Asortyment->currentRow(),LOKALIZACJA_COLUMN)->flags() & Qt::ItemIsSelectable); // LOKALIZACJA NIE JEST ZMIENIALNA
    ui->Asortyment->item(ui->Asortyment->currentRow(),ui->Asortyment->columnCount()-1)->setText(pozycja);
    ui->Asortyment->item(ui->Asortyment->currentRow(),LOKALIZACJA_COLUMN)->setFlags( ui->Asortyment->item(ui->Asortyment->currentRow(),LOKALIZACJA_COLUMN)->flags() & ~Qt::ItemIsEditable); // LOKALIZACJA NIE JEST ZMIENIALNA
    needToSave=true;
    }

}



void Magazyn::on_Asortyment_clicked(const QModelIndex &index)
{
showGPS();
}

void Magazyn::showGPS()
{
    if(ui->Asortyment->selectedItems().length()>0)
    {
    QString pozycja = ui->Asortyment->item(ui->Asortyment->currentRow(),ui->Asortyment->columnCount()-1)->text();
    qDebug(pozycja.toUtf8());
    QStringList coordinates = pozycja.split( "-" );
    if(coordinates.length()!=2) return;
    else
    {
        int x = -1;
        int y = -1;
        QRegExp re("\\d*");
        foreach (const QString &str, coordinates)
        {
            if (re.exactMatch(str) && str.length()>0)
            {
                if(x<0) x=str.toInt();
                else if(y<0) y=str.toInt();
            }
            else return;
        }
         ui->graphicsView->setGpsPosition(x,y);

        //QRegExp re("\\d*");  // a digit (\d), zero or more times (*)
       // qDebug() << coordinates[]
    }
    }
}


void Magazyn::on_lineEdit_szukaj_textChanged(const QString &arg1)
{


   QList<QTableWidgetItem *> items = ui->Asortyment->findItems(arg1,Qt::MatchContains);
       for(int i = 0; i < allItems.count(); i++) ui->Asortyment->hideRow(allItems.at(i)->row());
       for(int i = 0; i < items.count(); i++) ui->Asortyment->showRow(items.at(i)->row());
    if(items.length()==0)
    {
        ui->label_nieZnaleziono->show();
        ui->pushButton_dodajProdukt->show();
        ui->graphicsView->deleteGPS();
    }
    else
    {
        ui->label_nieZnaleziono->hide();
        ui->pushButton_dodajProdukt->hide();
    }


}

void Magazyn::on_pushButton_dodajProdukt_clicked()
{
    QString nowaNazwa = ui->lineEdit_szukaj->text();
    QRegExp re("\\d*");
    if (re.exactMatch(nowaNazwa))
    {
        QString polecenie = "INSERT INTO asortyment(Kod_Kreskowy) VALUES (";
        polecenie.append(nowaNazwa+")");
        QSqlQuery query(polecenie);
        ui->lineEdit_szukaj->setText("");
        odswiezBaze();
        ui->lineEdit_szukaj->setText(nowaNazwa);
        return;
    }
    else
    {
        QString polecenie = "INSERT INTO asortyment(Nazwa) VALUES (\"";
        polecenie.append(nowaNazwa+"\")");
        QSqlQuery query(polecenie);
        ui->lineEdit_szukaj->setText("");
        odswiezBaze();
        ui->lineEdit_szukaj->setText(nowaNazwa);
    }

}

void Magazyn::on_Asortyment_cellChanged(int row, int column)
{
     needToSave=true;
}
