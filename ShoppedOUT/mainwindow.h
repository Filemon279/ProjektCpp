#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingswindow.h"
#include "bazadanych.h"
#include "sklepwindow.h"
#include "magazynwindow.h"
#include "zakupy.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    SettingsWindow *settingswindow;
    SklepWindow *sklepwindow;
    magazynWindow *magazynwindow;
    Zakupy *zakupy;
    bazadanych Baza;

signals:
    void sendBaza(QSqlDatabase);

private slots:
    void on_sklepButton_pressed();

    void on_sklepButton_clicked();

    void on_magazynButton_clicked();

    void on_settingButton_clicked();

    void on_codeButton_clicked();

    void on_zakupyButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
