QT += core
QT -= gui

CONFIG += c++11

TARGET = app
CONFIG += console
TEMPLATE = app

INCLUDEPATH += $$PWD/..

SOURCES += main.cpp

win32 {
    debug:DESTDIR = ../debug/
    release:DESTDIR = ../release/
} else {
    DESTDIR = ../
}
