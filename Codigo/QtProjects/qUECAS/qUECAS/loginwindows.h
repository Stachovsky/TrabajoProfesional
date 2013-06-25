#ifndef LOGINWINDOWS_H
#define LOGINWINDOWS_H

#include <QDialog>
#include "quecas.h"

namespace Ui {
    class LoginWindows;
}

class LoginWindows : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindows(QWidget *parent = 0);
    ~LoginWindows();

private:
    Ui::LoginWindows    *ui;

private slots:
    void on_btnAceptar_clicked();
    void on_btnCancelar_clicked();
};

#endif // LOGINWINDOWS_H
