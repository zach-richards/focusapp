// window_list.h

#include <user_track/windows/window_list.h>

struct WindowList {
    std::vector<WindowInfo> windows;
};

WindowList get_windows()
{
    WindowList list;

    for (WId id : KWindowSystem::windows()) {
        KWindowInfo info(
            id,
            NET::WMName |
            NET::WMVisibleName |
            NET::WMWM2WindowClass |
            NET::WMPid
        );

        WindowInfo window;
        window.title = info.name();
        window.className = info.windowClassClass();
        window.pid = info.pid();
        window.windowId = id;

        // Looking up window process name using pid

        list.windows.push_back(std::move(window));
    }

    return list;
}

get_name

#endif