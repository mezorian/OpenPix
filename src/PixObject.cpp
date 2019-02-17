/**
 * PixObject.cpp
 * Purpose: implements class PixObject
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "PixObject.h"
// ----

/* --- functions which are implemented by pixObjectType --- */
/**
 * PixObject::create
 * @brief create() creates the PixObject with its pixMap inside
 *
 * Creates the PixObject with its pixMap inside.
 * In practice create() does not really create the PixObject, but it delegates the
 * creation to the implementation of a PixObjectType-interface
 */
void PixObject::create() {
    pixObjectType->create();
}

/**
 * PixObject::move
 * @brief moves the PixObject by changing the x and y member variables
 * @param yDelta_ value by which the y-coordinate of this PixObject hast to get changed
 * @param xDelta_ value by which the x-coordinate of this PixObject hast to get changed
 *
 * If the new coordinates, which were calculated by this function, are out of the possible coordinates
 * of the pixMap of the game engine they get corrected to random coordinates within the possible coordinates
 */
void PixObject::move(int yDelta_, int xDelta_) {
    // calculate new coordinates
    setY(getY()+yDelta_);
    setX(getX()+xDelta_);
    // check and correct coordinates
    if ( (getX()+1 < 0) || (getX()+1 > getGameEngineWidth()) ) {
        setX(rand()%getWidth());
    }
    if ( (getY()+1 < 0) || (getY()+1 > getGameEngineHeight()) ) {
        setY(rand()%getHeight());
    }
}

/**
 * PixObject::getWidth
 * @brief returns the width of the pixMap of the pixObjectType
 * @return returns the width of the pixMap of the pixObjectType
 */
int PixObject::getWidth() {
    return pixObjectType->getWidth();
}

/**
 * PixObject::getHeight
 * @brief returns the height of the pixMap of the pixObjectType
 * @return returns the height of the pixMap of the pixObjectType
 */
int PixObject::getHeight() {
    return pixObjectType->getHeight();
}

/**
 * PixObject::getPix
 * @brief returns a copy of a single Pix-Object within the pixMap of the pixObjectType
 * @param y_ y-coordinate within (the pixMap of the pixObjectType) of the Pix which is to return
 * @param x_ x-coordinate within (the pixMap of the pixObjectType) of the Pix which is to return
 * @return a copy of a single Pix-Object within the pixMap of the pixObjectType
 *
 * Returns a copy of a single Pix-Object within the pixMap of the pixObjectType.
 * This function can get used for getting the Pix-informations while painting.
 * TODO : Search a better solution for this in future releases
 */
Pix PixObject::getPix(int y_, int x_){
    return pixObjectType->getPix(y_,x_);
}

/**
 * PixObject::hasPixMap
 * @brief This function provides information about if the pixMap within the pixObjectType is empty or not
 * @return returns false if the pixMap of the pixObjectType is empty, otherwise true
 */
bool PixObject::hasPixMap() {
    return pixObjectType->hasPixMap();
}

/* --- getter and setter --- */
/**
 * PixObject::getPixObjectType
 * @brief getter of the member variable pixObjectType
 * @return returns member variable pixObjectType
 *
 * Getter of the member variable pixObjectType.
 * The member variable pixObjectType stores a reference to the strategy-class PixObjectType
 */
PixObjectType *PixObject::getPixObjectType() const {
    return pixObjectType;
}

/**
 * PixObject::setPixObjectType
 * @brief setter of the member variable pixObjectType
 * @param value pixObjectType which has to get stored
 *
 * Setter of the member variable pixObjectType.
 * The member variable pixObjectType stores a reference to the strategy-class PixObjectType
 */
void PixObject::setPixObjectType(PixObjectType *value_) {
    pixObjectType = value_;
}

/**
 * PixObject::getX
 * @brief getter of the member-variable x
 * @return the current value of the member-variable x, which is the x-coordinate of upper-left Pix
 */
int PixObject::getX() const {
    return x;
}

/**
 * PixObject::setX
 * @brief setter of the member-variable x
 * @param value the new value for the member-variable x, which is the x-coordinate of upper-left Pix
 */
void PixObject::setX(int value_) {
    x = value_;
}

/**
 * PixObject::getY
 * @brief getter of the member-variable y
 * @return the current value of the member-variable y, which is the y-coordinate of upper-left Pix
 */
int PixObject::getY() const {
    return y;
}

/**
 * PixObject::setY
 * @brief setter of the member-variable y
 * @param value the new value for the member-variable y, which is the y-coordinate of upper-left Pix
 */
void PixObject::setY(int value_) {
    y = value_;
}

/**
 * PixObject::getGameEngineWidth
 * @brief getter of the member-variable gameEngineWidth
 * @return the current value of the member-variable gameEngineWidth
 */
int PixObject::getGameEngineWidth() const {
    return gameEngineWidth;
}

/**
 * PixObject::setGameEngineWidth
 * @brief setter of the member-variable gameEngineWidth
 * @param value the new value for the member-variable gameEngineWidth
 */
void PixObject::setGameEngineWidth(int value_) {
    gameEngineWidth = value_;
}

/**
 * PixObject::getGameEngineHeight
 * @brief getter of the member-variable gameEngineHeight
 * @return the current value of the member-variable gameEngineHeight
 */
int PixObject::getGameEngineHeight() const {
    return gameEngineHeight;
}

/**
 * PixObject::setGameEngineWidth
 * @brief setter of the member-variable gameEngineWidth
 * @param value the new value for the member-variable gameEngineWidth
 */
void PixObject::setGameEngineHeight(int value_) {
    gameEngineHeight = value_;
}

