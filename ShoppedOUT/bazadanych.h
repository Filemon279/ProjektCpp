#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include <QtSql>
#include <QString>
#include <QMessageBox>
#include <QSpacerItem>
#include <QGridLayout>

class bazadanych
{
public:
    bazadanych();
    QSqlDatabase db;
    bool baza;
};

extern int message_box(QString title, QString message, QWidget *widget);


#endif // BAZADANYCH_H
