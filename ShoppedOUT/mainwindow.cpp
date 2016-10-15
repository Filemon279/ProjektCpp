#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sklepwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   this->setMinimumSize(QSize(this->width(),this->height()));
   this->setMaximumSize(QSize(this->width(),this->height()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sklepButton_pressed()
{

}

void MainWindow::on_sklepButton_clicked()
{
   SklepWindow sklepwindow;
   sklepwindow.setModal(true);
   sklepwindow.exec();
}
