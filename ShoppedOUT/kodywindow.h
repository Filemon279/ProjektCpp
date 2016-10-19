#ifndef KODYWINDOW_H
#define KODYWINDOW_H

#include <QDialog>

namespace Ui {
class kodywindow;
}

class kodywindow : public QDialog
{
    Q_OBJECT

public:
    explicit kodywindow(QWidget *parent = 0);
    ~kodywindow();

private:
    Ui::kodywindow *ui;
};

#endif // KODYWINDOW_H
