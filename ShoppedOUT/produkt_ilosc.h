#ifndef PRODUKT_ILOSC_H
#define PRODUKT_ILOSC_H

#include <QDialog>

namespace Ui {
class produkt_ilosc;
}

class produkt_ilosc : public QDialog
{
    Q_OBJECT

public:
    explicit produkt_ilosc(QWidget *parent = 0);
    ~produkt_ilosc();

private:
    Ui::produkt_ilosc *ui;

signals:
    send_ilosc(int);
private slots:
    void on_pushButton_clicked();
};

#endif // PRODUKT_ILOSC_H
