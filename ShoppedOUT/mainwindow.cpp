#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingswindow.h"
#include "kodywindow.h"
#include "magazynwindow.h"
#include "bazadanych.h"
#include <QtCore/QCoreApplication>
#include <QtSQL>

bool setting=false;
bool sklep=false;
bool magazyn = false;
bool kody = false;


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
   sklepwindow = new SklepWindow(this);
   sklepwindow->setModal(true);
   connect(this,SIGNAL(sendBaza(QSqlDatabase)), sklepwindow,SLOT(receiveBaza(QSqlDatabase)));
  emit sendBaza(Baza.db);
   this->hide();
   sklepwindow->exec();
   this->show();

}

void MainWindow::on_magazynButton_clicked()
{
    magazynwindow = new  magazynWindow(this);
    magazynwindow->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)), magazynwindow,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    this->hide();
    magazynwindow->exec();
    this->show();
}

void MainWindow::on_settingButton_clicked()
{
    settingswindow = new  SettingsWindow(this);
    settingswindow->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  settingswindow,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    this->hide();
    settingswindow->exec();
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

void MainWindow::on_zakupyButton_clicked()
{
    zakupy = new  Zakupy(this);
    zakupy->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  zakupy,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    zakupy->showFullScreen();
    zakupy->exec();

}

void MainWindow::on_pushButton_clicked()
{
    magazyn = new  Magazyn(this);
    magazyn->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  magazyn,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    magazyn->showFullScreen();
    magazyn->exec();
}
