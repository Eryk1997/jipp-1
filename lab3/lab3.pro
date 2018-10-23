TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    triangle.cpp \
    rectangle.cpp \
    point2d.cpp \
    circle.cpp

HEADERS += \
    triangle.h \
    rectangle.h \
    point2d.h \
    circle.h
