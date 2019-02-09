/**
 * MovingDotGame.h
 * Purpose: defines class MovingDotGame
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef MovingDotGame_H
#define MovingDotGame_H

#include "OpenPixGameEngine.h"

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
        MovingDotGame(unsigned int width_,unsigned int height_, QApplication &application_);

        /* --- general --- */
        void init();
        void readInputs();
        void executeGameLogic();

};

#endif // MovingDotGame_H
