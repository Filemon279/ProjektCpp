#include "bazadanych.h"



bazadanych::bazadanych()
{

 baza=false;
 db = QSqlDatabase::addDatabase("QMYSQL");
 db.setHostName("188.128.191.115");
 db.setDatabaseName("22192901_shopped");
 db.setUserName("22192901_shopped");
 db.setPassword("!issp2016");
}

extern int message_box(QString title, QString message, QWidget *widget)
{


QMessageBox msgBox;
msgBox.setWindowTitle(title);
msgBox.setText("<p style='font-size:15px'><b>"+title+"</p></b>");
msgBox.setInformativeText("<p align='center' style='font-size:18px'>"+message+"</p>");
msgBox.setStandardButtons(QMessageBox::Yes);
msgBox.addButton(QMessageBox::Abort);
msgBox.addButton(QMessageBox::No);
msgBox.setButtonText(QMessageBox::Yes,"Tak");
msgBox.setButtonText(QMessageBox::Abort,"Anuluj");
msgBox.setButtonText(QMessageBox::No,"Nie");
QSpacerItem* horizontalSpacer = new QSpacerItem(350, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
QGridLayout* layout = (QGridLayout*)msgBox.layout();
layout->addItem(horizontalSpacer, layout->rowCount(), 0, 1, layout->columnCount());
msgBox.setStyleSheet("QMessageBox { background-color:"
                     " qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 "
                     "rgba(255, 187, 0, 255), stop:1 rgba(182, 97, 46, 255)); }"
                     "QPushButton {background-color: qlineargradient"
                     "(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(44, 43, 156, 255), "
                     "stop:1 rgba(138, 147, 255, 255));\nbackground-color: qlineargradient"
                     "(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(35, 34, 126, 255), "
                     "stop:1 rgba(95, 106, 255, 255));color:white;font-weight:bold;font-size:15px;}");

msgBox.setWindowFlags(Qt::FramelessWindowHint);
msgBox.setDefaultButton(QMessageBox::No);
int reply = msgBox.exec();
if(reply == QMessageBox::Yes){
    return 1;
}
if(reply == QMessageBox::Abort){
    return 2;
}else {
   return 0;
}


//    QMessageBox *msgBox = new QMessageBox(widget);
 //   msgBox->setButtonText(QMessageBox::Yes, "Tak");
 //      msgBox->setButtonText(QMessageBox::No, "Nie");
 //   QMessageBox::StandardButton reply;
 //    reply = QMessageBox::question(widget, title, message,
       //                            QMessageBox::Yes|QMessageBox::No);
   //  if (reply == QMessageBox::Yes)     return 1;
  //    else   return 0;


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

