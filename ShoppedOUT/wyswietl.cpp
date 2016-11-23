#include "wyswietl.h"


wyswietl::wyswietl(QWidget *parent):
    QGraphicsView(parent)
{


}



void wyswietl::mousePressEvent(QMouseEvent * e)
    {
    double rad = 1;
    if(running)
    {
        proxy->deleteLater();
    }
    running=1;
           pt = mapToScene(e->pos());
          // scene->addEllipse(pt.x()-rad, pt.y()-rad, rad*2.0, rad*2.0,
          // QPen(), QBrush(Qt::SolidPattern));
           gif_anim = new QLabel();

           movie = new QMovie(":/img/Img/gps.gif");
            movie->setScaledSize(QSize(60,60));
           gif_anim->setMovie(movie);
           movie->start();

           gif_anim->setAttribute( Qt::WA_TranslucentBackground, true );
           proxy = scene->addWidget(gif_anim);
           proxy->setPos(pt.x()-gif_anim->width()/2,pt.y()-gif_anim->height()/2);
    }

int wyswietl::xGPS()
{
    if(running)
    {
    return pt.x();
    }
    else return 0;
}

void wyswietl::runSolo()
{
    if(running) return;
    running = 1;
    gif_anim = new QLabel();
    movie = new QMovie(":/img/Img/gps.gif");
    movie->setScaledSize(QSize(60,60));
    gif_anim->setMovie(movie);
    movie->start();
    gif_anim->setAttribute( Qt::WA_TranslucentBackground, true );
    proxy = scene->addWidget(gif_anim);
}

int wyswietl::yGPS()
{
    if(running)
    {
    return pt.y();
    }
    else return 0;
}

void wyswietl::stopMovie()
{
    if(running) movie->stop();
}


void wyswietl::deleteGPS()
{
    if(running)
    {
        proxy->deleteLater();
        running = 0;
    }
}

bool wyswietl::isRunning()
{
return running;
}

void wyswietl::setGpsPosition(int x,int y)
{
    if(!running) runSolo();
    pt = mapToScene(x,y);
    proxy->setPos(pt.x()-gif_anim->width()/2,pt.y()-gif_anim->height()/2);

}

void wyswietl::showEvent(QShowEvent *) {
    int width = this->width();
    int height = this->height();
    QImage tempImage(":/img/Img/projekt1.jpg");
    QImage image = tempImage.convertToFormat(QImage::Format_RGB32);
    QPixmap pixmap = QPixmap::fromImage(image);
    scene = new QGraphicsScene(QRectF(0, 0, width, height), 0);
    QGraphicsPixmapItem *item = scene->addPixmap(pixmap.scaled(QSize(
    (int)scene->width(), (int)scene->height()),
    Qt::KeepAspectRatio, Qt::SmoothTransformation));
    this->fitInView(scene->sceneRect(),Qt::KeepAspectRatio);
    this->setScene(scene);
}
