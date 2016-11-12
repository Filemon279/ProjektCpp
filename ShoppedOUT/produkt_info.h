#ifndef PRODUKT_INFO_H
#define PRODUKT_INFO_H

#include <QDialog>
#include "bazadanych.h"

namespace Ui {
class produkt_info;
}

class produkt_info : public QDialog
{
    Q_OBJECT

public:
    explicit produkt_info(QWidget *parent = 0);
    ~produkt_info();

private slots:
    void on_pushButton_clicked();
    void get_productKey(QString kodIN);
    void receiveBaza(QSqlDatabase Baza);

private:
    Ui::produkt_info *ui;
    QString kod;
};

#endif // PRODUKT_INFO_H
