#include "nuevoexperimento.h"
#include "ui_nuevoexperimento.h"

NuevoExperimento::NuevoExperimento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nuevoExperimento)
{
    ui->setupUi(this);

    this->ui->parametroValue->setText("0");
    this->ui->unidadValue->setText("V");
    this->ui->scrollParametrosValue->setValue(0);
    this->ui->unidadTension->setChecked(true);
    this->ui->unidadSelection->setChecked(true);

    this->currentRange = RANGE_UNIDAD_TENSION;
    this->ui->scrollParametrosValue->setRange(0,this->currentRange);

    this->ui->unidadValue->setEnabled(false);
    this->ui->unidadValue->setStyleSheet("background-color:white;color:black;");

    this->ui->Usuario->setEnabled(false);
    this->ui->Usuario->setStyleSheet("background-color:white;color:black;");



    connect( this->ui->unidadPorcentaje, SIGNAL( clicked() ), this, SLOT(sameRadioChange()) );
    connect( this->ui->unidadTension, SIGNAL( clicked() ), this, SLOT(sameRadioChange()) );
    connect( this->ui->unidadCarga, SIGNAL( clicked() ), this, SLOT(sameRadioChange()) );

    this->ui->descripcion->setFocus();
}

NuevoExperimento::~NuevoExperimento()
{
    delete ui;
}

void NuevoExperimento::sameRadioChange()
{
    int newRange;
    if(this->ui->unidadPorcentaje->isChecked() == true){
        this->ui->unidadValue->setText("%");
        newRange = RANGE_UNIDAD_PORCENTAJE;
    }
    else if(this->ui->unidadTension->isChecked() == true){
        this->ui->unidadValue->setText("V");
        newRange = RANGE_UNIDAD_TENSION;
    }
    else if(this->ui->unidadCarga->isChecked() == true){
        this->ui->unidadValue->setText("mQ");
        newRange = RANGE_UNIDAD_CARGA;
    }

    float v = (float)this->ui->scrollParametrosValue->value();
    v = (v/this->currentRange)*newRange;
    this->currentRange = newRange;

    this->ui->scrollParametrosValue->blockSignals(true);
    this->ui->parametroValue->blockSignals(true);

    this->ui->scrollParametrosValue->setRange(0,this->currentRange);
    this->ui->scrollParametrosValue->setValue((int)v);
    this->ui->parametroValue->setText(QString::number((int)v));

    this->ui->scrollParametrosValue->blockSignals(false);
    this->ui->parametroValue->blockSignals(false);

}

void NuevoExperimento::on_scrollParametrosValue_valueChanged(int value)
{
    this->ui->parametroValue->setText(QString::number(value));
}

void NuevoExperimento::on_parametroValue_editingFinished()
{
    this->ui->scrollParametrosValue->setValue(this->ui->parametroValue->text().toInt());
}

void NuevoExperimento::on_parametroValue_textChanged(const QString &arg1)
{
    int value = this->ui->parametroValue->text().toInt();
    if((value >= 0) && (value <= this->currentRange)){
        this->ui->scrollParametrosValue->setValue(value);
    }else{
        this->ui->scrollParametrosValue->setValue(0);
    }
}

void NuevoExperimento::on_btnComenzar_clicked()
{
    ((qUECAS*)this->parent())->crearNuevoExperimento(   this->ui->descripcion->toPlainText(),
                                                        this->ui->comentario->toPlainText(),
                                                        this->ui->parametroValue->text().toInt(),
                                                        this->ui->unidadValue->text()
                                                     );

     ((qUECAS*)this->parent())->setParametrosExperimentos(  this->ui->parametroValue->text().toInt(),
                                                            this->ui->unidadValue->text()
                                                         );
    this->accept();
}

void NuevoExperimento::setUserName(QString userName){
    this->userName = userName;
    this->ui->Usuario->setText(this->userName);
}
