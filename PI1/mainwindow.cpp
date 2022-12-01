#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <QtMultimedia>
//#include <QMediaPlayer>
#include <QSound>
#include <QPixmap>
#include <QThread>
#include <iostream>
#include <QKeyEvent>
// Include de librerias tipo c.
#include <unistd.h>
//#include <windows.h>

extern "C" int Tecla_Presionada(int tecla);
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
//    this->vol = 100;
//    ui->volLabel->setText("1");
    this->on = false;
    ui->setupUi(this);
    this->player = new QMediaPlayer(this);

    // Luces LED.
        QPixmap pixmap(":/LED/Off.png");
        this->off = pixmap;

        ui->labelDo1->setPixmap(off);
//        ui->labelDo1->setMask(off.mask());
        ui->labelDo1->show();

        ui->labelDoS1->setPixmap(off);
//        ui->labelDoS1->setMask(off.mask());
        ui->labelDoS1->show();

        ui->labelRe1->setPixmap(off);
//        ui->labelRe1->setMask(off.mask());
        ui->labelRe1->show();

        ui->labelReS1->setPixmap(off);
//        ui->labelReS1->setMask(off.mask());
        ui->labelReS1->show();

        ui->labelMi1->setPixmap(off);
//        ui->labelMi1->setMask(off.mask());
        ui->labelMi1->show();

        ui->labelFa1->setPixmap(off);
//        ui->labelFa1->setMask(off.mask());
        ui->labelFa1->show();

        ui->labelFaS1->setPixmap(off);
//        ui->labelFaS1->setMask(off.mask());
        ui->labelFaS1->show();

        ui->labelSol1->setPixmap(off);
//        ui->labelSol1->setMask(off.mask());
        ui->labelSol1->show();

        ui->labelSolS1->setPixmap(off);
//        ui->labelSolS1->setMask(off.mask());
        ui->labelSolS1->show();

        ui->labelLa1->setPixmap(off);
//        ui->labelLa1->setMask(off.mask());
        ui->labelLa1->show();

        ui->labelLaS1->setPixmap(off);
//        ui->labelLaS1->setMask(off.mask());
        ui->labelLaS1->show();

        ui->labelSi1->setPixmap(off);
//        ui->labelSi1->setMask(off.mask());
        ui->labelSi1->show();

        ui->labelDo2->setPixmap(off);
//        ui->labelDo2->setMask(off.mask());
        ui->labelDo2->show();

        ui->labelDoS2->setPixmap(off);
//        ui->labelDoS2->setMask(off.mask());
        ui->labelDoS2->show();

        ui->labelRe2->setPixmap(off);
//        ui->labelRe2->setMask(off.mask());
        ui->labelRe2->show();

        ui->labelReS2->setPixmap(off);
//        ui->labelReS2->setMask(off.mask());
        ui->labelReS2->show();

        ui->labelMi2->setPixmap(off);
//        ui->labelMi2->setMask(off.mask());
        ui->labelMi2->show();

        ui->labelFa2->setPixmap(off);
//        ui->labelFa2->setMask(off.mask());
        ui->labelFa2->show();

        ui->labelFaS2->setPixmap(off);
//        ui->labelFaS2->setMask(off.mask());
        ui->labelFaS2->show();

        ui->labelSol2->setPixmap(off);
//        ui->labelSol2->setMask(off.mask());
        ui->labelSol2->show();

        ui->labelSolS2->setPixmap(off);
//        ui->labelSolS2->setMask(off.mask());
        ui->labelSolS2->show();

        ui->labelLa2->setPixmap(off);
//        ui->labelLa2->setMask(off.mask());
        ui->labelLa2->show();

        ui->labelLaS2->setPixmap(off);
//        ui->labelLaS2->setMask(off.mask());
        ui->labelLaS2->show();

        ui->labelSi2->setPixmap(off);
//        ui->labelSi2->setMask(off.mask());
        ui->labelSi2->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_menos_clicked()
{
    if (on){
        if (Tecla_Presionada(49) > 20){
            Tecla_Presionada(50);
        }
        ui->volLabel->setText(QString::number(Tecla_Presionada(49)));
    }
}


void MainWindow::on_pushButton_mas_clicked()
{
    if (on){
        if (Tecla_Presionada(49) < 100){
            Tecla_Presionada(51);
        }
        ui->volLabel->setText(QString::number(Tecla_Presionada(49)));
    }
}


