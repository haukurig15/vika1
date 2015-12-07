QT += core
QT += sql
QT -= gui
QT += core sql

TARGET = week1
CONFIG += console
CONFIG -= app_bundle
CONFIG += C++11



TEMPLATE = app

SOURCES += main.cpp \
    models/scientist.cpp \
    repositories/scientistrepository.cpp \
    services/scientistservice.cpp \
    ui/consoleui.cpp \
    utilities/utils.cpp \
    utilities/scientistcomparator.cpp \
    models/computers.cpp \
    repositories/computersrepository.cpp \
    services/computersservice.cpp \
    utilities/computerscomparator.cpp

HEADERS += \
    models/scientist.h \
    repositories/scientistrepository.h \
    utilities/utils.h \
    utilities/constants.h \
    services/scientistservice.h \
    ui/consoleui.h \
    utilities/scientistcomparator.h \
    models/computers.h \
    repositories/computersrepository.h \
    services/computersservice.h \
    utilities/computerscomparator.h

