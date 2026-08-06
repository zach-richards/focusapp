// window.cpp

#include <KWindowSystem>
#include <KWindowInfo>
#include <vector>

#include <user_track/windows/window.h>

struct WindowInfo {
    QString title;
    QString className;
    QString processName;
    int pid;
    WId windowId;
};

void view