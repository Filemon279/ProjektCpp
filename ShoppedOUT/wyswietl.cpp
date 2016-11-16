#include "wyswietl.h"
#include <QLabel>
#include <QMovie>

wyswietl::wyswietl(QWidget *parent):
    QGraphicsView(parent)
{

}

void wyswietl::mousePressEvent(QMouseEvent * e)
    {
    double rad = 1;
  //  QString a = scene->width() + " = "+this->scene->width()
  //  qDebug(scene->)
    QPointF pt = mapToScene(e->pos());
           scene->addEllipse(pt.x()-rad, pt.y()-rad, rad*2.0, rad*2.0,
               QPen(), QBrush(Qt::SolidPattern));


           QLabel *gif_anim = new QLabel();
           QMovie *movie = new QMovie(":/img/Img/gps.gif");
           gif_anim->setMovie(movie);
           movie->start();
           QGraphicsProxyWidget *proxy = scene->addWidget(gif_anim);
            proxy->setPos(pt.x()-rad,pt.y()-rad);


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
