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
    playlist.cpp \
    track.cpp \
    convertor.cpp \
    audioplayer.cpp



HEADERS  += mainwindow.h \
    calculator.h \
    encryptedtesteditor.h \
    simplecrypt.h \
    playlist.h \
    track.h \
    utils.h \
    convertor.h \
    audioplayer.h

FORMS    += mainwindow.ui \
    calculator.ui \
    encryptedtesteditor.ui \
    convertor.ui \
    audioplayer.ui

RESOURCES += \
    resource.qrc