void MainWindow::on_onoffButton_toggled(bool checked)
{
    this->on = checked;
}

void MainWindow::reproducir(int freq, int id)
{

    if (this->on) {
        switch (id) {
        case 1: {
        QPixmap onLed1(":/LED/OnDo.png");
        ui->labelDo1->setPixmap(onLed1);
        } break;

        case 2: {
        QPixmap onLed2(":/LED/OnDoS.png");
        ui->labelDoS1->setPixmap(onLed2);
        } break;

        case 3: {
        QPixmap onLed3(":/LED/OnRe.png");
        ui->labelRe1->setPixmap(onLed3);
        } break;

        case 4: {
        QPixmap onLed4(":/LED/OnReS.png");
        ui->labelReS1->setPixmap(onLed4);
        } break;

        case 5: {
        QPixmap onLed5(":/LED/OnMi.png");
        ui->labelMi1->setPixmap(onLed5);
        } break;

        case 6: {
        QPixmap onLed6(":/LED/OnFa.png");
        ui->labelFa1->setPixmap(onLed6);
        } break;

        case 7: {
        QPixmap onLed7(":/LED/OnFaS.png");
        ui->labelFaS1->setPixmap(onLed7);
        } break;

        case 8: {
        QPixmap onLed8(":/LED/OnSol.png");
        ui->labelSol1->setPixmap(onLed8);
        } break;

        case 9: {
        QPixmap onLed9(":/LED/OnSolS.png");
        ui->labelSolS1->setPixmap(onLed9);
        } break;

        case 10: {
        QPixmap onLed10(":/LED/OnLa.png");
        ui->labelLa1->setPixmap(onLed10);
        } break;

        case 11: {
        QPixmap onLed11(":/LED/OnLaS.png");
        ui->labelLaS1->setPixmap(onLed11);
        } break;

        case 12: {
        QPixmap onLed12(":/LED/OnSi.png");
        ui->labelSi1->setPixmap(onLed12);
        } break;

        case 13: {
        QPixmap onLed13(":/LED/OnDo.png");
        ui->labelDo2->setPixmap(onLed13);
        } break;

        case 14: {
        QPixmap onLed14(":/LED/OnDoS.png");
        ui->labelDoS2->setPixmap(onLed14);
        } break;

        case 15: {
        QPixmap onLed15(":/LED/OnRe.png");
        ui->labelRe2->setPixmap(onLed15);
        } break;

        case 16: {
        QPixmap onLed16(":/LED/OnReS.png");
        ui->labelReS2->setPixmap(onLed16);
        } break;

        case 17: {
        QPixmap onLed17(":/LED/OnMi.png");
        ui->labelMi2->setPixmap(onLed17);
        } break;

        case 18: {
        QPixmap onLed18(":/LED/OnFa.png");
        ui->labelFa2->setPixmap(onLed18);
        } break;

        case 19: {
        QPixmap onLed19(":/LED/OnFaS.png");
        ui->labelFaS2->setPixmap(onLed19);
        } break;

        case 20: {
        QPixmap onLed20(":/LED/OnSol.png");
        ui->labelSol2->setPixmap(onLed20);
        } break;

        case 21: {
        QPixmap onLed21(":/LED/OnSolS.png");
        ui->labelSolS2->setPixmap(onLed21);
        } break;

        case 22: {
        QPixmap onLed22(":/LED/OnLa.png");
        ui->labelLa2->setPixmap(onLed22);
        } break;

        case 23: {
        QPixmap onLed23(":/LED/OnLaS.png");
        ui->labelLaS2->setPixmap(onLed23);
        } break;

        case 24: {
        QPixmap onLed24(":/LED/OnSi.png");
        ui->labelSi2->setPixmap(onLed24);
        } break;
        }

    }
    QString str = "qrc:/SFX/" + QString::number(freq) + ".wav";
    if (this->on){
        this->player->setVolume(Tecla_Presionada(49));
        this->player->setMedia(QUrl(str));
        this->player->play();
    }



}

void MainWindow::on_Id_Do_1_pressed()
{
    int res = Tecla_Presionada(0);
    this->reproducir(res,1);
}


void MainWindow::on_Id_DoS_1_pressed()
{
    int res = Tecla_Presionada(1);
    this->reproducir(res,2);
}

void MainWindow::on_Id_Re_1_pressed()
{
    int res = Tecla_Presionada(2);
    this->reproducir(res,3);
}

