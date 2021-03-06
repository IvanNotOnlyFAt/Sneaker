#-------------------------------------------------
#
# Project created by QtCreator 2020-04-27T16:56:21
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SneakerTraClient
TEMPLATE = app
RC_ICONS = Sneaker.ico
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/include
include(subfans/subfans.pri)
include(subtrader/subtrader.pri)
include(sublogform/sublogform.pri)
include(subinfos/subinfos.pri)
include(network/network.pri)
include(subfansitem/subfansitem.pri)
include(subtraderitem/subtraderitem.pri)


TRANSLATIONS += en2ch.ts
SOURCES += \
        main.cpp \
        sneakertraclient.cpp \
        globalvars.cpp


HEADERS += \
        sneakertraclient.h \
        globalvars.h



FORMS += \
        sneakertraclient.ui \



RESOURCES += \
    icon.qrc \
    language.qrc
