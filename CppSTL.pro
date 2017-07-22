TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    test.cpp \
    iteratorandtraits.cpp

HEADERS += \
    myAllocator.h \
    iteratorandtraits.h
