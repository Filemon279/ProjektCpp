#ifndef MAGAZYNWINDOW_H
#define MAGAZYNWINDOW_H

#include <QDialog>
#include "bazadanych.h"

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

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::magazynWindow *ui;
};

#endif // MAGAZYNWINDOW_H
