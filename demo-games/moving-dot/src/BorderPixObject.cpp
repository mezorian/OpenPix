/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "BorderPixObject.h"
// ----

/**
 * BorderPixObject::create
 * @brief create creates a getGameEngineHeight x getGameEngineWidth pixMap with active blue Pix-objects at the outer Pix(s) of the pixMap
 */
void BorderPixObject::create() {

    // create pixMap with the same size than the pixMap of the game engine
    pixMap.resize(getGameEngineHeight());
    for (int y = 0; y < getGameEngineHeight(); y++) {
        pixMap[y].resize(getGameEngineWidth());
    }

    // create blue Pix
    Pix p(true,66, 134, 244);

    // copy the blue Pix to all border coordinates of the pixMap
    // all other coordinates remain with the default pix which is active==false
    for (int y = 0; y < getGameEngineHeight(); y++) {
        for (int x = 0; x < getGameEngineWidth(); x++) {
            if ( ( (y == 0) || (y == getGameEngineHeight() - 1) ) ||
                 ( (x == 0) || (x == getGameEngineWidth()  - 1) )  ) {
                pixMap[y][x] = p;
            }

        }
    }

}

/**
 * BorderPixObject::move
 * @brief this function is not implemented for this PixObjectType
 */
void BorderPixObject::move() {
}

