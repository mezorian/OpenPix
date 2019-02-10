/**
 * PixMapOutputDriver.cpp
 * Purpose: implements class PixMapOutputDriver
 *
 * @author mezorian
 * @version 0.2
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
 * @brief paints the pixmap to the output driver
 *
 * paints the pixmap to the output driver, therefor it calls the paint-method of the pixMapOutputDriverType.
 */

void PixMapOutputDriver::paint() {
    pixMapOutputDriverType->paint();
}

/* --- getter / setter --- */

/**
 * PixMapOutputDriverType::setPixmap
 * @brief setter of member-variable pixmap
 * @param sets the member-variable pixmap to a pointer of the pixmap of the game
 */

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
 * PixMapOutputDriver::setPixmap
 * @brief setter of member-variable pixmap
 * @param value_ pointer to the pixmap of the game
 */
void PixMapOutputDriver::setPixmap(vector<vector<Pix> > *value_) {
    pixMapOutputDriverType->setPixmap(value_);
}
