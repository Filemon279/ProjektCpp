#ifndef SHOPPED_PLATNOSC_H
#define SHOPPED_PLATNOSC_H

#include <QDialog>
#include <QMovie>
#include <QLabel>
#include <QTime>
#include <QFuture>
#include <QCoreApplication>
#include <QtConcurrent/QtConcurrent>

namespace Ui {
class shopped_platnosc;
}

class shopped_platnosc : public QDialog
{
    Q_OBJECT

signals:
    sendStatus(QString);

public:
    explicit shopped_platnosc(QWidget *parent = 0);
    ~shopped_platnosc();

private slots:
    getInfo(QString info);

private:
    Ui::shopped_platnosc *ui;
    void delay(int i);
     QMovie *movie;
};

#endif // SHOPPED_PLATNOSC_H
