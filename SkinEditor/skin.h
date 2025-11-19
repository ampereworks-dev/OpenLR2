#pragma once
#include "../LR2/structure.h"

int LR2SEInit(game* g);

int LR2SEDrawLoop(game* g, int gHandle);

int LR2SESceneInit(game* g, int type);

int LR2SESceneProc(game* g, int type);
