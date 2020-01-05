#include "mainwindow.h"
#include "calculator.h"
#include "encryptedtesteditor.h"
#include "webbrowser.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(770,500);
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
    WebBrowser *webBrowser = new WebBrowser();
    webBrowser->show();
}
