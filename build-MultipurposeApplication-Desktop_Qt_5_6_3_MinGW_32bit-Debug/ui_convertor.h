/********************************************************************************
** Form generated from reading UI file 'convertor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTOR_H
#define UI_CONVERTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Convertor
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *B2DBinary;
    QLineEdit *B2DDecimal;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QMainWindow *Convertor)
    {
        if (Convertor->objectName().isEmpty())
            Convertor->setObjectName(QStringLiteral("Convertor"));
        Convertor->resize(468, 255);
        QFont font;
        font.setPointSize(8);
        Convertor->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/binary_code_dzZ_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Convertor->setWindowIcon(icon);
        centralwidget = new QWidget(Convertor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 431, 46));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat"));
        font1.setPointSize(19);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 170, 93, 28));
        B2DBinary = new QLineEdit(centralwidget);
        B2DBinary->setObjectName(QStringLiteral("B2DBinary"));
        B2DBinary->setGeometry(QRect(150, 80, 222, 33));
        QFont font2;
        font2.setFamily(QStringLiteral("Montserrat"));
        font2.setPointSize(15);
        B2DBinary->setFont(font2);
        B2DDecimal = new QLineEdit(centralwidget);
        B2DDecimal->setObjectName(QStringLiteral("B2DDecimal"));
        B2DDecimal->setEnabled(false);
        B2DDecimal->setGeometry(QRect(150, 130, 222, 33));
        B2DDecimal->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 140, 110, 16));
        QFont font3;
        font3.setFamily(QStringLiteral("Montserrat"));
        font3.setPointSize(9);
        label_3->setFont(font3);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 90, 99, 16));
        label_2->setFont(font3);
        Convertor->setCentralWidget(centralwidget);

        retranslateUi(Convertor);

        QMetaObject::connectSlotsByName(Convertor);
    } // setupUi

    void retranslateUi(QMainWindow *Convertor)
    {
        Convertor->setWindowTitle(QApplication::translate("Convertor", "Convertor", Q_NULLPTR));
        label->setText(QApplication::translate("Convertor", "Binary to Decimal Convertor", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Convertor", "Convert", Q_NULLPTR));
        B2DBinary->setInputMask(QApplication::translate("Convertor", "BBBBBBBB", Q_NULLPTR));
        B2DBinary->setText(QString());
        B2DBinary->setPlaceholderText(QString());
        B2DDecimal->setPlaceholderText(QString());
        label_3->setText(QApplication::translate("Convertor", "Decimal Number :", Q_NULLPTR));
        label_2->setText(QApplication::translate("Convertor", "Binary Number :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Convertor: public Ui_Convertor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTOR_H
