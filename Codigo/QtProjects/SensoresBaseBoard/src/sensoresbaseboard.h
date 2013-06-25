#ifndef SENSORESBASEBOARD_H
#define SENSORESBASEBOARD_H

#include <QMainWindow>
#include "QTimer"

namespace Ui {
    class SensoresBaseBoard;
}

class SensoresBaseBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit SensoresBaseBoard(QWidget *parent = 0);
    ~SensoresBaseBoard();

    QTimer *timer;

private slots:
    void pulling(void);

    void on_ledsValue_valueChanged(int value);

    void on_seg7ValueBar_valueChanged(int value);

    void on_ledRed_toggled(bool checked);

    void on_ledGreen_toggled(bool checked);

    void on_ledBlue_toggled(bool checked);

private:
    Ui::SensoresBaseBoard *ui;
};

#endif // SENSORESBASEBOARD_H
