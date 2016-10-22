#ifndef SKLEPWINDOW_H
#define SKLEPWINDOW_H

#include <QDialog>
#include "bazadanych.h"

namespace Ui {
class SklepWindow;
}

class SklepWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SklepWindow(QWidget *parent = 0);
    ~SklepWindow();

private slots:
    void on_SklepWindow_finished(int result);
    void receiveBaza(bazadanych Baza);

private:
    Ui::SklepWindow *ui;
};

#endif // SKLEPWINDOW_H
