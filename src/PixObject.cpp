/**
 * PixObject.cpp
 * Purpose: implements class PixObject
 *
 * @author mezorian
 * @version 0.1
 */

#include "PixObject.h"

/**
 * PixObject::create
 * @brief create() create the PixObject with its PixMap inside
 *
 * create() create the PixObject with its PixMap inside.
 * In practice create does not really create the PixObject, but it delegates the
 * create to the implementation of a PixObjectType-interface
 */
void PixObject::create() {
    pixObjectType->create();
}

unsigned int PixObject::getX() const
{
    return x;
}

void PixObject::setX(unsigned int value)
{
    x = value;
}

unsigned int PixObject::getY() const
{
    return y;
}

void PixObject::setY(unsigned int value)
{
    y = value;
}

unsigned int PixObject::getWidth() {
    return pixObjectType->getWidth();
}

unsigned int PixObject::getHeight() {
    return pixObjectType->getHeight();
}

Pix PixObject::getPix(unsigned int y_, unsigned int x_){
    return pixObjectType->getPix(y_,x_);
}

void PixObject::move(int yDelta_, int xDelta_) {
    setY(getY()+yDelta_);
    setX(getX()+xDelta_);
    if ( (getX()+1 < 0) || (getX()+1 > getPixMapDaemonWidth()) ) {
        setX(rand()%getWidth());
    }
    if ( (getY()+1 < 0) || (getY()+1 > getPixMapDaemonHeight()) ) {
        setY(rand()%getHeight());
    }
}

unsigned int PixObject::getPixMapDaemonWidth() const
{
    return pixMapDaemonWidth;
}

void PixObject::setPixMapDaemonWidth(unsigned int value)
{
    pixMapDaemonWidth = value;
}

unsigned int PixObject::getPixMapDaemonHeight() const
{
    return pixMapDaemonHeight;
}

void PixObject::setPixMapDaemonHeight(unsigned int value)
{
    pixMapDaemonHeight = value;
}

bool PixObject::hasPixMap() {
    pixObjectType->hasPixMap();
}
