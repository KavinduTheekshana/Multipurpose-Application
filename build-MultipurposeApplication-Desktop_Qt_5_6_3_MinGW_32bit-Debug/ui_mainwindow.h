/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnCalculator;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *DigitalClock;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(537, 437);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/software_3k5_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnCalculator = new QPushButton(centralWidget);
        btnCalculator->setObjectName(QStringLiteral("btnCalculator"));
        btnCalculator->setGeometry(QRect(10, 170, 251, 121));
        btnCalculator->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  border-radius: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 170, 251, 121));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: #5cb85c;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  border-radius: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #428c42, stop: 1 #12e312);\n"
"}\n"
"\n"
""));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 300, 251, 121));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: #d9534f;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  border-radius: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #bd1f1a, stop: 1 #f50800);\n"
"}\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 300, 251, 121));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"  background-color: #337ab7;\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"  border-radius: 30px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #29689e, stop: 1 #0084f5);\n"
"}\n"
"\n"
""));
        DigitalClock = new QLabel(centralWidget);
        DigitalClock->setObjectName(QStringLiteral("DigitalClock"));
        DigitalClock->setGeometry(QRect(10, 100, 511, 51));
        QFont font;
        font.setFamily(QStringLiteral("Nexa Bold"));
        font.setPointSize(36);
        DigitalClock->setFont(font);
        DigitalClock->setStyleSheet(QStringLiteral("color : #181f1b;"));
        DigitalClock->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 19, 511, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Montserrat ExtraBold"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Multi Purpose Application", Q_NULLPTR));
        btnCalculator->setText(QApplication::translate("MainWindow", "Calculator", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Encrypted Text Editor", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Web Browser", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Audio Player", Q_NULLPTR));
        DigitalClock->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Multi Purpose Application", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
