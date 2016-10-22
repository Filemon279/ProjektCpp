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

QString bazadanych::connect()
{






}
