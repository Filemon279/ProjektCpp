#ifndef SKLEPWINDOW_H
#define SKLEPWINDOW_H

#include <QDialog>
#include "bazadanych.h"
#include "skanowanie.h"
#include <QTableWidget>

namespace Ui {
class SklepWindow;
}

class SklepWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SklepWindow(QWidget *parent = 0);
    ~SklepWindow();
    Skanowanie *skanowanie;

signals:
    void sendBaza(QSqlDatabase);


private slots:
    void on_SklepWindow_finished(int result);
    void receiveBaza(QSqlDatabase Baza);
    void on_pushButton_3_clicked();

private:
    Ui::SklepWindow *ui;
    QSqlDatabase BazaIn;

};

#endif // SKLEPWINDOW_H
