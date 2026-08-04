// window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QString>
#include <WId>

struct WindowInfo {
    QString title;
    QString className;
    QString processName;
    int pid;
    WId windowId;
};

#endif // WINDOW_H