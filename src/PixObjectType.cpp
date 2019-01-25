/**
 * PixObjectType.cpp
 * Purpose: implements class PixObjectType
 *
 * @author mezorian
 * @version 0.1s
 */

#include "PixObjectType.h"

/* --- miscellaneous --- */
bool PixObjectType::hasPixMap() {
    return (pixmap.size() > 0);
}

unsigned int PixObjectType::getWidth() {
    if (hasPixMap()) {
        unsigned int i = pixmap[0].size();
        return i;
    }
}

unsigned int PixObjectType::getHeight() {
    unsigned int i = pixmap.size();
    return i;

}

Pix PixObjectType::getPix(unsigned int y_, unsigned int x_) {
    return pixmap[y_][x_];
}