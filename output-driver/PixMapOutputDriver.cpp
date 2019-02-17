/**
 * PixMapOutputDriver.cpp
 * Purpose: implements class PixMapOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */

#include "PixMapOutputDriver.h"

/* --- functions which are implemented by PixMapOutputDriverType --- */

/**
 * PixMapOutputDriver::init
 * @brief initializes the output driver
 *
 * Initializes the output driver, therefor it calls the init-method of the pixMapOutputDriverType.
 */
void PixMapOutputDriver::init() {
    pixMapOutputDriverType->init();
}

/**
 * PixMapOutputDriver::paint
 * @brief paints the pixMap to the output driver
 *
 * paints the pixMap to the output driver, therefor it calls the paint-method of the pixMapOutputDriverType.
 */

void PixMapOutputDriver::paint() {
    pixMapOutputDriverType->paint();
}

/* --- getter / setter --- */

/**
 * PixMapOutputDriver::getPixMapOutputDriverType
 * @brief getter of member-variable pixMapOutputDriverType
 * @return returns the pixMapOutputDriverType
 */
PixMapOutputDriverType *PixMapOutputDriver::getPixMapOutputDriverType() const {
    return pixMapOutputDriverType;
}

/**
 * PixMapOutputDriver::setPixMapOutputDriverType
 * @brief setter of member-variable pixMapOutputDriverType
 * @param value_ the pixMapOutputDriverType you want to use
 */
void PixMapOutputDriver::setPixMapOutputDriverType(PixMapOutputDriverType *value_) {
    pixMapOutputDriverType = value_;
}

/**
 * PixMapOutputDriver::setPixMap
 * @brief setter of member-variable pixMap
 * @param value_ pointer to the pixMap of the game
 */
void PixMapOutputDriver::setPixMap(vector<vector<Pix> > *value_) {
    pixMapOutputDriverType->setPixMap(value_);
}
