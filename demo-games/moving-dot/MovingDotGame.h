/**
 * MovingDotGame.h
 * Purpose: defines class MovingDotGame
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef MovingDotGame_H
#define MovingDotGame_H

// ----
#include <vector>
// ----
#include "Pix.h"
#include "PixObject.h"
#include "DotPixObject.h"
#include "OpenPixGameEngine.h"
// ----

using namespace std;

class MovingDotGame : public OpenPixGameEngine {
    public:
        MovingDotGame(unsigned int width_,unsigned int height_);
        void init();
        void run();

};

#endif // MovingDotGame_H