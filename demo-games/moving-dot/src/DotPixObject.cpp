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
    Pix p(true,rand()%255,rand()%255,rand()%255);
    pixMap.resize(1);
    pixMap[0].resize(1);
    pixMap[0][0] = p;
}

/**
 * DotPixObject::move
 * @brief moves the DotPixObject by changing the x and y member variables
 * @param yDelta_ value by which the y-coordinate of this DotPixObject hast to get changed
 * @param xDelta_ value by which the x-coordinate of this DotPixObject hast to get changed
 *
 * If the new coordinates, which were calculated by this function, are out of the possible coordinates
 * of the pixMap of the game engine they get corrected to random coordinates within the possible coordinates
 */
void DotPixObject::move() {
    // check coordinates and correct direction
    if (getX() <= 0) {
        switch (getDir()) {
            case Direction::DOWN_LEFT :
                setDir(Direction::DOWN_RIGHT);
                break;
            case Direction::UP_LEFT:
                setDir(Direction::UP_RIGHT);
                break;
            default:
                break;
        }
    }

    if (getX() >= getGameEngineWidth() - 1) {
        switch (getDir()) {
            case Direction::DOWN_RIGHT :
                setDir(Direction::DOWN_LEFT);
                break;
            case Direction::UP_RIGHT:
                setDir(Direction::UP_LEFT);
                break;
            default:
                break;
        }
    }

    if (getY() <= 0) {
        switch (getDir()) {
            case Direction::UP_RIGHT :
                setDir(Direction::DOWN_RIGHT);
                break;
            case Direction::UP_LEFT:
                setDir(Direction::DOWN_LEFT);
                break;
            default:
                break;
        }
    }

    if (getY() >= getGameEngineHeight() - 1) {
        switch (getDir()) {
            case Direction::DOWN_RIGHT :
                setDir(Direction::UP_RIGHT);
                break;
            case Direction::DOWN_LEFT:
                setDir(Direction::UP_LEFT);
                break;
            default:
                break;
        }
    }

    // calculate new coordinates
    switch (getDir()) {
        case Direction::UP_LEFT :
            setY(getY()-1);
            setX(getX()-1);
            break;
        case Direction::UP_RIGHT :
            setY(getY()-1);
            setX(getX()+1);
            break;
        case Direction::DOWN_LEFT :
            setY(getY()+1);
            setX(getX()-1);
            break;
        case Direction::DOWN_RIGHT :
            setY(getY()+1);
            setX(getX()+1);
            break;
        default:
            break;
    }

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
