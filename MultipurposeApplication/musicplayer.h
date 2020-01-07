#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "vector"
#include "QKeyEvent"
#include "QLineEdit"

using namespace std;

namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QMainWindow
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = 0);
    ~MusicPlayer();

private slots:
    void on_btnOpen_clicked();

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_add_clicked();

    void on_remove_clicked();

    void on_save_clicked();

    void on_repeat_clicked();

    void on_forward_clicked();

    void on_play_clicked();

    void on_back_clicked();

    void on_shuffle_clicked();

    void on_mute_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_searchBar_textChanged(const QString &arg1);


private:
    void updateList();

    void loadTrack();

    void next();

    void update();

    void back();

    void shufflePlaylist();

    int getIndex();

    bool repeat = false;

    bool muted = false;

    bool shuffle = false;

    int lCounter = 0;

    Playlist playlist;

    Ui::MusicPlayer *ui;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

    vector<unsigned short int> shuffledPlaylist;


protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // MUSICPLAYER_H
