#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "settingswindow.h"
#include "bazadanych.h"
#include "sklepwindow.h"
#include "magazynwindow.h"

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
    bazadanych Baza;

signals:
    void sendBaza(QSqlDatabase);

private slots:
    void on_sklepButton_pressed();

    void on_sklepButton_clicked();

    void on_magazynButton_clicked();

    void on_settingButton_clicked();

    void on_codeButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
