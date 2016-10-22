#-------------------------------------------------
#
# Project created by QtCreator 2016-10-15T14:58:42
#
#-------------------------------------------------

QT       += core gui network
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShoppedOUT
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    sklepwindow.cpp \
    magazynwindow.cpp \
    kodywindow.cpp \
    settingswindow.cpp \
    bazadanych.cpp

HEADERS  += mainwindow.h \
    sklepwindow.h \
    magazynwindow.h \
    kodywindow.h \
    settingswindow.h \
    bazadanych.h

FORMS    += mainwindow.ui \
    sklepwindow.ui \
    magazynwindow.ui \
    kodywindow.ui \
    settingswindow.ui

RESOURCES += \
    resource.qrc
