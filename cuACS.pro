#-------------------------------------------------
#
# Project created by QtCreator 2019-02-06T12:33:16
#
#-------------------------------------------------

QT  += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cuACS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    animal.cpp \
    main.cpp \
    addnewanimal.cpp \
    manageanimal.cpp \
    login.cpp \
    staffportal.cpp \
    manageclient.cpp \
    client.cpp \
    addnewclient.cpp \
    clientportal.cpp \
    editanimal.cpp \
    editclient.cpp \
    uiserver.cpp \
    dbserver.cpp \
    acm.cpp

HEADERS += \
    animal.h \
    addnewanimal.h \
    manageanimal.h \
    login.h \
    staffportal.h \
    manageclient.h \
    client.h \
    addnewclient.h \
    clientportal.h \
    editclient.h \
    editanimal.h\
    uiserver.h \
    dbserver.h \
    acm.h


FORMS += \
    addnewanimal.ui \
    manageanimal.ui \
    login.ui \
    staffportal.ui \
    manageclient.ui \
    addnewclient.ui \
    clientportal.ui \
    editclient.ui \
    editanimal.ui \
    acm.ui
