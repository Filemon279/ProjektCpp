#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sklepwindow.h"
#include "settingswindow.h"
#include "kodywindow.h"
#include "magazynwindow.h"

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
   this->hide();
   sklepwindow.exec();
   this->show();
}

void MainWindow::on_magazynButton_clicked()
{
    magazynWindow magazynwindow;
    magazynwindow.setModal(true);
    this->hide();
    magazynwindow.exec();
    this->show();
}

void MainWindow::on_settingButton_clicked()
{
    SettingsWindow settingswindow;
    settingswindow.setModal(true);
    this->hide();
    settingswindow.exec();
    this->show();
}

void MainWindow::on_codeButton_clicked()
{
    kodywindow kodywin;
    kodywin.setModal(true);
    this->hide();
    kodywin.exec();
    this->show();
}
