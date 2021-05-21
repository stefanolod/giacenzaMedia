QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    annodialog.cpp \
    giacenza.cpp \
    main.cpp \
    mainwindow.cpp \
    mesi.cpp \
    movimento.cpp \
    risultato.cpp

HEADERS += \
    annodialog.h \
    giacenza.h \
    mainwindow.h \
    mesi.h \
    movimento.h \
    risultato.h

FORMS += \
    annodialog.ui \
    mainwindow.ui \
    risultato.ui

TRANSLATIONS += \
    giacenzaMedia_it_IT.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
