#-------------------------------------------------
#
# Project created by QtCreator 2016-02-06T14:05:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AzusaDesignerSDK
TEMPLATE = lib

DEFINES += AZUSADESIGNERSDK_LIBRARY

SOURCES += \
    PluginMain.cpp

HEADERS +=\
        azusadesignersdk_global.h \
    PluginMain.h \
    sdk/global/IGlobalManager.h \
    sdk/global/IPluginManager.h \
    sdk/global/IPlugin.h \
    sdk/global/IPluginMain.h \
    sdk/type.h \
    sdk/model/feature/IAction.h \
    sdk/model/feature/IActionManager.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
