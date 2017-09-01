QT += core
QT -= gui

TEMPLATE = lib
CONFIG += plugin
TARGET = personPlugin

HEADERS += \
    person.h \
    programmer.h

SOURCES += programmer.cpp

OTHER_FILES += programmer.json

win32 {
    CONFIG(debug, release|debug):DESTDIR = ../debug/plugins/
    CONFIG(release, release|debug):DESTDIR = ../release/plugins/
} else {
    DESTDIR = ../plugins/
}
