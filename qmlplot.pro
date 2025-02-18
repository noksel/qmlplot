QT += qml quick core gui printsupport

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    qmlplot.h

SOURCES += main.cpp \
    qmlplot.cpp

RESOURCES += qml.qrc

include(../../LIBS/zdcstmplott/src/advqcstmpltt.pri)
