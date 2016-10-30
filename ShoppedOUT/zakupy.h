#ifndef ZAKUPY_H
#define ZAKUPY_H

#include <QDialog>

namespace Ui {
class Zakupy;
}

class Zakupy : public QDialog
{
    Q_OBJECT

public:
    explicit Zakupy(QWidget *parent = 0);
    ~Zakupy();

private slots:
    void on_pushButton_nr7_clicked();

    void on_pushButton_nr8_clicked();

    void on_pushButton_nr5_clicked();

    void on_pushButton_nr9_clicked();

    void on_pushButton_nr4_clicked();

    void on_pushButton_nr6_clicked();

    void on_pushButton_nr1_clicked();

    void on_pushButton_nr2_clicked();

    void on_pushButton_nr3_clicked();

    void on_pushButton_nr0_clicked();

    void on_pushButton_nr00_clicked();

    void on_pushButton_przecinek_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::Zakupy *ui;
};

#endif // ZAKUPY_H
