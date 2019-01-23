/**
 * Pix.cpp
 * Purpose: implements class Pix
 *
 * @author Wall.Of.Death
 * @version 2.2
 */

#include "Pix.h"

/* --- constructors / destructors --- */

// standard - constructor
Pix::Pix(unsigned int red_, unsigned int green_, unsigned int blue_) {
    setRed(red_);
    setGreen(green_);
    setBlue(blue_);
}

// copy - constructor
Pix::Pix(const Pix& other_) {
    (*this) = other_;
}

/* --- operators --- */
Pix& Pix::operator= (const Pix& other_) {
    // proof for identical address

    if (this == &other_) {
        return (*this);
    }

    // copy attributes
    setRed(other_.getRed());
    setGreen(other_.getGreen());
    setBlue(other_.getBlue());

    return *this;

}

/* --- getters / setters --- */
unsigned int Pix::getRed() const
{
    return red;
}

void Pix::setRed(unsigned int value_)
{
    red = value_;
}

unsigned int Pix::getGreen() const
{
    return green;
}

void Pix::setGreen(unsigned int value_)
{
    green = value_;
}

unsigned int Pix::getBlue() const
{
    return blue;
}

void Pix::setBlue(unsigned int value_)
{
    blue = value_;
}
