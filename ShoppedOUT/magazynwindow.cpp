#include "magazynwindow.h"
#include "ui_magazynwindow.h"

magazynWindow::magazynWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::magazynWindow)
{
    ui->setupUi(this);
}

magazynWindow::~magazynWindow()
{
    delete ui;
}
