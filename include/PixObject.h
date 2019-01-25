/**
 * PixObject.h
 * Purpose: defines class PixObject
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef PixObject_H
#define PixObject_H

#include "PixObjectType.h"
#include "Pix.h"
#include <vector>

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

        /* --- getter and setter --- */
        void setPixObjectType(PixObjectType *val_) { pixObjectType = val_; };
        PixObjectType* getPixObjectType()          { return pixObjectType; };

        /* --- create --- */
        void create();

        unsigned int getX() const;
        void setX(unsigned int value);

        unsigned int getY() const;
        void setY(unsigned int value);

        unsigned int getWidth();
        unsigned int getHeight();
        bool hasPixMap();
        Pix getPix(unsigned int y_,unsigned int x_);

private:
        unsigned int x;
        unsigned int y;
        PixObjectType *pixObjectType;


};

#endif // PixObject_H
