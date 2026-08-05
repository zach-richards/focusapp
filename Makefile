SOURCES_C = src/main.c \
            src/user_track/system.c \
            src/user_track/windows/window_list.c \
            src/user_track/windows/window.c

SOURCES_CPP = src/user_track/windows/kwindowsystem.cpp

all: bin/focusapp

bin/focusapp: src/main.c
	gcc src/main.c -o bin/focusapp

build: bin/focusapp
	@echo "Building AppImage..."
	@./linuxdeploy-x86_64.AppImage \
    	--appdir FocusApp.AppDir \
    	--output appimage
	@mv FocusApp*.AppImage ../dist
	@echo "Build complete. AppImage created in dist directory."
	