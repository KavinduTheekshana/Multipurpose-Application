#ifndef CONVERTOR_H
#define CONVERTOR_H

#include <QMainWindow>

namespace Ui {
class Convertor;
}

class Convertor : public QMainWindow
{
    Q_OBJECT

public:
    explicit Convertor(QWidget *parent = 0);
    ~Convertor();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_B2DBinary_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Convertor *ui;
};

#endif // CONVERTOR_H
