/**
 * MovingDotGame.cpp
 * Purpose: implements class MovingDotGame
 *
 * @author mezorian
 * @version 0.1
 */

#include "MovingDotGame.h"
#include "QTUIOutputDriver.h"

MovingDotGame::MovingDotGame(unsigned int width_, unsigned int height_) :
    OpenPixGameEngine(width_,height_,new QTUIOutputDriver())
{

}

void MovingDotGame::init() {
    PixObject dot;
    dot.setY(5);
    dot.setX(5);
    dot.setPixObjectType(new DotPixObject());
    dot.setGameEngineHeight(pixmap.size());
    dot.setGameEngineWidth(pixmap[0].size());
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
    pixMapOutputDriver.init();
}

void MovingDotGame::run() {
    pixMapOutputDriver.paint();
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

void MovingDotGame::run2() {

    for (int i = 0; i < 5; i++) {
        auto start = std::chrono::high_resolution_clock::now();
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        do {
            finish = std::chrono::high_resolution_clock::now();
            elapsed = finish - start;
        } while (elapsed.count() <= 1);

        run();
    }

}
