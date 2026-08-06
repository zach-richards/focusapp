CC := gcc

BIN_DIR := bin

SOURCES_C = \
	src/main.c \
	src/user_track/system.c \
	src/user_track/windows/window_list.c \
	src/user_track/windows/window.c

SOURCES_CPP = \
	src/user_track/windows/kwindowsystem.cpp

all: $(BIN_DIR)/focusapp

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/focusapp: | $(BIN_DIR)
	$(CC) -o $@