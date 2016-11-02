#ifndef MAGAZYN_H
#define MAGAZYN_H

#include "bazadanych.h"
#include <QDialog>
#include "QTableWidgetItem"

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
    void odswiezBaze();
    int Columns;
    int Rows;
    QList<QTableWidgetItem *> allItems;
    void deleteRecord();
    void addRecord();
    void zapiszBaze();
    int VAT_COLUMN;
    int BRUTTO_COLUMN;
    int NETTO_COLUMN;


private slots:
    void receiveBaza(QSqlDatabase Baza);

    void on_pushButton_add_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_save_clicked();
    void on_pushButton_refresh_clicked();
    void on_pushButton_up_clicked();
    void on_pushButton_down_clicked();
    void on_Asortyment_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);
    void on_Asortyment_cellChanged(int row, int column);
};



#endif // MAGAZYN_H
