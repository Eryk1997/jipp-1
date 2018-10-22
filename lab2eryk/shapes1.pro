TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    point2d.cpp \
    triangle.cpp \
    main.cpp

unix:!macx: LIBS += -L$$PWD/sigil-linux-gcc/ -lsigil

INCLUDEPATH += $$PWD/sigil-linux-gcc/include
DEPENDPATH += $$PWD/sigil-linux-gcc/include

HEADERS += \
    point2d.h \
    triangle.h

unix:!macx: LIBS += -L$$PWD/../qttest/sigil-linux-gcc/ -lsigil

INCLUDEPATH += $$PWD/../qttest/sigil-linux-gcc/include
DEPENDPATH += $$PWD/../qttest/sigil-linux-gcc/include
