#-------------------------------------------------
#
# Project created by QtCreator 2020-01-04T12:06:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MultipurposeApplication
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    calculator.cpp \
    encryptedtesteditor.cpp


HEADERS  += mainwindow.h \
    calculator.h \
    encryptedtesteditor.h

FORMS    += mainwindow.ui \
    calculator.ui \
    encryptedtesteditor.ui

RESOURCES += \
    resource.qrc

