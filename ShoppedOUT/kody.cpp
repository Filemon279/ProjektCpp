#include "kody.h"
#include "ui_kody.h"
#include <QFontDatabase>
#include <QMessageBox>
#include <QFileDialog>

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
    ui->Asortyment->setEditTriggers(QAbstractItemView::NoEditTriggers);

    int id = QFontDatabase::addApplicationFont(":/fonts/fre3of9.ttf");
    QFont font39;
    font39.setFamily("Free 3 of 9 Extended");
    font39.setPointSize(60);
    ui->label_kodKreskowy->setFont(font39);

}

Kody::~Kody()
{
    delete ui;

}

QString Kody::wybierzLokalizacje()
    {
    return "dir";
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
          QString nazwa = query.record().fieldName(i+1);
          QTableWidgetItem *newItem = new QTableWidgetItem(query.record().fieldName(i+1));

          if(nazwa=="Opis") OPIS_COLUMN=i;
          else if(nazwa=="Nazwa") NAZWA_COLUMN=i;
           else if(nazwa=="Kod_Kreskowy") KOD_COLUMN=i;

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

void Kody::on_Asortyment_itemSelectionChanged()
{
    QLabel *myLabel = ui->label_kodKreskowy;
    QFont myFont = myLabel->font();


   int row=ui->Asortyment->currentRow();
   QString kodKreskowy = ui->Asortyment->item(row,KOD_COLUMN)->text(); //KOD KRESKOWY NUMER KOLUMNY
   QString opis = ui->Asortyment->item(row,OPIS_COLUMN)->text();
   QString nazwa = ui->Asortyment->item(row,NAZWA_COLUMN)->text();
   ui->label_kodKreskowy->setText("*"+kodKreskowy+"*");
   ui->label_opis->setText(opis);
   ui->label_kodNumer->setText(kodKreskowy);
   ui->label_nazwa->setText(nazwa);


   QFont font = ui->label_kodKreskowy->font();
   QRect cRect = ui->label_kodKreskowy->contentsRect();

  if( ui->label_kodKreskowy->text().isEmpty() )
          return;

   int fontSize = 1;

    while( true )
    {
                QFont f(font);
                     f.setPixelSize( fontSize );
                QRect r = QFontMetrics(f).boundingRect( ui->label_kodKreskowy->text() );
                if(fontSize > 50) break;
                else if (r.height() < cRect.height() && r.width() < cRect.width() )
                      fontSize++;

                else
                      break;
    }

   font.setPixelSize(fontSize);
   ui->label_kodKreskowy->setFont(font);



}

void Kody::on_pushButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                 "/home",
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);
QString nazwa_kod = ui->label_kodNumer->text();
    ui->widget_Kod->grab().save(dir+nazwa_kod+".png");
}

void Kody::on_dial_sliderMoved(int position)
{
    ui->label_dlugosc->setText(QString::number(position));
}



void Kody::on_dial_valueChanged(int value)
{
      ui->label_dlugosc->setText(QString::number(value));
}

void Kody::on_pushButton_2_clicked()
{
    QString numer="";
    for(int i=0;i<ui->dial->value();i++) numer.append(QString::number(qrand() % 10));
    ui->lineEdit_wygenerowany->setText(numer);
}

void Kody::on_pushButton_3_clicked()
{
    QString numer = ui->lineEdit_wygenerowany->text();
    ui->label_errors->setText("");
    if (numer.length()<4)
    {
         ui->label_errors->setText("Nieprawidłowy numer");
         return;
    }
    if (!sprawdzCzyUnikatowy(numer))
    {
       ui->label_errors->setText("Taki numer juz istnieje");
        return;
    }

      if(ui->Asortyment->selectedItems().length()>0){
         ui->Asortyment->item(ui->Asortyment->currentRow(),KOD_COLUMN)->setText(numer);
      }
      else return; // Nie ma co zapisywac jak nic nie zrobilo
      zapiszBaze();
}

bool Kody::sprawdzCzyUnikatowy(QString numer)
{

    for (int i = 0;i<ui->Asortyment->rowCount();i++)
    {
        if(ui->Asortyment->item(i,KOD_COLUMN)->text()==numer) return 0;
    }
    return 1;
}
