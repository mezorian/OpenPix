/**
 * CrossPixObject.cpp
 * Purpose: implements class CrossPixObject
 *
 * @author mezorian
 * @version 0.1
 */

#include "DotPixObject.h"

void DotPixObject::create() {
    Pix p(255,0,0);
    p.setActive(true);
    pixmap.resize(1);
    pixmap[0].resize(1);
    pixmap[0][0] = p;
}
