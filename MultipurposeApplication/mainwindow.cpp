#include "mainwindow.h"
#include "calculator.h"
#include "encryptedtesteditor.h"
#include "convertor.h"
#include "audioplayer.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(537,437);
    QTimer *timer = new QTimer(this);
    connect(timer , SIGNAL(timeout()),this,SLOT(showTime()));
    timer->start();
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->DigitalClock->setText(time_text);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCalculator_clicked()
{
 Calculator *calculator = new Calculator();
 calculator->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    EncryptedTestEditor *encryptedTestEditor = new EncryptedTestEditor();
    encryptedTestEditor->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    Convertor *convertor = new Convertor();
    convertor->show();
}

void MainWindow::on_pushButton_4_clicked()
{
    AudioPlayer *musicPlayer = new AudioPlayer();
    musicPlayer->show();
}
