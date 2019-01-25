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
    pixmap.resize(height_);
    for(unsigned int y = 0; y < height_; y++) {
        pixmap[y].resize(width_);
    }
}

void PixMapDaemon::init() {
    PixObject dot;
    dot.setY(5);
    dot.setX(5);
    dot.setPixObjectType(new DotPixObject());
    dot.setPixMapDaemonHeight(pixmap.size());
    dot.setPixMapDaemonWidth(pixmap[0].size());
    dot.create();
    pixObjects.push_back(dot);
    PixObject dot2 = dot;
    dot2.setY(0);
    dot2.setX(0);
    pixObjects.push_back(dot2);
    PixObject dot3 = dot;
    dot3.setY(4);
    dot3.setX(3);
    pixObjects.push_back(dot3);
    PixObject dot4 = dot;
    dot4.setY(6);
    dot4.setX(8);
    pixObjects.push_back(dot4);
}

void PixMapDaemon::run() {
    for (int i=0; i < pixObjects.size(); i++) {
        if (pixObjects[i].hasPixMap()) {
            // unpaint
            for (int y = 0; y < pixObjects[i].getHeight(); y++) {
                for (int x = 0;  x < pixObjects[i].getWidth(); x++) {
                    if (pixObjects[i].getPix(y,x).getActive()) {
                        unsigned int yInPixMap = y+pixObjects[i].getY();
                        unsigned int xInPixMap = x+pixObjects[i].getX();
                        Pix emptyPix();
                        pixmap[yInPixMap][xInPixMap] = emptyPix;
                    }
                }
            }

            pixObjects[i].move(1,1);
            for (int y = 0; y < pixObjects[i].getHeight(); y++) {
                for (int x = 0;  x < pixObjects[i].getWidth(); x++) {
                    if (pixObjects[i].getPix(y,x).getActive()) {
                        unsigned int yInPixMap = y+pixObjects[i].getY();
                        unsigned int xInPixMap = x+pixObjects[i].getX();
                        pixmap[yInPixMap][xInPixMap] = pixObjects[i].getPix(y,x);
                    }
                }
            }
        }
    }



}
