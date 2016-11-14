#ifndef KODY_H
#define KODY_H

#include <QDialog>
#include "QTableWidgetItem"
#include "bazadanych.h"
#include <QtGlobal>

namespace Ui {
class Kody;
}

class Kody : public QDialog
{
    Q_OBJECT

public:
    explicit Kody(QWidget *parent = 0);
    ~Kody();

private slots:
    void receiveBaza(QSqlDatabase Baza);


    void on_Asortyment_itemSelectionChanged();

    void on_pushButton_clicked();

    void on_dial_sliderMoved(int position);

    void on_dial_valueChanged(int value);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Kody *ui;
    void odswiezBaze();
    int Columns;
    int Rows;
    QString wybierzLokalizacje();
    QList<QTableWidgetItem *> allItems;
    void deleteRecord();
    void addRecord();
    void zapiszBaze();
    bool sprawdzCzyUnikatowy(QString numer);
    int OPIS_COLUMN;
    int KOD_COLUMN;
    int NAZWA_COLUMN;
};

#endif // KODY_H
