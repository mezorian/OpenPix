/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.2
 */

#include "DotPixObject.h"

void DotPixObject::create() {
    Pix p(true,255,0,0);
    pixmap.resize(1);
    pixmap[0].resize(1);
    pixmap[0][0] = p;
}
