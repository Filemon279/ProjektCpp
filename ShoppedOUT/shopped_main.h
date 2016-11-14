#ifndef SHOPPED_MAIN_H
#define SHOPPED_MAIN_H

#include <QDialog>
#include "settingswindow.h"
#include "bazadanych.h"
#include "zakupy.h"
#include "magazyn.h"
#include "kody.h"
namespace Ui {
class Shopped_main;
}

class Shopped_main : public QDialog
{
    Q_OBJECT

public:
    explicit Shopped_main(QWidget *parent = 0);
    ~Shopped_main();
    SettingsWindow *settingswindow;
    Magazyn *magazyn;
    Zakupy *zakupy;
    bazadanych Baza;
    Kody *kody;

private slots:
    void on_magazynButton_clicked();

    void on_settingButton_clicked();

    void on_codeButton_clicked();

    void on_sklepButton_clicked();

signals:
    void sendBaza(QSqlDatabase);

private:
    Ui::Shopped_main *ui;
};

#endif // SHOPPED_MAIN_H
