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
    settingswindow.cpp \
    bazadanych.cpp \
    skanowanie.cpp \
    zakupy.cpp \
    magazyn.cpp \
    kody.cpp \
    produkt_info.cpp \
    produkt_ilosc.cpp \
    shopped_main.cpp

HEADERS  += \
    settingswindow.h \
    bazadanych.h \
    skanowanie.h \
    zakupy.h \
    magazyn.h \
    kody.h \
    produkt_info.h \
    produkt_ilosc.h \
    shopped_main.h

FORMS    += \
    settingswindow.ui \
    skanowanie.ui \
    zakupy.ui \
    magazyn.ui \
    kody.ui \
    produkt_info.ui \
    produkt_ilosc.ui \
    shopped_main.ui

RESOURCES += \
    resource.qrc


