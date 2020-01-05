/********************************************************************************
** Form generated from reading UI file 'webbrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBBROWSER_H
#define UI_WEBBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebBrowser
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WebBrowser)
    {
        if (WebBrowser->objectName().isEmpty())
            WebBrowser->setObjectName(QStringLiteral("WebBrowser"));
        WebBrowser->resize(800, 600);
        menubar = new QMenuBar(WebBrowser);
        menubar->setObjectName(QStringLiteral("menubar"));
        WebBrowser->setMenuBar(menubar);
        centralwidget = new QWidget(WebBrowser);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        WebBrowser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(WebBrowser);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WebBrowser->setStatusBar(statusbar);

        retranslateUi(WebBrowser);

        QMetaObject::connectSlotsByName(WebBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *WebBrowser)
    {
        WebBrowser->setWindowTitle(QApplication::translate("WebBrowser", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WebBrowser: public Ui_WebBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBBROWSER_H
