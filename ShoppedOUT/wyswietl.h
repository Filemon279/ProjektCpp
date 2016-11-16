#ifndef WYSWIETL_H
#define WYSWIETL_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsEllipseItem>
#include <QMouseEvent>
#include <QGraphicsProxyWidget>

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

};

#endif // WYSWIETL_H
