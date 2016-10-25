#ifndef SETTINGSWINDOW_H
#define SETTINGSWINDOW_H

#include <QDialog>
#include <QTextEdit>
#include <QtSql>
#include "bazadanych.h"



namespace Ui {
class SettingsWindow;
}

class SettingsWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsWindow(QWidget *parent = 0);
    ~SettingsWindow();
    void setInfoField(QString value);
    bool eventFilter(QObject *obj, QEvent *event);
    void hide();

public:



public: void connectDB();


private slots:
    void receiveBaza(QSqlDatabase Baza);
    void on_pushButton_3_clicked();


    void on_pushButton_6_clicked();

private:
    Ui::SettingsWindow *ui;
};

#endif // SETTINGSWINDOW_H
