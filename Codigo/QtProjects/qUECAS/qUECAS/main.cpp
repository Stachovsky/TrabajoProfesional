#include <QtGui/QApplication>
#include "quecas.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qUECAS w;

    if(!w.login()){
        qDebug() << "Login Error";
        return -1;
    }

    w.iniciar();
    w.show();

    a.exec();

    return 0;
}
