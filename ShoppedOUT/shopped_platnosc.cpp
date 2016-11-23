#include "shopped_platnosc.h"
#include "ui_shopped_platnosc.h"

shopped_platnosc::shopped_platnosc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::shopped_platnosc)
{
    ui->setupUi(this);

    movie = new QMovie(":/img/Img/waiting.gif");
    //QLabel *processLabel = new QLabel(this);
    ui->label_movie->setMovie(movie);
    movie->setScaledSize(QSize(60,60));
    ui->label_movie->setAttribute( Qt::WA_TranslucentBackground, true );
    movie->start();

    ui->label_title->setText("Płatność jest przetwarzana...");
    QFuture<void> future = QtConcurrent::run(this,delay,3);


}

shopped_platnosc::~shopped_platnosc()
{
    delete ui;
}

shopped_platnosc::getInfo(QString info)
{

}

void shopped_platnosc::delay(int i)
{
    QTime dieTime= QTime::currentTime().addSecs(i);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    ui->label_movie->close();
    ui->label_title->setText("");
     ui->label_end->setText("Tranzakcja przebiegła pomyślnie");
    dieTime= QTime::currentTime().addSecs(1);
     while (QTime::currentTime() < dieTime)
         QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
     emit sendStatus("done");
     delete this;

}
