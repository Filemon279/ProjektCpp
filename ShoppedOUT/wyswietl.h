#ifndef WYSWIETL_H
#define WYSWIETL_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QMouseEvent>
#include <QGraphicsProxyWidget>
#include <QLabel>
#include <QMovie>
#include <QPoint>
#include "bazadanych.h"

class wyswietl : public QGraphicsView
{
    Q_OBJECT
public:
   explicit wyswietl(QWidget *parent = 0);

public slots:
   void mousePressEvent(QMouseEvent * e);

private:
   QGraphicsScene *scene;
   void showEvent(QShowEvent *);
   QLabel *gif_anim;
   QMovie *movie;
   QGraphicsProxyWidget *proxy;
   bool running = 0;
   QPointF pt;
   void runSolo();


public:
   int xGPS();
   int yGPS();
   void stopMovie();
   void deleteGPS();
   bool isRunning();
   void setGpsPosition(int x,int y);
};

#endif // WYSWIETL_H
