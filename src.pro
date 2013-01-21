#-------------------------------------------------
#
# Project created by QtCreator 2012-04-15T10:40:42
#
#-------------------------------------------------

QT       += core gui xml svg network sql

DEFINES += _LINUX

TARGET = qt_db
TEMPLATE = app


SOURCES += main.cpp\

HEADERS  += \


unix {
#    CONFIG += link_pkgconfig
#    PKGCONFIG += gstreamer-0.10 gstreamer-interfaces-0.10
}

        
#CONFIG += console debug
#LIBS += -L/home/lucid/Software/Build/ltib/rootfs/usr/lib -l2dz430 -lgstinterfaces-0.10

FORMS    +=

MOC_DIR = .moc
OBJECTS_DIR = .objs

#TRANSLATIONS = $${TARGET}_zh_TW.ts $${TARGET}_zh_CN.ts $${TARGET}_zh_JP.ts

