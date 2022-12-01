#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QtMultimedia>
#include <QKeyEvent>
#include <QMediaPlayer>
#include <QPixmap>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_menos_clicked();

    void on_pushButton_mas_clicked();

    void on_onoffButton_toggled(bool checked);

    void reproducir(int freq, int id);

    void on_Id_Do_1_pressed();

    void on_Id_Do_1_released();

    void on_Id_DoS_1_pressed();

    void on_Id_Re_1_pressed();

    void on_Id_ReS_1_pressed();

    void on_Id_Mi_1_pressed();

    void on_Id_Fa_1_pressed();

    void on_Id_FaS_1_pressed();

    void on_Id_Sol_1_pressed();

    void on_Id_SolS_1_pressed();

    void on_Id_La_1_pressed();

    void on_Id_LaS_1_pressed();

    void on_Id_Si_1_pressed();

    void on_Id_Do_2_pressed();

    void on_Id_DoS_2_pressed();

    void on_Id_Re_2_pressed();

    void on_Id_ReS_2_pressed();

    void on_Id_Mi_2_pressed();

    void on_Id_Fa_2_pressed();

    void on_Id_FaS_2_pressed();

    void on_Id_Sol_2_pressed();

    void on_Id_SolS_2_pressed();

    void on_Id_La_2_pressed();

    void on_Id_LaS_2_pressed();

    void on_Id_Si_2_pressed();

    void on_Id_DoS_1_released();

    void on_Id_Re_1_released();

    void on_Id_ReS_1_released();

    void on_Id_Mi_1_released();

    void on_Id_Fa_1_released();

    void on_Id_FaS_1_released();

    void on_Id_Sol_1_released();

    void on_Id_SolS_1_released();

    void on_Id_La_1_released();

    void on_Id_LaS_1_released();

    void on_Id_Si_1_released();

    void on_Id_Do_2_released();

    void on_Id_DoS_2_released();

    void on_Id_Re_2_released();

    void on_Id_ReS_2_released();

    void on_Id_Mi_2_released();

    void on_Id_Fa_2_released();

    void on_Id_FaS_2_released();

    void on_Id_Sol_2_released();

    void on_Id_SolS_2_released();

    void on_Id_La_2_released();

    void on_Id_LaS_2_released();

    void on_Id_Si_2_released();


    void keyPressEvent(QKeyEvent * event);

private:
    Ui::MainWindow *ui;
    QAudioOutput *audioOutput;
    QMediaPlayer *player;
    bool on;
    float vol;
    QPixmap off;
    bool disp;
};
#endif // MAINWINDOW_H
