/********************************************************************************
** Form generated from reading UI file 'musicplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QVBoxLayout *verticalLayout;
    QSlider *horizontalSlider;

    void setupUi(QMainWindow *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName(QStringLiteral("MusicPlayer"));
        MusicPlayer->resize(768, 147);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/Player/music_0wh_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MusicPlayer->setWindowIcon(icon);
        MusicPlayer->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MusicPlayer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Montserrat Medium"));
        font.setPointSize(10);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSlider_2 = new QSlider(centralwidget);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnOpen = new QPushButton(centralwidget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/Player/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpen->setIcon(icon1);

        horizontalLayout->addWidget(btnOpen);

        btnPlay = new QPushButton(centralwidget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/Player/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon2);

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(centralwidget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/Player/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon3);

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(centralwidget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/Player/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon4);

        horizontalLayout->addWidget(btnStop);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setValue(99);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        MusicPlayer->setCentralWidget(centralwidget);

        retranslateUi(MusicPlayer);

        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QApplication::translate("MusicPlayer", "Music Player", Q_NULLPTR));
        label->setText(QApplication::translate("MusicPlayer", "TextLabel", Q_NULLPTR));
        btnOpen->setText(QApplication::translate("MusicPlayer", "Open", Q_NULLPTR));
        btnPlay->setText(QApplication::translate("MusicPlayer", "Play", Q_NULLPTR));
        btnPause->setText(QApplication::translate("MusicPlayer", "Paush", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MusicPlayer", "Stop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
