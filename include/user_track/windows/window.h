// window.h

#ifndef WINDOW_H
#define WINDOW_H

#include <QString>
#include <WId>
#include <KWindowSystem>
#include <KWindowInfo>
#include <vector>

struct WindowInfo {
    QString title;
    QString className;
    QString processName;
    int pid;
    WId windowId;
};

#endif // WINDOW_H