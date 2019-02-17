/**
 * MovingDotGame.h
 * Purpose: defines class MovingDotGame
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef MovingDotGame_H
#define MovingDotGame_H

// ---- OpenPix includes ----
#include "OpenPixGameEngine.h"
#include "DotPixObject.h"
#include "QtUiOutputDriver.h"
// ----

using namespace std;

/**
 * The MovingDotGame class
 * @brief A very basic OpenPixGameEngine which can move 1x1 PixObjects / Dots
 *
 * The moving dot class is an inherited class of OpenPixGameEngine
 * which implements a very basic game with moving 1x1 DotPixObjects
 */
class MovingDotGame : public OpenPixGameEngine {
    public:
        /* --- constructors --- */
        MovingDotGame(int width_, int height_, QApplication &application_);

        /* --- general functions --- */
        void init();
        void readInputs();
        void executeGameLogic();

};

#endif // MovingDotGame_H
