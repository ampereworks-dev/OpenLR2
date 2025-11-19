#pragma once

int defaultWindowInit();
int defaultWindowDraw();
int defaultWindowQuit();

typedef struct SEWINDOW {
    int (*ProcInit)() = defaultWindowInit;
    int (*ProcDraw)() = defaultWindowDraw;
    int (*ProcQuit)() = defaultWindowQuit;

    bool init = false;
    bool draw = false;
    bool quit = false;

    int proc();
}SEWINDOW;