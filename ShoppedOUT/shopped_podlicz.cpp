#include "shopped_podlicz.h"
#include "ui_shopped_podlicz.h"
#include <QFuture>
#include <QtConcurrent/QtConcurrentRun>

Shopped_podlicz::Shopped_podlicz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shopped_podlicz)
{
    ui->setupUi(this);
    ui->pushButton_gotowka->setStyleSheet("color:white;background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(30, 50, 10, 255), stop:1 rgba(23, 0, 23, 255))");

       ui->pushButton_gotowka->setEnabled(false);

}

Shopped_podlicz::~Shopped_podlicz()
{
    delete ui;
}

void Shopped_podlicz::getCash(float cash){
    brutto = cash;
ui->label_dozaplaty->setText(QString::number(cash,'f',2)+"zł");
}

void Shopped_podlicz::on_lineEdit_zaplacono_textChanged(const QString &arg1)
{
    QString text = ui->lineEdit_zaplacono->text();
    //"^[0-9]*(\\.)*(\\d{1,2})?$"
    QRegExp re("^[0-9]+(\\.{1})?(\\d{1,2})?$");
    if (!re.exactMatch(arg1))
    {
       // QString text = ui->lineEdit_zaplacono->text();
        text.chop(1);
        ui->lineEdit_zaplacono->setText(text);
        return;
    }
    float zaplacono = ui->lineEdit_zaplacono->text().toFloat();
    float wydac = -(brutto - zaplacono);
    if(wydac>=0)
    {
        ui->pushButton_gotowka->setEnabled(true);
        ui->pushButton_gotowka->setStyleSheet("color:white;background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(61, 196, 47, 255), stop:1 rgba(23, 88, 0, 255))");
        ui->label_reszta->setStyleSheet("color: rgb(163, 255, 101);");
    }
    else
    {
        ui->pushButton_gotowka->setEnabled(false);
        ui->label_reszta->setStyleSheet("color:red");
        ui->pushButton_gotowka->setStyleSheet("color:white;background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(30, 50, 10, 255), stop:1 rgba(23, 0, 23, 255))");
    }
    ui->label_reszta->setText(QString::number(wydac,'f',2));
}

void Shopped_podlicz::on_pushButton_karta_clicked()
{
    platnosc = new shopped_platnosc(this);
    platnosc->setModal(true);
    connect(this,SIGNAL(sendInfo(QString)),  platnosc,SLOT(getInfo(QString)));
    connect(platnosc,SIGNAL(sendStatus(QString)),  this,SLOT(getStatus(QString)));
    emit sendInfo("karta");
    platnosc->exec();
}

void Shopped_podlicz::getStatus(QString info)
{
    if (info=="done"){
   emit sendStatusNext("done");
        this->deleteLater();
          }
}


void Shopped_podlicz::on_pushButton_gotowka_clicked()
{
  getStatus("done");
}
