#ifndef KODY_H
#define KODY_H

#include <QDialog>
#include "QTableWidgetItem"
#include "bazadanych.h"

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

private:
    Ui::Kody *ui;
    void odswiezBaze();
    int Columns;
    int Rows;
    QList<QTableWidgetItem *> allItems;
    void deleteRecord();
    void addRecord();
    void zapiszBaze();
    int OPIS_COLUMN;
    int KOD_COLUMN;
    int NAZWA_COLUMN;
};

#endif // KODY_H
