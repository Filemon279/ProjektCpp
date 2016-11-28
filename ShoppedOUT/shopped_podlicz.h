#ifndef SHOPPED_PODLICZ_H
#define SHOPPED_PODLICZ_H

#include <QDialog>
#include "shopped_platnosc.h"

namespace Ui {
class Shopped_podlicz;
}

class Shopped_podlicz : public QDialog
{
    Q_OBJECT

public:
    explicit Shopped_podlicz(QWidget *parent = 0);
    ~Shopped_podlicz();
signals:
    sendInfo(QString);
    sendStatusNext(QString);
private:
    Ui::Shopped_podlicz *ui;
    float brutto;
    shopped_platnosc *platnosc;
private slots:
    void getCash(float);
    void on_lineEdit_zaplacono_textChanged(const QString &arg1);
    void on_pushButton_karta_clicked();
    void getStatus(QString info);
    void on_pushButton_gotowka_clicked();
};

#endif // SHOPPED_PODLICZ_H
