#ifndef SKLEPWINDOW_H
#define SKLEPWINDOW_H

#include <QDialog>

namespace Ui {
class SklepWindow;
}

class SklepWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SklepWindow(QWidget *parent = 0);
    ~SklepWindow();

private:
    Ui::SklepWindow *ui;
};

#endif // SKLEPWINDOW_H
