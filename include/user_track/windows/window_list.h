// window_list.h

#ifndef WINDOW_LIST_H
#define WINDOW_LIST_H

#include <user_track/windows/window.h>
#include <vector>

struct WindowList {
    std::vector<WindowInfo> windows;
};

#endif