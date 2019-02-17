/**
 * OpenPixGameEngine.h
 * Purpose: defines class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef OpenPixGameEngine_H
#define OpenPixGameEngine_H

// ---- Third party includes ----
#include <QApplication>
#include <vector>
#include <chrono>
#include <iostream>
// ---- OpenPix includes
#include "Pix.h"
#include "PixObject.h"
#include "PixMapOutputDriver.h"
// ----

using namespace std;

/**
 * The OpenPixGameEngine class
 * @brief The OpenPixGameEngine provides basic structures and functions to create a 2-dim. game-engine with a pixMap of PixObjects
 *
 * The OpenPixGameEngine provides basic structures and functions to create a 2-dim. game-engine with a pixMap (2-dim. vector) of Pix-Objects
 *
 *   - init()
 *   - readInputs()
 *   - executeGameLogic();
 *
 * The OpenPixGameEngine mainly consists of three components:
 *
 *  1. pixMap : an 2-dimensional array of Pix-Objects which have to be displayed by the OutputDrivers
 *  2. pixObjects : an array of all PixObjects which are in the game
 *  3. pixMapOutputDriver : a outputdriver which outputs the current state of the pixMap to an output-device
 *
 * A Pix can have several properties (e.g. colors) which specify how it is displayed on the output device.
 * A PixObject is a collection of Pix(s) which specify a object which can move and interact (e.g. collide) with other PixObjects within the pixMap.
 * A PixMapOutputDriver is an implementation of displaying the pixMap to any kind of output-device (e.g. a LED-matrix, a GUI or a ASCII console-output)
 *
 * ATTENTION : The OpenPixGameEngine-class is not intended for direct usage. To create your own game inherit from this class and implement
 */
class OpenPixGameEngine {
    public:
        /* --- constructors --- */
        OpenPixGameEngine(unsigned int width_, unsigned int height_, PixMapOutputDriverType *pixMapOutputDriverType_, QApplication &application_);

        /* --- general functions --- */
        virtual void init() = 0;
        void run();
        void repaint();

        /* --- getter / setter --- */
        unsigned int getReadInputsInterval() const;
        void setReadInputsInterval(unsigned int value_);

        unsigned int getExecuteGameLogicInterval() const;
        void setExecuteGameLogicInterval(unsigned int value_);

        unsigned int getRepaintInterval() const;
        void setRepaintInterval(unsigned int value_);

        QApplication &getApplication() const;
        void setApplication(const QApplication &value_);

    protected:
        vector<vector<Pix>> pixMap;
        vector<PixObject> pixObjects;
        PixMapOutputDriver pixMapOutputDriver;

    private:
        virtual void readInputs() = 0;
        virtual void executeGameLogic() = 0;

        unsigned int readInputsInterval;
        unsigned int executeGameLogicInterval;
        unsigned int repaintInterval;

        QApplication &application;

};

#endif // OpenPixGameEngine_H
