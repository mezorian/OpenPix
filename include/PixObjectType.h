/**
 * PixObjectType.h
 * Purpose: defines interface PixObjectType
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef PixObjectType_H
#define PixObjectType_H

// ---- Third party includes ----
#include "vector"
// ---- OpenPix includes ----
#include "Pix.h"
#include "StateMachine.h"
// ----


using namespace std;

/**
 * PixObjectType class
 * @brief The PixObjectType class is an interface which outsources functions from PixObject-class
 *
 * The design of the PixObjectType-class is based on the design pattern 'strategy'.
 * In respect of this the PixObjectType-class is the so called 'IStrategy' within the Strategy-Pattern.
 *
 * PixObjectType can be implemented by different types of sensor-classes.
 * If one wants to inherit from PixObjectType one has to implement the readSensor()-function. TODO
 *
 */
class PixObjectType {
    public:
        /* --- constructors --- */
        PixObjectType() {};

        /* --- functions which are to implement by a concrete stategy - class --- */
        virtual void create() = 0;
        virtual void move() = 0;

        /* --- miscellaneous --- */
        int getWidth();
        int getHeight();

        int getX() const;
        void setX(int value_);

        int getY() const;
        void setY(int value_);

        int getGameEngineWidth() const;
        void setGameEngineWidth(int value_);

        int getGameEngineHeight() const;
        void setGameEngineHeight(int value_);

        // TODO : double-check if this is needed
        StateMachine getStateMachine() const;
        void setStateMachine(const StateMachine &value);

        bool hasPixMap();
        Pix getPix(int y_, int x_);

        vector<vector<Pix>> pixMap;

private:
        int x; // x-coordinate of upper-left Pix
        int y; // y-coordinate of upper-left Pix
        int gameEngineWidth;  // TODO : search for a better solution
        int gameEngineHeight; // than this in a later version
        StateMachine stateMachine;

};

#endif // PixObjectType_H

