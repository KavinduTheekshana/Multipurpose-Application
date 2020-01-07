#-------------------------------------------------
#
# Project created by QtCreator 2020-01-04T12:06:32
#
#-------------------------------------------------

QT       += core gui printsupport multimedia multimediawidgets
CONFIG   += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MultipurposeApplication
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calculator.cpp \
    encryptedtesteditor.cpp \
    simplecrypt.cpp \
    webbrowser.cpp \
    musicplayer.cpp \
    playlist.cpp \
    track.cpp



HEADERS  += mainwindow.h \
    calculator.h \
    encryptedtesteditor.h \
    simplecrypt.h \
    webbrowser.h \
    musicplayer.h \
    playlist.h \
    track.h \
    utils.h

FORMS    += mainwindow.ui \
    calculator.ui \
    encryptedtesteditor.ui \
    webbrowser.ui \
    musicplayer.ui

RESOURCES += \
    resource.qrc

