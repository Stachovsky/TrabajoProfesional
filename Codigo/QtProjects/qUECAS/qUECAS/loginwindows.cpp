#include "loginwindows.h"
#include "ui_loginwindows.h"

LoginWindows::LoginWindows(QWidget *parent) :
    QDialog(parent, Qt::CustomizeWindowHint),
    ui(new Ui::LoginWindows)
{
    ui->setupUi(this);

    this->ui->pass->setEchoMode(QLineEdit::Password);
    this->ui->ErrorText->setStyleSheet("color:red;");

    // Se centra la ventana
    QRect frect = this->frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());

}

LoginWindows::~LoginWindows()
{
    delete ui;
}

void LoginWindows::on_btnAceptar_clicked()
{
    if(((qUECAS*)this->parent())->checkLogin(this->ui->user->text(), this->ui->pass->text())){
        this->accept();
    }else{
        this->ui->ErrorText->setText("Datos ingresados incorrectos");
    }
}

void LoginWindows::on_btnCancelar_clicked()
{
    this->reject();
}

