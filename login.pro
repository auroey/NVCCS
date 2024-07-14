QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = login
TEMPLATE = app

SOURCES += main.cpp \
           widget.cpp \
           form.cpp

HEADERS += widget.h \
           form.h

FORMS += widget.ui \
         form.ui

RESOURCES += \
    img.qrc

RC_ICONS= car.ico
