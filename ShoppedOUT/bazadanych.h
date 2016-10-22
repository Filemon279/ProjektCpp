#ifndef BAZADANYCH_H
#define BAZADANYCH_H

#include <QtSql>
#include <QString>

class bazadanych
{
public:
    bazadanych();
    QSqlDatabase db;
    bool baza;
    QString connect();
};

#endif // BAZADANYCH_H
