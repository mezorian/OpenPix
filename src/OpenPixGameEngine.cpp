/**
 * OpenPixGameEngine.cpp
 * Purpose: implements class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.1
 */

#include "OpenPixGameEngine.h"

OpenPixGameEngine::OpenPixGameEngine(unsigned int width_, unsigned int height_) {
    pixmap.resize(height_);
    for(unsigned int y = 0; y < height_; y++) {
        pixmap[y].resize(width_);
    }
}
