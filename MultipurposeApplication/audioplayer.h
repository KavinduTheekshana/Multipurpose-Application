#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"

namespace Ui {
class AudioPlayer;
}

class AudioPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit AudioPlayer(QWidget *parent = 0);
    ~AudioPlayer();

private slots:
    void on_add_clicked();

    void on_remove_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_play_clicked();

    void on_forward_clicked();

    void on_back_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_mute_clicked();

    void on_repeat_clicked();

    void on_shuffle_clicked();

//    void keyPressEvent(QKeyEvent *event);

private:
    Ui::AudioPlayer *ui;

    void update();

    void updateList();

    void loadTrack();

    void next();

    void back();

    void shufflePlaylist();

    int getIndex();

    bool repeat = false;

    bool muted = false;

    bool shuffle = false;

    int lCounter = 0;

    Playlist playlist;

//    Ui::AudioPlayer *ui;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

    vector<unsigned short int> shuffledPlaylist;


protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // AUDIOPLAYER_H
