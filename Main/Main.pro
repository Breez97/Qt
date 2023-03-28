QT       += core gui sql axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addrecord.cpp \
    izmenenie.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    print.cpp \
    printgraf.cpp \
    qcpdocumentobject.cpp \
    qcustomplot.cpp \
    showtable.cpp

HEADERS += \
    addrecord.h \
    izmenenie.h \
    login.h \
    mainwindow.h \
    print.h \
    printgraf.h \
    qcpdocumentobject.h \
    qcustomplot.h \
    showtable.h

FORMS += \
    addrecord.ui \
    izmenenie.ui \
    login.ui \
    mainwindow.ui \
    print.ui \
    printgraf.ui \
    showtable.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
