#include "convertor.h"
#include "ui_convertor.h"
#include "math.h"
#include "iostream"
Convertor::Convertor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Convertor)
{
    ui->setupUi(this);
    this->setFixedSize(468,255);


}

Convertor::~Convertor()
{
    delete ui;
}




void Convertor::on_pushButton_clicked()
{
    int x = ui->B2DBinary->text().toInt();
    int decimalNumber = 0, i = 0, remainder;
    while (x!=0)
        {
            remainder = x%10;
            x /= 10;
            decimalNumber += remainder*pow(2,i);
            ++i;
        }
    QString s = QString::number(decimalNumber);
    ui->B2DDecimal->setText(s);
}



