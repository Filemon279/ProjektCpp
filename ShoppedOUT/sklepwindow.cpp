#include "sklepwindow.h"
#include "mainwindow.h"
#include "ui_sklepwindow.h"

SklepWindow::SklepWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SklepWindow)
{
    ui->setupUi(this);
}

SklepWindow::~SklepWindow()
{
    delete ui;
}

void SklepWindow::on_SklepWindow_finished(int result)
{

}


void SklepWindow::receiveBaza(bazadanych Baza)
{
 ui->displayNetto->setText(Baza.connect());

}
