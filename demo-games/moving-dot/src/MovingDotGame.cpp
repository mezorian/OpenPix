/**
 * MovingDotGame.cpp
 * Purpose: implements class MovingDotGame
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "MovingDotGame.h"
// ----

/* --- constructors --- */

/**
 * MovingDotGame::MovingDotGame
 * @brief Standard-Constructor which initializes all important member variables
 * @param width_ number of PixObjects in x-axis-direction of the pixMap
 * @param height_ number of PixObjects in y-axis-direction of the pixMap
 * @param application_ reference to the QApplication which is created in the main.cpp
 *
 * Standard-Constructor which initializes all important member variables.
 * This function calls the constructor of OpenPixGameEngine
 */
MovingDotGame::MovingDotGame(int width_, int height_, QApplication &application_) :
    OpenPixGameEngine(width_,height_,new QtUiOutputDriver(),application_)
{

}

/* --- general functions --- */

/**
 * MovingDotGame::init
 * @brief inintializes the pixMap of the game by creating several DotPixObjects
 */
void MovingDotGame::init() {
    // create a DotPixObject and add it to the game
    for (int i=0; i < 4; i++) {
        PixObject dot;
        dot.setPixObjectType(new DotPixObject());
        dot.setGameEngineHeight(pixMap.size());
        dot.setGameEngineWidth(pixMap[0].size());
        dot.setY(rand() % dot.getGameEngineHeight());
        dot.setX(rand() % dot.getGameEngineWidth());
        dot.create();
        pixObjects.push_back(dot);
    }

    PixObject border;
    border.setPixObjectType(new BorderPixObject());
    border.setGameEngineHeight(pixMap.size());
    border.setGameEngineWidth(pixMap[0].size());
    border.setY(0);
    border.setX(0);
    border.create();
    pixObjects.push_back(border);

    // initialize the output-drivers
    pixMapOutputDriver.init();
}

/**
 * MovingDotGame::readInputs
 * @brief read the Inputs of the User
 */
void MovingDotGame::readInputs() {

}

/**
 * MovingDotGame::executeGameLogic
 * @brief executes the game logic, which means it moves the Dots through the pixMap
 */
void MovingDotGame::executeGameLogic() {
    // paint the game to the outputput-driver
    pixMapOutputDriver.paint();

    // iterate all pixObjects and first unpaint, move and then paint them
    for (int i=0; i < pixObjects.size(); i++) {
        if (pixObjects[i].hasPixMap()) { // only do this PixObjects which have active Pixs in their pixMap

            // iterate pixMap of current PixObject and unpaint every Pix
            // this means every Pix of the pixMap of the game which was before used by this
            // PixObject will not get set to an empty PixObject
            // For this the coordinates of every Pix are calculated based on the top-left
            // coordinate of the PixObject
            for (int y = 0; y < pixObjects[i].getHeight(); y++) {
                for (int x = 0;  x < pixObjects[i].getWidth(); x++) {
                    // only do this for non-transparent / active Pixs
                    if (pixObjects[i].getPix(y,x).getActive()) {
                        // calc coordinates in the games pixMap
                        int yInPixMap = y+pixObjects[i].getY();
                        int xInPixMap = x+pixObjects[i].getX();
                        // replace Pix by emtpy Pix
                        Pix emptyPix();
                        pixMap[yInPixMap][xInPixMap] = emptyPix;
                    }
                }
            }

            // game-logic : move the PixObject in the direction right down
            // move also checks if the PixObject is out of the coordinates of the pixMap.
            // The coordinate value which is out of the possible values will get a random possible value
            pixObjects[i].move();

            // iterate pixMap of current PixObject and paint every Pix
            // this means every active / non-transparent Pix is copied to the
            // pixMap of the game.
            // For this the coordinates of every Pix are calculated based on the top-left
            // coordinate of the PixObject
            for (int y = 0; y < pixObjects[i].getHeight(); y++) {
                for (int x = 0;  x < pixObjects[i].getWidth(); x++) {
                    // only do this for non-transparent / active Pixs
                    if (pixObjects[i].getPix(y,x).getActive()) {
                        // calc coordinates in the games pixMap
                        int yInPixMap = y+pixObjects[i].getY();
                        int xInPixMap = x+pixObjects[i].getX();
                        // copy current Pix into the pixMap of the game
                        pixMap[yInPixMap][xInPixMap] = pixObjects[i].getPix(y,x);
                    }
                }
            }

        }
    }

}



