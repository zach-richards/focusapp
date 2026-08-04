INCLUDE_DIRS = src/main.c src/user_track/system.c src/user_track/windows/kwindowsystem.cpp
src/user_track/windows/window_list.c src/user_track/windows/window.c

all: bin

bin:
	gcc -Iinclude $(INCLUDE_DIRS) -o bin/focusapp

appimage: