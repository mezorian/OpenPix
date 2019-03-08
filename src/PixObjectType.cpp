/**
 * PixObjectType.cpp
 * Purpose: implements class PixObjectType
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "PixObjectType.h"
// ----

/* --- miscellaneous --- */
/**
 * PixObjectType::getWidth
 * @brief provides information about how many Pix(s) are stored in the pixMap in x-axis-direction
 * @return returns the amount of Pix(s) are stored in the pixMap in x-axis-direction
 */
int PixObjectType::getWidth() {
    if (hasPixMap()) {
        return pixMap[0].size();
    } else {
        return 0;
    }
}

/**
 * PixObjectType::getWidth
 * @brief provides information about how many Pix(s) are stored in the pixMap in y-axis-direction
 * @return returns the amount of Pix(s) are stored in the pixMap in y-axis-direction
 */
int PixObjectType::getHeight() {
    return pixMap.size();
}

/**
 * PixObjectType::getX
 * @brief getter of the member-variable x
 * @return the current value of the member-variable x, which is the x-coordinate of upper-left Pix
 */
int PixObjectType::getX() const {
    return x;
}

/**
 * PixObjectType::setX
 * @brief setter of the member-variable x
 * @param value the new value for the member-variable x, which is the x-coordinate of upper-left Pix
 */
void PixObjectType::setX(int value_) {
    x = value_;
}

/**
 * PixObjectType::getY
 * @brief getter of the member-variable y
 * @return the current value of the member-variable y, which is the y-coordinate of upper-left Pix
 */
int PixObjectType::getY() const {
    return y;
}

/**
 * PixObjectType::setY
 * @brief setter of the member-variable y
 * @param value the new value for the member-variable y, which is the y-coordinate of upper-left Pix
 */
void PixObjectType::setY(int value_) {
    y = value_;
}

/**
 * PixObjectType::getGameEngineWidth
 * @brief getter of the member-variable gameEngineWidth
 * @return the current value of the member-variable gameEngineWidth
 */
int PixObjectType::getGameEngineWidth() const {
    return gameEngineWidth;
}

/**
 * PixObjectType::setGameEngineWidth
 * @brief setter of the member-variable gameEngineWidth
 * @param value the new value for the member-variable gameEngineWidth
 */
void PixObjectType::setGameEngineWidth(int value_) {
    gameEngineWidth = value_;
}

/**
 * PixObjectType::getGameEngineHeight
 * @brief getter of the member-variable gameEngineHeight
 * @return the current value of the member-variable gameEngineHeight
 */
int PixObjectType::getGameEngineHeight() const {
    return gameEngineHeight;
}

/**
 * PixObjectType::setGameEngineWidth
 * @brief setter of the member-variable gameEngineWidth
 * @param value the new value for the member-variable gameEngineWidth
 */
void PixObjectType::setGameEngineHeight(int value_) {
    gameEngineHeight = value_;
}

/**
 * PixObjectType::hasPixMap
 * @brief returns false if the pixMap is empty, otherwise true
 * @return returns false if the pixMap is empty, otherwise true
 */
bool PixObjectType::hasPixMap() {
    return (pixMap.size() > 0);
}

/**
 * PixObjectType::getPix
 * @brief provides access to the pixMap
 * @param y_ y-coordinate of the Pix which is requested
 * @param x_ x-coordinate of the Pix which is requested
 * @return returns the requested Pix of the pixMap with the coordinates y_ and x_
 */
Pix PixObjectType::getPix(int y_,int x_) {
    if (hasPixMap()) {
        if ( ( (y_ >= 0) && (y_ < getHeight()) ) &&
             ( (x_ >= 0) && (x_ < getWidth() ) )   ) {
            return pixMap[y_][x_];
        } else {
            Pix emptyPix;
            return emptyPix;
        }
    } else {
        Pix emptyPix;
        return emptyPix;
    }

}
