#ifndef ZAKUPY_H
#define ZAKUPY_H

#include <QDialog>
#include "bazadanych.h"
#include "produkt_info.h"
#include "produkt_ilosc.h"
#include <QKeyEvent>
#include "shopped_podlicz.h"

namespace Ui {
class Zakupy;
}

class Zakupy : public QDialog
{
    Q_OBJECT



public:
    explicit Zakupy(QWidget *parent = 0);
    ~Zakupy();

private slots:
    void receiveBaza(QSqlDatabase Baza);

    void on_pushButton_nr7_clicked();

    void on_pushButton_nr8_clicked();

    void on_pushButton_nr5_clicked();

    void on_pushButton_nr9_clicked();

    void on_pushButton_nr4_clicked();

    void on_pushButton_nr6_clicked();

    void on_pushButton_nr1_clicked();

    void on_pushButton_nr2_clicked();

    void on_pushButton_nr3_clicked();

    void on_pushButton_nr0_clicked();

    void on_pushButton_nr00_clicked();

    void on_pushButton_przecinek_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_delete_clicked();

    void on_zakubyTable_clicked(const QModelIndex &index);

    void on_pushButton_enter_clicked();

    void on_pushButton_up_clicked();

    void on_pushButton_down_clicked();

    void on_pushButton_escape_clicked();

    void on_pushButton_clicked();

    void on_pushButton_ilosc_clicked();

    void get_ilosc(int i);



    void on_pushButton_zaplac_clicked();

private:
    Ui::Zakupy *ui;
    produkt_info *info;
    produkt_ilosc *ilosc_window;
    void keyPressEvent( QKeyEvent *e);
    QString polecenie;
    int ilosc = 0;
    int index=0 ;
    Shopped_podlicz *podlicz;
    void enterAction();
    void podlicz_cene();
    QSqlDatabase BazaIN;

signals:
    void send_productKey(QString);
    void sendBaza(QSqlDatabase);
    void sendCash(float);
};

#endif // ZAKUPY_H
