TEMPLATE = app
TARGET = hello

QT += core widgets gui

CONFIG += c++1z
QMAKE_CXXFLAGS += -std=c++17
SOURCES += main.cpp

