#-------------------------------------------------
#
# Project created by QtCreator 2016-04-12T08:45:54
#
#-------------------------------------------------

#modules to load by Qt (added opengl)
QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtGLTriangles
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    oglwindow.cpp

HEADERS  += mainwindow.h \
    oglwindow.h

FORMS    += mainwindow.ui

LIBS += -lopengl32
