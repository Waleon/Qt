QT += widgets
TEMPLATE = lib
CONFIG += plugin
TARGET = stylePlugin

HEADERS += \
    simple_style.h \
    style_plugin.h

OTHER_FILES += simple_style.json

win32 {
    CONFIG(debug, release|debug):DESTDIR = ../debug/styles/
    CONFIG(release, release|debug):DESTDIR = ../release/styles/
} else {
    DESTDIR = ../styles/
}
