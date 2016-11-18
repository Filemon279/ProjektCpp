#include "zakupy.h"
#include "ui_zakupy.h"
#include <QFontDatabase>
#include <QMessageBox>

Zakupy::Zakupy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zakupy)
{
    ui->setupUi(this);
    ui->zakubyTable->setColumnCount(5);
    ui->zakubyTable->horizontalHeader()->setStretchLastSection(true);
 //   ui->zakubyTable->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(0, 126, 255, 255)); background-image: url(:/img/Img/white_40_small.png);background-repeat: no-repeat;background-position: center;background-opacity: 153;gridline-color:white" );
    ui->zakubyTable->verticalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->zakubyTable->horizontalHeader()->setStyleSheet("color: black; border: 1px solid;");
    ui->zakubyTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->zakubyTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->zakubyTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    int id = QFontDatabase::addApplicationFont(":/fonts/fontawesome-webfont.ttf");


    QFont fontAws;
    fontAws.setFamily("FontAwesome");
    fontAws.setPointSize(30);

    ui->pushButton_delete->setFont(fontAws);
    ui->pushButton_delete->setText("\uf1f8");

    ui->pushButton_clear->setFont(fontAws);
    ui->pushButton_clear->setText("\uf053");

    ui->pushButton_up->setFont(fontAws);
    ui->pushButton_down->setFont(fontAws);
    ui->pushButton_up->setText("\uf0aa");
    ui->pushButton_down->setText("\uf0ab");


    ui->codeNumber->setFocus();
}

Zakupy::~Zakupy()
{
    delete ui;
}







void Zakupy::keyPressEvent(QKeyEvent* e)
{
    ui->zakubyTable->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);

     if(e->key() == Qt::Key_Escape)
     {
        this->close();
    }

    else if( (e->key() == Qt::Key_Enter) || (e->key() == Qt::Key_Return))
    {
        enterAction();
    }

    else
    {
         ui->codeNumber->setText(ui->codeNumber->text()+e->key());
    }


ui->zakubyTable->horizontalHeader()->setStretchLastSection(true);
}



void Zakupy::receiveBaza(QSqlDatabase Baza)
{
BazaIN = Baza;
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
    ui->codeNumber->setFocus();

}



















void Zakupy::on_pushButton_nr7_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("7");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr8_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("8");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr5_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("5");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr9_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("9");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr4_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("4");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr6_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("6");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr1_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("1");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr2_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("2");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr3_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("3");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr0_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("0");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_nr00_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("00");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_przecinek_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append(",");
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_clear_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.chop(1);
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_delete_clicked()
{
     if(ui->zakubyTable->selectedItems().length()>0){
    ui->zakubyTable->hideRow(ui->zakubyTable->currentRow());
    for(int i =0;i<ui->zakubyTable->columnCount();i++)
    {
        ui->zakubyTable->item(ui->zakubyTable->currentRow(),i)->setText("");
    }
     }
podlicz_cene();

}

