#include <QtGui/QApplication>
#include "sensoresbaseboard.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SensoresBaseBoard w;
    w.show();

    return a.exec();
}
