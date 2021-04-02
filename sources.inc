!include ..\..\project.inc

C_DEFINES               = $(C_DEFINES) -DBUILD_ONECORE_INTERACTIVITY

PRECOMPILED_CXX         = 1
PRECOMPILED_INCLUDE     = ..\precomp.h

SOURCES= \
    ..\CodepointWidthDetector.cpp \
    ..\IInputEvent.cpp \
    ..\FocusEvent.cpp \
    ..\GlyphWidth.cpp \
    ..\KeyEvent.cpp \
    ..\MenuEvent.cpp \
    ..\ModifierKeyState.cpp \
    ..\MouseEvent.cpp \
    ..\Viewport.cpp \
    ..\WindowBufferSizeEvent.cpp \
    ..\convert.cpp \
    ..\colorTable.cpp \
    ..\Utf16Parser.cpp \
    ..\utils.cpp \
    ..\ThemeUtils.cpp \
    ..\ScreenInfoUiaProviderBase.cpp \
    ..\sgrStack.cpp \
    ..\UiaTextRangeBase.cpp \
    ..\UiaTracing.cpp \
    ..\TermControlUiaProvider.cpp \
    ..\TermControlUiaTextRange.cpp \

INCLUDES= \
    $(INCLUDES); \
    ..; \
