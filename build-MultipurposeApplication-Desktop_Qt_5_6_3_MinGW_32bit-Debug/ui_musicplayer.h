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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MusicPlayer
{
public:
    QWidget *centralWidget;
    QSlider *seekBar;
    QPushButton *back;
    QPushButton *play;
    QPushButton *forward;
    QPushButton *add;
    QPushButton *remove;
    QLabel *currentSong;
    QListWidget *listWidget;
    QPushButton *repeat;
    QPushButton *shuffle;
    QSlider *volumeBar;
    QPushButton *mute;
    QLineEdit *searchBar;

    void setupUi(QMainWindow *MusicPlayer)
    {
        if (MusicPlayer->objectName().isEmpty())
            MusicPlayer->setObjectName(QStringLiteral("MusicPlayer"));
        MusicPlayer->resize(956, 554);
        MusicPlayer->setStyleSheet(QStringLiteral("background-color:#2a3e52;"));
        centralWidget = new QWidget(MusicPlayer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        seekBar = new QSlider(centralWidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        seekBar->setGeometry(QRect(8, 475, 921, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(398, 495, 41, 31));
        back->setFocusPolicy(Qt::NoFocus);
        play = new QPushButton(centralWidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(448, 495, 41, 31));
        play->setFocusPolicy(Qt::NoFocus);
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(497, 495, 41, 31));
        forward->setFocusPolicy(Qt::NoFocus);
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(840, 500, 41, 21));
        add->setFocusPolicy(Qt::NoFocus);
        remove = new QPushButton(centralWidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(770, 500, 41, 21));
        remove->setFocusPolicy(Qt::NoFocus);
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QStringLiteral("currentSong"));
        currentSong->setGeometry(QRect(148, 460, 641, 20));
        currentSong->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(8, 50, 921, 401));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setStyleSheet(QLatin1String("color:white;\n"
"\n"
"QListWidget::item:selected\n"
"{\n"
"    background: #ffd000;\n"
"}\n"
"\n"
"QListWidget::item:hover\n"
"{\n"
"    background: #ffd000;\n"
"}"));
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setViewMode(QListView::ListMode);
        repeat = new QPushButton(centralWidget);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setGeometry(QRect(570, 500, 41, 21));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QStringLiteral("shuffle"));
        shuffle->setGeometry(QRect(325, 500, 41, 21));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setGeometry(QRect(110, 503, 181, 16));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(50, 500, 41, 21));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(8, 10, 921, 28));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setStyleSheet(QStringLiteral("color:white;"));
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
        MusicPlayer->setCentralWidget(centralWidget);

        retranslateUi(MusicPlayer);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MusicPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *MusicPlayer)
    {
        MusicPlayer->setWindowTitle(QApplication::translate("MusicPlayer", "Music Player", Q_NULLPTR));
        back->setText(QApplication::translate("MusicPlayer", "<", Q_NULLPTR));
        play->setText(QApplication::translate("MusicPlayer", "O", Q_NULLPTR));
        forward->setText(QApplication::translate("MusicPlayer", ">", Q_NULLPTR));
        add->setText(QApplication::translate("MusicPlayer", "+", Q_NULLPTR));
        remove->setText(QApplication::translate("MusicPlayer", "-", Q_NULLPTR));
        currentSong->setText(QApplication::translate("MusicPlayer", "Song", Q_NULLPTR));
        repeat->setText(QApplication::translate("MusicPlayer", "r", Q_NULLPTR));
        shuffle->setText(QApplication::translate("MusicPlayer", "s", Q_NULLPTR));
        mute->setText(QApplication::translate("MusicPlayer", "m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MusicPlayer: public Ui_MusicPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
