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
 * @brief create creates a 1x1 pixMap with a active random-colored Pix-object inside
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
 *
 * If the new coordinates, which are calculated by this function, touch the boarder of this game,
 * the direction is changed as if the DotPixObject is bouncing away from the boarder
 */
void DotPixObject::move() {
    // check coordinates and correct direction
    // bounce away from the top boarder
    if (getX() <= 1) {
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

    // bounce away from the bottom boarder
    if (getX() >= getGameEngineWidth() - 2) {
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

    // bounce away from the left border
    if (getY() <= 1) {
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

    // bounce away from the right border
    if (getY() >= getGameEngineHeight() - 2) {
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
