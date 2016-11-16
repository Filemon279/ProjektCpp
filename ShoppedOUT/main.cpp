#include <QApplication>
#include "shopped_main.h"


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Shopped_main w;
    w.showFullScreen();

    return a.exec();
}
