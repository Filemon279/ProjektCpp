#ifndef SKANOWANIE_H
#define SKANOWANIE_H
#include<QKeyEvent>
#include <QDialog>
#include "bazadanych.h"
#include <QTableWidget>

namespace Ui {
class Skanowanie;
}

class Skanowanie : public QDialog
{
    Q_OBJECT

public:
    explicit Skanowanie(QWidget *parent = 0);
    ~Skanowanie();
    void cos();

private:
    Ui::Skanowanie *ui;
    void keyPressEvent( QKeyEvent *e);
    QString polecenie;
    int ilosc = 0;
    int index=0 ;
    void delay();


private slots:
    void receiveBaza(QSqlDatabase Baza);
      void on_zaplac_button_clicked();
};



#endif // SKANOWANIE_H
