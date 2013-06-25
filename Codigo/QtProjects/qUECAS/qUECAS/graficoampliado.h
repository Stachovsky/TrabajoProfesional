#ifndef GRAFICOAMPLIADO_H
#define GRAFICOAMPLIADO_H

#include <QMainWindow>
#include <QString>
#include <QStringList>
#include <QFileDialog>
#include <QDesktopWidget>
#include <QRect>


#include "qcustomplot.h"

namespace Ui {
    class GraficoAmpliado;
}

class GraficoAmpliado : public QMainWindow
{
    Q_OBJECT

public:
    explicit GraficoAmpliado(QWidget *parent = 0);
    ~GraficoAmpliado();
    QCustomPlot* grafico;

private:
    Ui::GraficoAmpliado *ui;

private slots:
    void on_actionArchivo_PDF_triggered();
    void on_actionImagen_JPG_triggered();
    void on_actionImagen_PNG_triggered();
    void on_actionCerrar_triggered();
};

#endif // GRAFICOAMPLIADO_H
