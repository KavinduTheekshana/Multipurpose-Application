#include "audioplayer.h"
#include "ui_audioplayer.h"
#include "QFileDialog"
#include "QDesktopServices"
#include "algorithm"
#include "iostream"
#include "string"

AudioPlayer::AudioPlayer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AudioPlayer)
{
    ui->setupUi(this);

    this->setFixedSize(this->geometry().width(),this->geometry().height());

    updateList();

    connect(updater, SIGNAL(timeout()), this, SLOT(update()));

    player->setVolume(100);

    ui->listWidget->setCurrentRow(0);

    if(ui->listWidget->count() != 0){
        loadTrack();
        player->pause();
        updater->start();

    }
}

AudioPlayer::~AudioPlayer()
{
    delete ui;
}

void AudioPlayer::on_add_clicked()
{
    bool startUpdater = false;if(ui->listWidget->count() == 0) startUpdater = true;
        QStringList files = QFileDialog::getOpenFileNames(this,"Open a File","","Audio File (*.mp3)");
        if(!files.empty())
        {
            playlist.add(files);
            updateList();
            if(shuffle) shufflePlaylist();
            if(startUpdater) updater->start();
        }
}

void AudioPlayer::on_remove_clicked()
{
    int index = getIndex();
    if(index != -1)
    {
       playlist.remove(index);
       updateList();
       ui->listWidget->setCurrentRow(index);
       if(shuffle) shufflePlaylist();
    }
}

void AudioPlayer::on_listWidget_doubleClicked(const QModelIndex &index)
{
    lCounter = getIndex();

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();
}

void AudioPlayer::on_play_clicked()
{
    if(ui->listWidget->count() != 0)
    if(player->state() == QMediaPlayer::PlayingState)
    {
        player->pause();
    }
   else
   {
        player->play();
        updater->start();
   }
}

void AudioPlayer::on_forward_clicked()
{
    if(ui->listWidget->count() != 0)
        if(repeat)
        {
            repeat = !repeat;next();repeat = !repeat;
        }
        else
        {
            next();
        }
}

void AudioPlayer::on_back_clicked()
{
    if(ui->listWidget->count() != 0)
        if(player->position() > 3000)
        {
           player->setPosition(0);
        }
        else
        {
            back();
        }
}

void AudioPlayer::on_volumeBar_valueChanged(int value)
{
    player->setVolume(value);
    (value != 0)?ui->mute->setChecked(false):ui->mute->setChecked(true);
}

void AudioPlayer::on_seekBar_sliderMoved(int position)
{
    player->setPosition(player->duration() / 1000 * position);
}

void AudioPlayer::on_mute_clicked()
{
    muted = !muted;
    (muted)?player->setVolume(0):player->setVolume(ui->volumeBar->value());
}

void AudioPlayer::on_repeat_clicked()
{
    repeat = !repeat;
}

void AudioPlayer::on_shuffle_clicked()
{
    shuffle = !shuffle;
    if(shuffle)
        shufflePlaylist();
}

void AudioPlayer::update()
{
    if(!ui->seekBar->isSliderDown())
        ui->seekBar->setValue((double)player->position()/player->duration() * 1000);

    if(player->state() == QMediaPlayer::StoppedState)
    {
        next();
    }
}

void AudioPlayer::updateList()
{
    ui->listWidget->clear();
    ui->listWidget->addItems(playlist.getTracksNameList());
}

void AudioPlayer::loadTrack()
{
     QString qstr = QString::fromStdString(playlist.tracks[getIndex()].getLocation());
     player->setMedia(QUrl::fromLocalFile(qstr));
     qstr = QString::fromStdString(playlist.tracks[getIndex()].getName());
     ui->currentSong->setText(qstr);
}

void AudioPlayer::shufflePlaylist()
{
    shuffledPlaylist.resize(0);

    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        shuffledPlaylist.push_back(i);
    }

    random_shuffle(shuffledPlaylist.begin(), shuffledPlaylist.end());
}


int AudioPlayer::getIndex()
{
    return ui->listWidget->currentIndex().row();
}

void AudioPlayer::next()
{
    lCounter++;

    if(repeat)
    {
        lCounter--;
    }

    if(lCounter >= ui->listWidget->count())
        lCounter = 0;

    (!shuffle or repeat) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();

}


void AudioPlayer::back()
{
     lCounter--;

     if(lCounter < 0)
        lCounter = ui->listWidget->count() - 1;


     (!shuffle) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

     ui->play->setChecked(false);
     ui->searchBar->clear();

     loadTrack();
     player->play();
}


void AudioPlayer::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Return :
    {
        lCounter = getIndex();
        if(lCounter != -1)
        {
            ui->play->setChecked(false);
            ui->searchBar->clear();

           loadTrack();
           player->play();
        }
        break;
    }
    case Qt::Key_Up :
    {
        int ind = getIndex() - 1;if(ind < 0)ind = ui->listWidget->count() - 1;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    case Qt::Key_Down :
    {
        int ind = getIndex() + 1;if(ind >= ui->listWidget->count())ind = 0;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    default :
    {
        ui->searchBar->setFocus();

        break;
    }
    }
}