void MainWindow::on_Id_ReS_1_pressed()
{
    int res = Tecla_Presionada(3);
    this->reproducir(res,4);
}

void MainWindow::on_Id_Mi_1_pressed()
{
    int res = Tecla_Presionada(4);
    this->reproducir(res,5);
}

void MainWindow::on_Id_Fa_1_pressed()
{
    int res = Tecla_Presionada(5);
    this->reproducir(res,6);
}

void MainWindow::on_Id_FaS_1_pressed()
{
    int res = Tecla_Presionada(6);
    this->reproducir(res,7);
}

void MainWindow::on_Id_Sol_1_pressed()
{
    int res = Tecla_Presionada(7);
    this->reproducir(res,8);
}

void MainWindow::on_Id_SolS_1_pressed()
{
    int res = Tecla_Presionada(8);
    this->reproducir(res,9);
}

void MainWindow::on_Id_La_1_pressed()
{
    int res = Tecla_Presionada(9);
    this->reproducir(res,10);
}

void MainWindow::on_Id_LaS_1_pressed()
{
    int res = Tecla_Presionada(10);
    this->reproducir(res,11);
}

void MainWindow::on_Id_Si_1_pressed()
{
    int res = Tecla_Presionada(11);
    this->reproducir(res,12);
}

void MainWindow::on_Id_Do_2_pressed()
{
    int res = Tecla_Presionada(12);
    this->reproducir(res,13);
}


void MainWindow::on_Id_DoS_2_pressed()
{
    int res = Tecla_Presionada(13);
    this->reproducir(res,14);
}

void MainWindow::on_Id_Re_2_pressed()
{
    int res = Tecla_Presionada(14);
    this->reproducir(res,15);
}

void MainWindow::on_Id_ReS_2_pressed()
{
    int res = Tecla_Presionada(15);
    this->reproducir(res,16);
}

void MainWindow::on_Id_Mi_2_pressed()
{
    int res = Tecla_Presionada(16);
    this->reproducir(res,17);
}

void MainWindow::on_Id_Fa_2_pressed()
{
    int res = Tecla_Presionada(17);
    this->reproducir(res,18);
}

void MainWindow::on_Id_FaS_2_pressed()
{
    int res = Tecla_Presionada(18);
    this->reproducir(res,19);
}

void MainWindow::on_Id_Sol_2_pressed()
{
    int res = Tecla_Presionada(19);
    this->reproducir(res,20);
}

void MainWindow::on_Id_SolS_2_pressed()
{
    int res = Tecla_Presionada(20);
    this->reproducir(res,21);
}

void MainWindow::on_Id_La_2_pressed()
{
    int res = Tecla_Presionada(21);
    this->reproducir(res,22);
}

void MainWindow::on_Id_LaS_2_pressed()
{
    int res = Tecla_Presionada(22);
    this->reproducir(res,23);
}

void MainWindow::on_Id_Si_2_pressed()
{
    int res = Tecla_Presionada(23);
    this->reproducir(res,24);
}



void MainWindow::on_Id_Do_1_released()
{
        ui->labelDo1->setPixmap(this->off);
}

void MainWindow::on_Id_DoS_1_released()
{
    ui->labelDoS1->setPixmap(this->off);
}


void MainWindow::on_Id_Re_1_released()
{
    ui->labelRe1->setPixmap(this->off);
}


void MainWindow::on_Id_ReS_1_released()
{
    ui->labelReS1->setPixmap(this->off);
}


void MainWindow::on_Id_Mi_1_released()
{
    ui->labelMi1->setPixmap(this->off);
}


void MainWindow::on_Id_Fa_1_released()
{
    ui->labelFa1->setPixmap(this->off);
}


void MainWindow::on_Id_FaS_1_released()
{
    ui->labelFaS1->setPixmap(this->off);
}


void MainWindow::on_Id_Sol_1_released()
{
    ui->labelSol1->setPixmap(this->off);
}


void MainWindow::on_Id_SolS_1_released()
{
    ui->labelSolS1->setPixmap(this->off);
}


void MainWindow::on_Id_La_1_released()
{
    ui->labelLa1->setPixmap(this->off);
}


void MainWindow::on_Id_LaS_1_released()
{
    ui->labelLaS1->setPixmap(this->off);
}


void MainWindow::on_Id_Si_1_released()
{
    ui->labelSi1->setPixmap(this->off);
}


