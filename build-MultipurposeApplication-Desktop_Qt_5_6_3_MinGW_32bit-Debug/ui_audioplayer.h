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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioPlayer
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

    void setupUi(QMainWindow *AudioPlayer)
    {
        if (AudioPlayer->objectName().isEmpty())
            AudioPlayer->setObjectName(QStringLiteral("AudioPlayer"));
        AudioPlayer->resize(956, 594);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/img/Player/music_0wh_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AudioPlayer->setWindowIcon(icon);
        AudioPlayer->setStyleSheet(QStringLiteral("background-color:#212121;"));
        centralWidget = new QWidget(AudioPlayer);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        seekBar = new QSlider(centralWidget);
        seekBar->setObjectName(QStringLiteral("seekBar"));
        seekBar->setGeometry(QRect(0, 160, 951, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #bbb;\n"
"background: white;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"background: qlineargradient(x1: 0, y1: 0,    x2: 0, y2: 1,\n"
"stop: 0 #66e, stop: 1 #bbf);\n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,\n"
"stop: 0 #bbf, stop: 1 #55f);\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"background: #fff;\n"
"border: 1px solid #777;\n"
"height: 10px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"stop:0 #eee, stop:1 #ccc);\n"
"border: 1px solid #777;\n"
"width: 13px;\n"
"margin-top: -2px;\n"
"margin-bottom: -2px;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"stop:0 #fff, stop:1 #ddd);\n"
"border: 1px solid #444;\n"
"border-radius: 4px;\n"
"}\n"
"\n"
"QSlider"
                        "::sub-page:horizontal:disabled {\n"
"background: #bbb;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"background: #eee;\n"
"border-color: #999;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:disabled {\n"
"background: #eee;\n"
"border: 1px solid #aaa;\n"
"border-radius: 4px;\n"
"}"));
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(470, 70, 70, 70));
        back->setFocusPolicy(Qt::NoFocus);
        back->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/img/Player/left-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon1);
        back->setIconSize(QSize(40, 40));
        play = new QPushButton(centralWidget);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(550, 70, 70, 70));
        play->setFocusPolicy(Qt::NoFocus);
        play->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/img/Player/play-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        play->setIcon(icon2);
        play->setIconSize(QSize(50, 50));
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QStringLiteral("forward"));
        forward->setGeometry(QRect(630, 70, 70, 70));
        forward->setFocusPolicy(Qt::NoFocus);
        forward->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/img/Player/right-arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        forward->setIcon(icon3);
        forward->setIconSize(QSize(50, 50));
        add = new QPushButton(centralWidget);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(320, 70, 70, 70));
        add->setFocusPolicy(Qt::NoFocus);
        add->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/img/Player/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        add->setIcon(icon4);
        add->setIconSize(QSize(50, 50));
        remove = new QPushButton(centralWidget);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(250, 70, 70, 70));
        remove->setFocusPolicy(Qt::NoFocus);
        remove->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/img/Player/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove->setIcon(icon5);
        remove->setIconSize(QSize(50, 50));
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QStringLiteral("currentSong"));
        currentSong->setGeometry(QRect(0, 20, 961, 41));
        QFont font;
        font.setPointSize(10);
        currentSong->setFont(font);
        currentSong->setStyleSheet(QLatin1String("background-color:#424242;\n"
"color:white;"));
        currentSong->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 240, 961, 341));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setStyleSheet(QLatin1String("QWidget {\n"
"  background-color: #19232D;\n"
"  border: 0px solid #32414B;\n"
"  padding: 0px;\n"
"  color: #F0F0F0;\n"
"  selection-background-color: #1464A0;\n"
"  selection-color: #F0F0F0;\n"
"}\n"
"\n"
"QWidget:disabled {\n"
"  background-color: #19232D;\n"
"  color: #787878;\n"
"  selection-background-color: #14506E;\n"
"  selection-color: #787878;\n"
"}\n"
"\n"
"QWidget::item:selected {\n"
"  background-color: #1464A0;\n"
"}\n"
"\n"
"QWidget::item:hover {\n"
"  background-color: #148CD2;\n"
"  color: #32414B;\n"
"}"));
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setSpacing(5);
        listWidget->setViewMode(QListView::ListMode);
        repeat = new QPushButton(centralWidget);
        repeat->setObjectName(QStringLiteral("repeat"));
        repeat->setGeometry(QRect(870, 70, 70, 70));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/img/Player/repeat.png"), QSize(), QIcon::Normal, QIcon::Off);
        repeat->setIcon(icon6);
        repeat->setIconSize(QSize(50, 50));
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QStringLiteral("shuffle"));
        shuffle->setGeometry(QRect(800, 70, 70, 70));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/img/Player/shuffle-arrows.png"), QSize(), QIcon::Normal, QIcon::Off);
        shuffle->setIcon(icon7);
        shuffle->setIconSize(QSize(50, 50));
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QStringLiteral("volumeBar"));
        volumeBar->setGeometry(QRect(90, 100, 151, 20));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setStyleSheet(QLatin1String("QSlider:disabled {\n"
"  background: #19232D;\n"
"}\n"
"\n"
"QSlider:focus {\n"
"  border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"  background: #32414B;\n"
"  border: 1px solid #32414B;\n"
"  height: 4px;\n"
"  margin: 0px;\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"  background: #1464A0;\n"
"  border: 1px solid #32414B;\n"
"  height: 4px;\n"
"  margin: 0px;\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"  background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"  background: #1976d2;\n"
"  border: 1px solid #1976d2;\n"
"  width: 8px;\n"
"  height: 8px;\n"
"  margin: -8px 0px;\n"
"  border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"  background: #1976d2;\n"
"  border: 1px solid #1976d2;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(10, 70, 70, 70));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"  background-color: #212121;\n"
"  border-radius: 4px;\n"
"  padding: 3px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton:checked:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}\n"
"\n"
"QPushButton:checked:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"  background-color: #19232D;\n"
"  border: 1px solid #19232D;\n"
"}\n"
"\n"
"QPushButton:pressed:hover {\n"
"  border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  border: 1px solid #ffd000;\n"
"  color: #ffd000;\n"
"}\n"
"\n"
""));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/img/Player/mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        mute->setIcon(icon8);
        mute->setIconSize(QSize(50, 50));
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QStringLiteral("searchBar"));
        searchBar->setGeometry(QRect(10, 200, 921, 28));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setStyleSheet(QLatin1String("QLineEdit {\n"
"  background-color: #19232D;\n"
"  padding-top: 2px;\n"
"  /* This QLineEdit fix  103, 111 */\n"
"  padding-bottom: 2px;\n"
"  /* This QLineEdit fix  103, 111 */\n"
"  padding-left: 4px;\n"
"  padding-right: 4px;\n"
"  border-style: solid;\n"
"  border: 1px solid #32414B;\n"
"  border-radius: 4px;\n"
"  color: white;\n"
"}\n"
"\n"
"QLineEdit:disabled {\n"
"  background-color: #19232D;\n"
"  color: #787878;\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"  border: 1px solid #148CD2;\n"
"  color: #F0F0F0;\n"
"}\n"
"\n"
"QLineEdit:selected {\n"
"  background: #1464A0;\n"
"  color: #32414B;\n"
"}"));
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
        AudioPlayer->setCentralWidget(centralWidget);

        retranslateUi(AudioPlayer);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(AudioPlayer);
    } // setupUi

    void retranslateUi(QMainWindow *AudioPlayer)
    {
        AudioPlayer->setWindowTitle(QApplication::translate("AudioPlayer", "Music Player", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        back->setToolTip(QApplication::translate("AudioPlayer", "backword", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        back->setText(QString());
#ifndef QT_NO_TOOLTIP
        play->setToolTip(QApplication::translate("AudioPlayer", "Play / Pause", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        play->setText(QString());
#ifndef QT_NO_TOOLTIP
        forward->setToolTip(QApplication::translate("AudioPlayer", "Forword", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        forward->setText(QString());
#ifndef QT_NO_TOOLTIP
        add->setToolTip(QApplication::translate("AudioPlayer", "Open", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        add->setText(QString());
#ifndef QT_NO_TOOLTIP
        remove->setToolTip(QApplication::translate("AudioPlayer", "Remove", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        remove->setText(QString());
        currentSong->setText(QApplication::translate("AudioPlayer", "Song", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        repeat->setToolTip(QApplication::translate("AudioPlayer", "Repeat", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        repeat->setText(QString());
#ifndef QT_NO_TOOLTIP
        shuffle->setToolTip(QApplication::translate("AudioPlayer", "Shuffle", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        shuffle->setText(QString());
#ifndef QT_NO_TOOLTIP
        volumeBar->setToolTip(QApplication::translate("AudioPlayer", "Volume", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        mute->setToolTip(QApplication::translate("AudioPlayer", "Mute", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        mute->setText(QString());
        searchBar->setPlaceholderText(QApplication::translate("AudioPlayer", "Search Songs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AudioPlayer: public Ui_AudioPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOPLAYER_H
