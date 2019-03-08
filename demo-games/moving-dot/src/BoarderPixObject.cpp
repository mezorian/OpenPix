/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "BoarderPixObject.h"
// ----

/**
 * BoarderPixObject::create
 * @brief create creates a getGameEngineHeight x getGameEngineWidth pixMap with active blue Pix-objects at the outer Pix(s) of the pixMap
 */
void BoarderPixObject::create() {
    Pix p(true,66, 134, 244);
    pixMap.resize(getGameEngineHeight());
    for (int y = 0; y < getGameEngineHeight(); y++) {
        pixMap[y].resize(getGameEngineWidth());
    }

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
 * BoarderPixObject::move
 * @brief this function is not implemented for this PixObjectType
 */
void BoarderPixObject::move() {
}

