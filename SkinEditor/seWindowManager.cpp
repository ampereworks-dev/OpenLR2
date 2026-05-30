#include "seWindowManager.h"

int SEWINDOW::proc() {

    if (init) {
        ProcInit();
        draw = true;
        init = false;
    }
    if (draw) {
        ProcDraw();
    }
    if (quit) {
        ProcQuit();
        draw = false;
        quit = false;
    }
    return 0;
}

int defaultWindowInit() {
    return 0;
}
int defaultWindowDraw() {
    return 0;
}
int defaultWindowQuit() {
    return 0;
}