QT += qml quick core gui printsupport

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
    qcustomplot.h \
    qmlplot.h

SOURCES += main.cpp \
    qcustomplot.cpp \
    qmlplot.cpp

RESOURCES += qml.qrc
