#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();

private:
    Ui::Calculator *ui;


private slots:
    void digit_passed();
    void on_pushButton_decimal_released();

    void unary_operation_passed();
    void on_pushButton_clear_released();
    void on_pushButton_equal_released();

    void binary_oparation_passed();
};




#endif // CALCULATOR_H
