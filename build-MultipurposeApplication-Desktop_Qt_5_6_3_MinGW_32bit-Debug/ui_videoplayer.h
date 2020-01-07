/********************************************************************************
** Form generated from reading UI file 'videoplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPLAYER_H
#define UI_VIDEOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoPlayer
{
public:
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionOpen;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *VideoPlayer)
    {
        if (VideoPlayer->objectName().isEmpty())
            VideoPlayer->setObjectName(QStringLiteral("VideoPlayer"));
        VideoPlayer->resize(800, 600);
        actionPlay = new QAction(VideoPlayer);
        actionPlay->setObjectName(QStringLiteral("actionPlay"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/Player/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlay->setIcon(icon);
        actionPause = new QAction(VideoPlayer);
        actionPause->setObjectName(QStringLiteral("actionPause"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/Player/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon1);
        actionStop = new QAction(VideoPlayer);
        actionStop->setObjectName(QStringLiteral("actionStop"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/Player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon2);
        actionOpen = new QAction(VideoPlayer);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/Player/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon3);
        centralwidget = new QWidget(VideoPlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        VideoPlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(VideoPlayer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        VideoPlayer->setMenuBar(menubar);
        toolBar = new QToolBar(VideoPlayer);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        VideoPlayer->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionPlay);
        toolBar->addSeparator();
        toolBar->addAction(actionPause);
        toolBar->addSeparator();
        toolBar->addAction(actionStop);
        toolBar->addSeparator();

        retranslateUi(VideoPlayer);

        QMetaObject::connectSlotsByName(VideoPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *VideoPlayer)
    {
        VideoPlayer->setWindowTitle(QApplication::translate("VideoPlayer", "MainWindow", Q_NULLPTR));
        actionPlay->setText(QApplication::translate("VideoPlayer", "Play", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("VideoPlayer", "Play", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionPause->setText(QApplication::translate("VideoPlayer", "Pause", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPause->setToolTip(QApplication::translate("VideoPlayer", "Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionStop->setText(QApplication::translate("VideoPlayer", "Stop", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionStop->setToolTip(QApplication::translate("VideoPlayer", "Stop", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("VideoPlayer", "Open", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("VideoPlayer", "Open", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBar->setWindowTitle(QApplication::translate("VideoPlayer", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VideoPlayer: public Ui_VideoPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPLAYER_H
