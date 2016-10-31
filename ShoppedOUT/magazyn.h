#ifndef MAGAZYN_H
#define MAGAZYN_H

#include "bazadanych.h"
#include <QDialog>

namespace Ui {
class Magazyn;
}

class Magazyn : public QDialog
{
    Q_OBJECT

public:
    explicit Magazyn(QWidget *parent = 0);
    ~Magazyn();

private:
    Ui::Magazyn *ui;

private slots:
    void receiveBaza(QSqlDatabase Baza);
};



#endif // MAGAZYN_H
