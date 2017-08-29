QT += widgets
SOURCES += main.cpp
TARGET = app

win32 {
    debug:DESTDIR = ../debug/
    release:DESTDIR = ../release/
} else {
    DESTDIR = ../
}
