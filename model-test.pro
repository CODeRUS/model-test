TARGET = model-test

CONFIG += sailfishapp

SOURCES += src/model-test.cpp \
    src/testmodel.cpp \
    src/countriesfiltermodel.cpp

HEADERS += \
    src/testmodel.h \
    src/countriesfiltermodel.h

OTHER_FILES += qml/model-test.qml \
    qml/cover/CoverPage.qml \
    qml/pages/FirstPage.qml \
    qml/pages/SecondPage.qml \
    rpm/model-test.changes.in \
    rpm/model-test.spec \
    rpm/model-test.yaml \
    model-test.desktop

