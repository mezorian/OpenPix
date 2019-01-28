/**
 * PixMapOutputDriver.cpp
 * Purpose: implements class PixMapOutputDriver
 *
 * @author mezorian
 * @version 0.1
 */

#include "PixMapOutputDriver.h"

/* --- functions which are implemented by PixMapOutputDriverType --- */

void PixMapOutputDriver::init() {
    pixMapOutputDriverType->init();
}

void PixMapOutputDriver::paint() {
    pixMapOutputDriverType->paint();
}

/* --- getter / setter --- */

PixMapOutputDriverType *PixMapOutputDriver::getPixMapOutputDriverType() const {
    return pixMapOutputDriverType;
}

void PixMapOutputDriver::setPixMapOutputDriverType(PixMapOutputDriverType *value_) {
    pixMapOutputDriverType = value_;
}
