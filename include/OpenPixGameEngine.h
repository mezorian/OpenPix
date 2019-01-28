/**
 * OpenPixGameEngine.h
 * Purpose: defines class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef OpenPixGameEngine_H
#define OpenPixGameEngine_H

// ----
#include <vector>
// ----
#include "Pix.h"
#include "PixObject.h"
#include "demo-games/moving-dot/DotPixObject.h"
// ----

using namespace std;

class OpenPixGameEngine {
    public:
        OpenPixGameEngine(unsigned int width_,unsigned int height_);
        virtual void init() = 0;
        virtual void run() = 0;

        vector<vector<Pix>> pixmap;
        vector<PixObject> pixObjects;

};

#endif // OpenPixGameEngine_H
