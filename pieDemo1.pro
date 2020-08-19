#-------------------------------------------------
#
# Project created by QtCreator 2018-09-13T11:09:51
#
#-------------------------------------------------

QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pieDemo1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    PieForm.cpp \
    TDMDetailDataForm.cpp \
    TDMTrendChartForm.cpp \
    QWChartView.cpp

HEADERS  += mainwindow.h \
    PieForm.h \
    TDMDetailDataForm.h \
    TDMTrendChartForm.h \
    QWChartView.h

FORMS    += mainwindow.ui \
    PieForm.ui \
    TDMDetailDataForm.ui \
    TDMTrendChartForm.ui

RESOURCES += \
    resource.qrc
