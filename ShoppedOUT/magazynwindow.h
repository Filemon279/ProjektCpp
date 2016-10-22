#ifndef MAGAZYNWINDOW_H
#define MAGAZYNWINDOW_H

#include <QDialog>
#include "bazadanych.h"
#include "QTableWidgetItem"


namespace Ui {
class magazynWindow;
}

class magazynWindow : public QDialog
{
    Q_OBJECT

public:
    explicit magazynWindow(QWidget *parent = 0);
    ~magazynWindow();

private slots:

    void receiveBaza(QSqlDatabase Baza);
    void odswiezBaze();
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_szukajField_textChanged(const QString &arg1);

private:
    Ui::magazynWindow *ui;
    int Columns;
    int Rows;
     QList<QTableWidgetItem *> allItems;
};

#endif // MAGAZYNWINDOW_H
