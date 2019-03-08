/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "DotPixObject.h"
// ----

/**
 * DotPixObject::create
 * @brief create creates a 1x1 pixMap with a active red Pix-object inside
 */
void DotPixObject::create() {
    Pix p(true,255,0,0);
    pixMap.resize(1);
    pixMap[0].resize(1);
    pixMap[0][0] = p;
}

/**
 * DotPixObject::getDir
 * @brief getter of the member-variable dir
 * @return returns current direction value
 */
Direction DotPixObject::getDir() const {
    return dir;
}

/**
 * DotPixObject::setDir
 * @brief setter of the member-variable dir
 * @param value_ new direction value
 */
void DotPixObject::setDir(const Direction &value_) {
    dir = value_;
}
