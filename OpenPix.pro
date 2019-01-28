QT += gui
QT += widgets
TEMPLATE += app

CONFIG += c++11 console
CONFIG -= app_bundle

QMAKE_CXXFLAGS += --coverage
QMAKE_LFLAGS += --coverage

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += include/
INCLUDEPATH += demo-games/moving-dot/

SOURCES += main.cpp \
    main_application.cpp \
    DrawnWindow.cpp \
    src/Pix.cpp \
    src/PixObject.cpp \
    src/PixObjectType.cpp \
    src/OpenPixGameEngine.cpp \
    test/MiscellaneousTest.cpp \
    test/PixTest.cpp \
    test/PixObjectTest.cpp \
    demo-games/moving-dot/DotPixObject.cpp \
    demo-games/moving-dot/MovingDotGame.cpp

HEADERS += \
    DrawnWindow.h \
    include/Pix.h \
    include/PixObject.h \
    include/PixObjectType.h \
    include/catch.hpp \
    include/OpenPixGameEngine.h \
    demo-games/moving-dot/DotPixObject.h \
    include/MovingDotGame.h \
    demo-games/moving-dot/MovingDotGame.h