void MainWindow::on_Id_Do_2_released()
{
    ui->labelDo2->setPixmap(this->off);
}


void MainWindow::on_Id_DoS_2_released()
{
    ui->labelDoS2->setPixmap(this->off);
}


void MainWindow::on_Id_Re_2_released()
{
    ui->labelRe2->setPixmap(this->off);
}


void MainWindow::on_Id_ReS_2_released()
{
    ui->labelReS2->setPixmap(this->off);
}


void MainWindow::on_Id_Mi_2_released()
{
    ui->labelMi2->setPixmap(this->off);
}


void MainWindow::on_Id_Fa_2_released()
{
    ui->labelFa2->setPixmap(this->off);
}


void MainWindow::on_Id_FaS_2_released()
{
    ui->labelFaS2->setPixmap(this->off);
}


void MainWindow::on_Id_Sol_2_released()
{
    ui->labelSol2->setPixmap(this->off);
}


void MainWindow::on_Id_SolS_2_released()
{
    ui->labelSolS2->setPixmap(this->off);
}


void MainWindow::on_Id_La_2_released()
{
    ui->labelLa2->setPixmap(this->off);
}


void MainWindow::on_Id_LaS_2_released()
{
    ui->labelLaS2->setPixmap(this->off);
}


void MainWindow::on_Id_Si_2_released()
{
    ui->labelSi2->setPixmap(this->off);
}


void MainWindow::keyPressEvent(QKeyEvent * event)
{
    if (this->on && this->disp){
        this->disp = false;
        // Tecla Do 1
        if (event->key() == Qt::Key_Q) {
            this->on_Id_Do_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Do_1_released();
        }
        if (event->key() == Qt::Key_2) {
            this->on_Id_DoS_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_DoS_1_released();
        }
        if (event->key() == Qt::Key_W) {
            this->on_Id_Re_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Re_1_released();
        }
        if (event->key() == Qt::Key_3) {
            this->on_Id_ReS_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_ReS_1_released();
        }
        if (event->key() == Qt::Key_E) {
            this->on_Id_Mi_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Mi_1_released();
        }
        if (event->key() == Qt::Key_R) {
            this->on_Id_Fa_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Fa_1_released();
        }
        if (event->key() == Qt::Key_5) {
            this->on_Id_FaS_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_FaS_1_released();
        }
        if (event->key() == Qt::Key_T) {
            this->on_Id_Sol_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Sol_1_released();
        }
        if (event->key() == Qt::Key_6) {
            this->on_Id_SolS_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_SolS_1_released();
        }
        if (event->key() == Qt::Key_Y) {
            this->on_Id_La_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_La_1_released();
        }
        if (event->key() == Qt::Key_7) {
            this->on_Id_LaS_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_LaS_1_released();
        }
        if (event->key() == Qt::Key_U) {
            this->on_Id_Si_1_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Si_1_released();
        }
        if (event->key() == Qt::Key_Z) {
            this->on_Id_Do_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Do_2_released();
        }
        if (event->key() == Qt::Key_S) {
            this->on_Id_DoS_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_DoS_2_released();
        }
        if (event->key() == Qt::Key_X) {
            this->on_Id_Re_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Re_2_released();
        }
        if (event->key() == Qt::Key_D) {
            this->on_Id_ReS_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_ReS_2_released();
        }
        if (event->key() == Qt::Key_C) {
            this->on_Id_Mi_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Mi_2_released();
        }
        if (event->key() == Qt::Key_V) {
            this->on_Id_Fa_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Fa_2_released();
        }
        if (event->key() == Qt::Key_G) {
            this->on_Id_FaS_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_FaS_2_released();
        }
        if (event->key() == Qt::Key_B) {
            this->on_Id_Sol_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Sol_2_released();
        }
        if (event->key() == Qt::Key_H) {
            this->on_Id_SolS_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_SolS_2_released();
        }
        if (event->key() == Qt::Key_N) {
            this->on_Id_La_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_La_2_released();
        }
        if (event->key() == Qt::Key_J) {
            this->on_Id_LaS_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_LaS_2_released();
        }
        if (event->key() == Qt::Key_M) {
            this->on_Id_Si_2_pressed();
            QTime dieTime= QTime::currentTime().addMSecs(75);
            while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
            this->on_Id_Si_2_released();
        }

        this->disp = true;
    }
}
