/********************************************************************************
** Form generated from reading UI file 'loginwindows.ui'
**
** Created: Sat May 25 10:50:55 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOWS_H
#define UI_LOGINWINDOWS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindows
{
public:
    QLineEdit *user;
    QLineEdit *pass;
    QPushButton *btnAceptar;
    QPushButton *btnCancelar;
    QLabel *ErrorText;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *LoginWindows)
    {
        if (LoginWindows->objectName().isEmpty())
            LoginWindows->setObjectName(QString::fromUtf8("LoginWindows"));
        LoginWindows->resize(400, 175);
        user = new QLineEdit(LoginWindows);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(120, 50, 191, 27));
        pass = new QLineEdit(LoginWindows);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(120, 80, 191, 27));
        btnAceptar = new QPushButton(LoginWindows);
        btnAceptar->setObjectName(QString::fromUtf8("btnAceptar"));
        btnAceptar->setGeometry(QRect(290, 140, 98, 27));
        btnCancelar = new QPushButton(LoginWindows);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        btnCancelar->setGeometry(QRect(190, 140, 98, 27));
        ErrorText = new QLabel(LoginWindows);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setGeometry(QRect(120, 110, 201, 20));
        label = new QLabel(LoginWindows);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 51, 17));
        label_2 = new QLabel(LoginWindows);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 20));
        label_3 = new QLabel(LoginWindows);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 10, 361, 17));

        retranslateUi(LoginWindows);

        QMetaObject::connectSlotsByName(LoginWindows);
    } // setupUi

    void retranslateUi(QDialog *LoginWindows)
    {
        LoginWindows->setWindowTitle(QApplication::translate("LoginWindows", "Dialog", 0, QApplication::UnicodeUTF8));
        btnAceptar->setText(QApplication::translate("LoginWindows", "Ok", 0, QApplication::UnicodeUTF8));
        btnCancelar->setText(QApplication::translate("LoginWindows", "Cancelar", 0, QApplication::UnicodeUTF8));
        ErrorText->setText(QString());
        label->setText(QApplication::translate("LoginWindows", "Usuario", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginWindows", "Contrase\303\261a", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginWindows", "Introduzca su usuario y contrase\303\261a para comenzar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginWindows: public Ui_LoginWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOWS_H
