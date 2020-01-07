/********************************************************************************
** Form generated from reading UI file 'audioplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOPLAYER_H
#define UI_AUDIOPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioPlayer
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnOpen;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;

    void setupUi(QMainWindow *AudioPlayer)
    {
        if (AudioPlayer->objectName().isEmpty())
            AudioPlayer->setObjectName(QStringLiteral("AudioPlayer"));
        AudioPlayer->resize(729, 478);
        AudioPlayer->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(AudioPlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnOpen = new QPushButton(centralwidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/Player/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpen->setIcon(icon);

        verticalLayout->addWidget(btnOpen);

        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/Player/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon1);

        verticalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/Player/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);

        verticalLayout->addWidget(btnPause);

        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/Player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon3);

        verticalLayout->addWidget(btnStop);


        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_2);

        AudioPlayer->setCentralWidget(centralwidget);

        retranslateUi(AudioPlayer);

        QMetaObject::connectSlotsByName(AudioPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *AudioPlayer)
    {
        AudioPlayer->setWindowTitle(QApplication::translate("AudioPlayer", "Audio", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("AudioPlayer", "Open", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("AudioPlayer", "Play", Q_NULLPTR));
        btnPause->setText(QApplication::translate("AudioPlayer", "Paush", Q_NULLPTR));
        btnStop->setText(QApplication::translate("AudioPlayer", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioPlayer: public Ui_AudioPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYER_H
