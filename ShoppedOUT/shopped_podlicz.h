#ifndef SHOPPED_PODLICZ_H
#define SHOPPED_PODLICZ_H

#include <QDialog>

namespace Ui {
class Shopped_podlicz;
}

class Shopped_podlicz : public QDialog
{
    Q_OBJECT

public:
    explicit Shopped_podlicz(QWidget *parent = 0);
    ~Shopped_podlicz();

private:
    Ui::Shopped_podlicz *ui;
    float brutto;
private slots:
    void getCash(float);
    void on_lineEdit_zaplacono_textChanged(const QString &arg1);
};

#endif // SHOPPED_PODLICZ_H
