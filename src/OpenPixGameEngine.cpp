/**
 * OpenPixGameEngine.cpp
 * Purpose: implements class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.2
 */

#include "OpenPixGameEngine.h"

OpenPixGameEngine::OpenPixGameEngine(unsigned int width_, unsigned int height_, PixMapOutputDriverType *pixMapOutputDriverType_) {
    pixmap.resize(height_);
    for(unsigned int y = 0; y < height_; y++) {
        pixmap[y].resize(width_);
    }

    // initialize output-driver
    pixMapOutputDriver.setPixMapOutputDriverType(pixMapOutputDriverType_);
    pixMapOutputDriver.setPixmap(&pixmap);
    pixMapOutputDriver.init();
}

void OpenPixGameEngine::paint() {
    pixMapOutputDriver.paint();
}
