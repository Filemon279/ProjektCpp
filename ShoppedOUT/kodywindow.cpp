#include "kodywindow.h"
#include "ui_kodywindow.h"

kodywindow::kodywindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kodywindow)
{
    ui->setupUi(this);
}

kodywindow::~kodywindow()
{
    delete ui;
}
