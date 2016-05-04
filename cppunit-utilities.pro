


TARGET = cppunit-utilities
TEMPLATE = lib
CONFIG += staticlib

unix {
  UI_DIR = .ui
  MOC_DIR = .moc
  OBJECTS_DIR = .obj

}

SOURCES += \ 
    MSVCOutputter.cpp \
    GccOutputter.cpp \
    QtStreamOperators.cpp

HEADERS += \ 
    MSVCOutputter.h \
    GccOutputter.h \
    QtStreamOperators.h

DISTFILES += \
    LICENSE \
    README.md

