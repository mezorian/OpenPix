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
    pixObjectType->getWidth();
}

unsigned int PixObject::getHeight() {
    pixObjectType->getHeight();
}

Pix PixObject::getPix(unsigned int y_, unsigned int x_){
    return pixObjectType->getPix(y_,x_);
}

bool PixObject::hasPixMap() {
    pixObjectType->hasPixMap();
}
