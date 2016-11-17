#include "bazadanych.h"



bazadanych::bazadanych()
{

 baza=false;
 db = QSqlDatabase::addDatabase("QMYSQL");
 db.setHostName("127.0.0.1");
 db.setDatabaseName("sklep");
 db.setUserName("root");
 db.setPassword("root");
}

extern int message_box(QString title, QString message, QWidget *widget)
{
    QMessageBox *msgBox = new QMessageBox(widget);
    msgBox->setButtonText(QMessageBox::Yes, "Tak");
       msgBox->setButtonText(QMessageBox::No, "Nie");
    QMessageBox::StandardButton reply;
     reply = QMessageBox::question(widget, title, message,
                                   QMessageBox::Yes|QMessageBox::No);
     if (reply == QMessageBox::Yes)     return 1;
      else   return 0;


    /*msgBox->setText("<p style='font-size:15px'><b>"+title+"</p></b>");
       msgBox->setInformativeText("<p align='center' style='font-size:18px'>"+message+"</p>");
       QMessageBox::StandardButton reply;
       msgBox->setDefaultButton(QMessageBox::Yes);
       QSpacerItem* horizontalSpacer = new QSpacerItem(350, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
       QGridLayout* layout = (QGridLayout*)msgBox->layout();
       layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
       msgBox->setStyleSheet("QMessageBox { background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255)); }");
       msgBox->setWindowFlags(Qt::FramelessWindowHint);
       return msgBox->exec();*/
}

