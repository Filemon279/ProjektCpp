#ifndef MAGAZYN_H
#define MAGAZYN_H

#include "bazadanych.h"
#include <QDialog>
#include "QTableWidgetItem"
#include <QKeyEvent>
#include <QGraphicsScene>

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
    QGraphicsScene *viewScene;
    QList<QTableWidgetItem *> allItems;
    bool needToSave;
    void deleteRecord();
    void addRecord();
    void zapiszBaze();
    int VAT_COLUMN;
    int BRUTTO_COLUMN;
    int NETTO_COLUMN;
    int LOKALIZACJA_COLUMN;
    void showGPS();
  //  void showEvent(QShowEvent *);



private slots:
    void receiveBaza(QSqlDatabase Baza);
    void keyPressEvent(QKeyEvent* e);
    void on_pushButton_add_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_save_clicked();
    void on_pushButton_refresh_clicked();
    void on_pushButton_up_clicked();
    void on_pushButton_down_clicked();
    void on_Asortyment_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);


    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_Asortyment_clicked(const QModelIndex &index);
    void on_lineEdit_szukaj_textChanged(const QString &arg1);
    void on_pushButton_dodajProdukt_clicked();
    void on_Asortyment_cellChanged(int row, int column);
    void on_Asortyment_itemChanged(QTableWidgetItem *item);
    void on_Asortyment_itemSelectionChanged();
};



#endif // MAGAZYN_H
