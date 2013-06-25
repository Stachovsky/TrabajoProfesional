#ifndef NUEVOEXPERIMENTO_H
#define NUEVOEXPERIMENTO_H

#include <QDialog>
#include <QDebug>
#include <QString>
#include "quecas.h"

#define RANGE_UNIDAD_PORCENTAJE     100
#define RANGE_UNIDAD_TENSION        1000
#define RANGE_UNIDAD_CARGA          440

namespace Ui {
class nuevoExperimento;
}

class NuevoExperimento : public QDialog
{
    Q_OBJECT
    
public:
    explicit NuevoExperimento(QWidget *parent = 0);
    ~NuevoExperimento();

    void setUserName(QString userName);
    
private slots:

    void on_scrollParametrosValue_valueChanged(int value);

    void on_parametroValue_editingFinished();

    void on_parametroValue_textChanged(const QString &arg1);

    void on_btnComenzar_clicked();

    void sameRadioChange();

private:
    Ui::nuevoExperimento *ui;
    QString userName;
    int currentRange;
};

#endif // NUEVOEXPERIMENTO_H
