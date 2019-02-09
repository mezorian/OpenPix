/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.2
 */

#include "DotPixObject.h"

/**
 * DotPixObject::create
 * @brief create creates a 1x1 pixmap with a red Pix-object inside
 */
void DotPixObject::create() {
    Pix p(true,255,0,0);
    pixmap.resize(1);
    pixmap[0].resize(1);
    pixmap[0][0] = p;
}
