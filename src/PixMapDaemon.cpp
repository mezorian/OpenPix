/**
 * PixMapDaemon.cpp
 * Purpose: implements class PixMapDaemon
 *
 * @author mezorian
 * @version 0.1s
 */

#include "PixMapDaemon.h"

PixMapDaemon::PixMapDaemon(unsigned int width_, unsigned int height_)
{
    pixmap.resize(width_);
    for(unsigned int x = 0; x < width_; x++) {
        pixmap[x].resize(height_);
    }
}