void Zakupy::on_zakubyTable_clicked(const QModelIndex &index)
{
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_enter_clicked()
{
    enterAction();
}


void Zakupy::enterAction()
{
    polecenie="SELECT `Nazwa`, `Cena_Netto`, `Cena_Brutto`, `Kod_Kreskowy` FROM `asortyment` WHERE Kod_Kreskowy = \"";
    polecenie.append(ui->codeNumber->text());
    polecenie.append("\"");
    QSqlQuery query(polecenie);

    for(int i=0;i<5;i++)
    {
        ui->zakubyTable->horizontalHeader()->setSectionResizeMode(i, QHeaderView::Stretch);
    }

  if(query.size()==1)
  {


      int rows = ui->zakubyTable->rowCount();
      bool found = false;
      if(ui->zakubyTable->rowCount()>0)
      {
     for(int i = 0; i < rows; ++i)
      {

          if(ui->zakubyTable->item(i, 3)->text().contains(ui->codeNumber->text()))
         {

              int k = ui->zakubyTable->item(i, 4)->text().toInt();
              k++;
              ui->zakubyTable->item(i, 4)->setText(QString::number(k));
             found = true;
              break;
          }
      }




      }
      if(!found)
      {
    ilosc++;
    ui->zakubyTable->setRowCount(ilosc);

    for(int i=0; i<query.record().count();i++)
      {

          QTableWidgetItem *newItem = new QTableWidgetItem(query.record().fieldName(i));
             newItem->setFlags( Qt::ItemIsSelectable |  Qt::ItemIsEnabled );
          ui->zakubyTable->setHorizontalHeaderItem(i, newItem);



      }

      QTableWidgetItem *newItem = new QTableWidgetItem("Sztuk");
       ui->zakubyTable->setHorizontalHeaderItem(4, newItem);

      while (query.next())
      {
          for(int i=0; i<query.record().count();i++)
          {

              ui->zakubyTable->setItem(index,i,new QTableWidgetItem(query.value(i).toString()));

          }
 ui->zakubyTable->setItem(index,query.record().count(),new QTableWidgetItem("1"));
      index++;
      }


}


  }
  else if(query.size()==0)
  {
   //ui->label->setText("NIE GRA");
   ui->codeNumber->setText("");
  }
   ui->codeNumber->setText("");






   podlicz_cene();



}

void Zakupy::podlicz_cene(){
    //Podliczanie cen
    //1 netto
    //2 brutto
    int rows = ui->zakubyTable->rowCount();
     float suma_netto=0;
     float suma_brutto=0;
     for(int i = 0; i < rows; i++)
      {
        suma_netto+=ui->zakubyTable->item(i, 1)->text().toFloat()*ui->zakubyTable->item(i, 4)->text().toFloat();
        suma_brutto+=ui->zakubyTable->item(i, 2)->text().toFloat()*ui->zakubyTable->item(i, 4)->text().toFloat();
      }


     QString str_netto = QString::number( suma_netto, 'f', 2 );
     QString str_brutto = QString::number( suma_brutto, 'f', 2 );
     str_netto.append("zł");
     str_brutto.append("zł");
       ui->label_Brutto->setText(str_brutto);
       ui->label_netto->setText(str_netto);
}

void Zakupy::on_pushButton_up_clicked()
{

    int i = 1;
    int current = ui->zakubyTable->currentRow();

    //Pomijamy ukryte kolumny
    while(ui->zakubyTable->isRowHidden(ui->zakubyTable->currentRow()-i)) i++;
    if(current-i<0)
    {
        ui->zakubyTable->selectRow(ui->zakubyTable->rowCount()-i);
    }
    else
    {
         ui->zakubyTable->selectRow(current-i);
    }
}

void Zakupy::on_pushButton_down_clicked()
{
    int current = ui->zakubyTable->currentRow();
    int i =1;

    //Pomijamy UKRYTE kolumny
    while(ui->zakubyTable->isRowHidden(ui->zakubyTable->currentRow()+i)) i++;
    if(current+i>=ui->zakubyTable->rowCount())
    {
        ui->zakubyTable->selectRow(0);
    }
    else
    {
         ui->zakubyTable->selectRow(current+i);
    }
}

void Zakupy::on_pushButton_escape_clicked()
{
    QString tekst="";
    ui->codeNumber->setText(tekst);
     ui->codeNumber->setFocus();
}

void Zakupy::on_pushButton_clicked()
{
    if(ui->zakubyTable->selectedItems().length()>0){
    QString kod = ui->zakubyTable->item(ui->zakubyTable->currentRow(),ui->zakubyTable->columnCount()-2)->text();
    info = new produkt_info(this);
    info->setModal(true);
    connect(this,SIGNAL(send_productKey(QString)),  info,SLOT(get_productKey(QString)));
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  info,SLOT(receiveBaza(QSqlDatabase)));
    emit send_productKey(kod);
     emit sendBaza(BazaIN);
   info->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    info->exec();}
}

void Zakupy::on_pushButton_ilosc_clicked()
{
    ilosc_window = new produkt_ilosc(this);
    ilosc_window->setModal(true);
    connect(ilosc_window,SIGNAL(send_ilosc(int)), this,SLOT(get_ilosc(int)));
  //   emit sendBaza(BazaIN);
   ilosc_window->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ilosc_window->exec();

}

void Zakupy::get_ilosc(int i)
{
    if(ui->zakubyTable->selectedItems().length()>0){
       ui->zakubyTable->item(ui->zakubyTable->currentRow(),(ui->zakubyTable->columnCount()-1))->setText(QString::number(i));
          }
podlicz_cene();
}



void Zakupy::on_pushButton_zaplac_clicked()
{
    QString cena = ui->label_Brutto->text();
    cena.chop(2);
    float brutto = cena.toFloat();
    qDebug(ui->label_Brutto->text().toUtf8());
    qDebug(QString::number(brutto).toUtf8());
    if(brutto<=0) return;
    podlicz = new Shopped_podlicz(this);
    podlicz->setModal(true);
    connect(this,SIGNAL(sendCash(float)),  podlicz,SLOT(getCash(float)));
    emit sendCash(brutto);
    podlicz->exec();
}
