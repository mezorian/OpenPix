/**
 * Pix.cpp
 * Purpose: implements class Pix
 *
 * @author mezorian
 * @version 0.3
 */

// ---- OpenPix includes ----
#include "Pix.h"
// ----

/* --- constructors / destructors --- */

// standard - constructor
/**
 * Pix::Pix
 * @brief This function is the standard-constructor for the class Pix, all parameters are optional
 *
 * @param active_ If active_ is true this Pix is painted to the output-device, otherwise it is skipped during all painting functions
 * @param red_ The red part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 * @param green_ The green part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 * @param blue_ The blue part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 *
 * creates a instance of the class Pix and initializes all important attributes
 */
Pix::Pix(bool active_, unsigned int red_, unsigned int green_, unsigned int blue_) {
    setActive(active_);
    setRed(red_);
    setGreen(green_);
    setBlue(blue_);
}

// copy - constructor
/**
 * Pix::Pix
 * @brief copy constructor of class Pix
 * @param other_ Pix object to copy from
 */
Pix::Pix(const Pix& other_) {
    (*this) = other_;
}

/* --- operators --- */
/**
 * Pix::operator =
 * @brief assignment-operator, copies all content of other_
 * @param other_ Pix object to copy from
 * @return returns a new Pix instance which is copied from other_
 * creates a new instance of Pix and copies the attributes
 */
Pix& Pix::operator= (const Pix& other_) {
    // proof for identical address
    if (this == &other_) {
        return (*this);
    }

    // copy attributes
    setActive(other_.getActive());
    setRed(other_.getRed());
    setGreen(other_.getGreen());
    setBlue(other_.getBlue());

    // return
    return *this;
}

/* --- getters / setters --- */
/**
 * Pix::getActive
 * @brief getter of member-variable active
 * @return if true this is a Pix which is painted to the output-device, otherwise it is skipped during all painting functions
 */
bool Pix::getActive() const {
    return active;
}

/**
 * Pix::setActive
 * @brief setter of member-variable active
 * @param value_ if true this is a Pix which is painted to the output-device, otherwise it is skipped during all painting functions
 */
void Pix::setActive(bool value_) {
    active = value_;
}

/**
 * Pix::getRed
 * @brief getter of member-variable red
 * @return The red part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
unsigned int Pix::getRed() const {
    return red;
}

/**
 * Pix::setRed
 * @brief setter of member-variable red
 * @param value_ The red part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
void Pix::setRed(int value_) {
    if (value_ > 255) {
        value_ = 255;
    } else if (value_ < 0) {
        value_ = 0;
    }
    red = value_;
}

/**
 * Pix::getGreen
 * @brief getter of member-variable green
 * @return The green part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
unsigned int Pix::getGreen() const {
    return green;
}

/**
 * Pix::setGreen
 * @brief setter of member-variable green
 * @param value_ The green part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
void Pix::setGreen(int value_) {
    if (value_ > 255) {
        value_ = 255;
    } else if (value_ < 0) {
        value_ = 0;
    }
    green = value_;
}

/**
 * Pix::getBlue
 * @brief getter of member-variable blue
 * @return The blue part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
unsigned int Pix::getBlue() const {
    return blue;
}

/**
 * Pix::setBlue
 * @brief setter of member-variable blue
 * @param value_ The blue part of a RGB-color. Minimum Value = 0, Maximum Value = 255
 */
void Pix::setBlue(int value_) {
    if (value_ > 255) {
        value_ = 255;
    } else if (value_ < 0) {
        value_ = 0;
    }
    blue = value_;
}
