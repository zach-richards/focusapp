// kwindowsystem.h

#ifndef KWINDOWSYSTEM_H
#define KWINDOWSYSTEM_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char title[256];
    char class_name[128];
    int pid;
} WindowInfo;

int get_windows(WindowInfo *windows, int max_windows);

#ifdef __cplusplus
}
#endif

#endif