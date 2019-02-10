/**
 * PixObjectType.cpp
 * Purpose: implements class PixObjectType
 *
 * @author mezorian
 * @version 0.2
 */

#include "PixObjectType.h"

/* --- miscellaneous --- */
/**
 * PixObjectType::getWidth
 * @brief provides information about how many Pix(s) are stored in the pixmap in x-axis-direction
 * @return returns the amount of Pix(s) are stored in the pixmap in x-axis-direction
 */
unsigned int PixObjectType::getWidth() {
    if (hasPixMap()) {
        return pixmap[0].size();
    } else {
        return 0;
    }
}

/**
 * PixObjectType::getWidth
 * @brief provides information about how many Pix(s) are stored in the pixmap in y-axis-direction
 * @return returns the amount of Pix(s) are stored in the pixmap in y-axis-direction
 */
unsigned int PixObjectType::getHeight() {
    return pixmap.size();
}

/**
 * PixObjectType::hasPixMap
 * @brief returns false if the pixmap is empty, otherwise true
 * @return returns false if the pixmap is empty, otherwise true
 */
bool PixObjectType::hasPixMap() {
    return (pixmap.size() > 0);
}

/**
 * PixObjectType::getPix
 * @brief provides access to the pixmap
 * @param y_ y-coordinate of the Pix which is requested
 * @param x_ x-coordinate of the Pix which is requested
 * @return returns the requested Pix of the pixmap with the coordinates y_ and x_
 */
Pix PixObjectType::getPix(int y_,int x_) {
    if (hasPixMap()) {
        if ( ( (y_ >= 0) && (y_ < getHeight()) ) &&
             ( (x_ >= 0) && (x_ < getWidth() ) )   ) {
            return pixmap[y_][x_];
        } else {
            Pix emptyPix;
            return emptyPix;
        }
    } else {
        Pix emptyPix;
        return emptyPix;
    }

}
