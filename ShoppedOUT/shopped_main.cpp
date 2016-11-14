#include "shopped_main.h"
#include "ui_shopped_main.h"

Shopped_main::Shopped_main(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Shopped_main)
{
    ui->setupUi(this);
}

Shopped_main::~Shopped_main()
{
    delete ui;
}


void Shopped_main::on_magazynButton_clicked()
{
    magazyn = new  Magazyn(this);
    magazyn->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  magazyn,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    magazyn->showFullScreen();
    magazyn->exec();
}

void Shopped_main::on_settingButton_clicked()
{
    settingswindow = new  SettingsWindow(this);
    settingswindow->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  settingswindow,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    this->hide();
    settingswindow->exec();
    this->show();
}

void Shopped_main::on_codeButton_clicked()
{
    kody = new  Kody(this);
    kody->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)), kody,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    kody->showFullScreen();
    kody->exec();
}

void Shopped_main::on_sklepButton_clicked()
{
    zakupy = new  Zakupy(this);
    zakupy->setModal(true);
    connect(this,SIGNAL(sendBaza(QSqlDatabase)),  zakupy,SLOT(receiveBaza(QSqlDatabase)));
    emit sendBaza(Baza.db);
    zakupy->showFullScreen();
    zakupy->exec();
}
