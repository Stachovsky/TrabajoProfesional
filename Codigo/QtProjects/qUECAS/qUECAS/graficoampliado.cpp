#include "graficoampliado.h"
#include "ui_graficoampliado.h"

GraficoAmpliado::GraficoAmpliado(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GraficoAmpliado)
{
    ui->setupUi(this);

    this->grafico = new QCustomPlot();
    this->ui->gridLayout->addWidget(this->grafico);

    /////////////////////////////////////////////
    // Se centra la ventana
    QRect frect = this->frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());
    //    this->setWindowState(Qt::WindowFullScreen);
    /////////////////////////////////////////////
}

GraficoAmpliado::~GraficoAmpliado()
{
    delete ui;
    delete this->grafico;
}

void GraficoAmpliado::on_actionImagen_PNG_triggered()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Portable Network Graphics (*.png)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setNameFilters(filterFile);
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".png"){
        fileName +=".png";
    }

    this->grafico->savePng(fileName,1000,500);
}

void GraficoAmpliado::on_actionImagen_JPG_triggered()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Joint Photographic Experts Group (*.jpg)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setNameFilters(filterFile);
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".jpg"){
        fileName +=".jpg";
    }

    this->grafico->saveJpg(fileName,1000,500);
}

void GraficoAmpliado::on_actionArchivo_PDF_triggered()
{
    QFileDialog fileDialog;
    QStringList filterFile;
    filterFile.push_back("Portable Document Format (*.pdf)");
    filterFile.push_back("Todos los archivos (*.*)");
    fileDialog.setAcceptMode(QFileDialog::AcceptSave);
    fileDialog.setNameFilters(filterFile);
    fileDialog.exec();

    QString fileName = fileDialog.selectedFiles()[0];
    if(fileName.mid(fileName.size()-4) != ".pdf"){
        fileName +=".pdf";
    }

    this->grafico->savePdf(fileName);
}

void GraficoAmpliado::on_actionCerrar_triggered()
{
    this->close();
}
