#include "zakupy.h"
#include "ui_zakupy.h"

Zakupy::Zakupy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zakupy)
{
    ui->setupUi(this);
}

Zakupy::~Zakupy()
{
    delete ui;
}

void Zakupy::on_pushButton_nr7_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("7");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr8_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("8");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr5_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("5");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr9_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("9");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr4_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("4");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr6_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("6");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr1_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("1");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr2_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("2");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr3_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("3");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr0_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("0");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_nr00_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append("00");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_przecinek_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.append(",");
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_clear_clicked()
{
    QString tekst="";
    tekst.append(ui->codeNumber->text());
    tekst.chop(1);
    ui->codeNumber->setText(tekst);
}

void Zakupy::on_pushButton_delete_clicked()
{
    QString tekst="";
    ui->codeNumber->setText(tekst);
}
