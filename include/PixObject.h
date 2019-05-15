/**
 * PixObject.h
 * Purpose: defines class PixObject
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef PixObject_H
#define PixObject_H

// ---- Third party includes ----
#include <cstdlib> // TODO : remove this if you removed rand()
// ---- OpenPix includes ----
#include "PixObjectType.h"
#include "Pix.h"
// ----

using namespace std;

/**
 * PixObject class
 * @brief The PixObject class describes a PixObject of the type PixObjectType
 *
 * The design of the PixObject-class is based on the design pattern 'strategy'.
 * In respect of this the PixObject-class is the so called 'Context' within the Strategy-Pattern.
 *
 * The PixObject class provides access to different kinds of PixObjects, which are defined as implementations
 * of the interface PixObjectType.
 * By setPixObjectType() one can choose the type of the PixObject one wants to access.
 * The function readPixObject() returns the double value of the current PixObject measurement
 */
class PixObject {
    public:
        /* --- constructor --- */
        PixObject() {};

        /* --- functions which are implemented by pixObjectType --- */
        void create();
        void move();

        int getWidth();
        int getHeight();

        Pix getPix(int y_,int x_);
        bool hasPixMap();

        /* --- getters and setters --- */
        PixObjectType *getPixObjectType() const;
        void setPixObjectType(PixObjectType *value_);

        int getX() const;
        void setX(int value_);

        int getY() const;
        void setY(int value_);

        int getGameEngineWidth() const;
        void setGameEngineWidth(int value_);

        int getGameEngineHeight() const;
        void setGameEngineHeight(int value_);

    private:
        PixObjectType *pixObjectType;

};

#endif // PixObject_H
