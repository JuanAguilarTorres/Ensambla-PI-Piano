QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia


CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp


nasm.name = nasm ${QMAKE_FILE_IN}
nasm.input = ASM_FILES
nasm.variable_out = OBJECTS
nasm.commands = nasm -f elf64 ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
nasm.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_IN_BASE}$${first(QMAKE_EXT_OBJ)}
nasm.CONFIG += target_predeps

QMAKE_EXTRA_COMPILERS  += nasm

ASM_FILES += \
    piano.asm

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QMAKE_LFLAGS += \
    -no-pie

DISTFILES += \
    ../Downloads/EnsamblaPIPiano.rar \
    SFX/261.wav \
    SFX/277.wav \
    SFX/293.wav \
    SFX/311.wav \
    SFX/329.wav \
    SFX/349.wav \
    SFX/369.wav \
    SFX/391.wav \
    SFX/415.wav \
    SFX/440.wav \
    SFX/446.wav \
    SFX/493.wav \
    SFX/523.wav \
    SFX/554.wav \
    SFX/587.wav \
    SFX/622.wav \
    SFX/659.wav \
    SFX/698.wav \
    SFX/739.wav \
    SFX/783.wav \
    SFX/830.wav \
    SFX/880.wav \
    SFX/932.wav \
    SFX/987.wav \
    SFX/SFX

RESOURCES += \
    LED.qrc \
    sfx.qrc

#LIBS += -luser32
