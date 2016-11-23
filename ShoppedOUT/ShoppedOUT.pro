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

QTPLUGIN+=qsqlmysql

SOURCES += main.cpp\
    settingswindow.cpp \
    bazadanych.cpp \
    zakupy.cpp \
    magazyn.cpp \
    kody.cpp \
    produkt_info.cpp \
    produkt_ilosc.cpp \
    shopped_main.cpp \
    wyswietl.cpp \
    shopped_podlicz.cpp \
    shopped_platnosc.cpp

HEADERS  += \
    settingswindow.h \
    bazadanych.h \
    zakupy.h \
    magazyn.h \
    kody.h \
    produkt_info.h \
    produkt_ilosc.h \
    shopped_main.h \
    wyswietl.h \
    shopped_podlicz.h \
    shopped_platnosc.h

FORMS    += \
    settingswindow.ui \
    zakupy.ui \
    magazyn.ui \
    kody.ui \
    produkt_info.ui \
    produkt_ilosc.ui \
    shopped_main.ui \
    shopped_podlicz.ui \
    shopped_platnosc.ui


RESOURCES += \
    resource.qrc


