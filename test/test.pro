TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    trojkat.cpp \
    main.cpp \
    point2d.cpp

unix:!macx: LIBS += -L$$PWD/sigil-linux-gcc/ -lsigil

INCLUDEPATH += $$PWD/sigil-linux-gcc/include
DEPENDPATH += $$PWD/sigil-linux-gcc/include

HEADERS += \
    trojkat.h \
    point2d.h
