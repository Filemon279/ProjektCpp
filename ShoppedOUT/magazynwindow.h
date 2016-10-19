#ifndef MAGAZYNWINDOW_H
#define MAGAZYNWINDOW_H

#include <QDialog>

namespace Ui {
class magazynWindow;
}

class magazynWindow : public QDialog
{
    Q_OBJECT

public:
    explicit magazynWindow(QWidget *parent = 0);
    ~magazynWindow();

private:
    Ui::magazynWindow *ui;
};

#endif // MAGAZYNWINDOW_H
