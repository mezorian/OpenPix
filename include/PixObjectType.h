/**
 * PixObjectType.h
 * Purpose: defines interface PixObjectType
 *
 * @author mezorian
 * @version 0.3
 */

#ifndef PixObjectType_H
#define PixObjectType_H

#include "Pix.h"
#include "vector"

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
 *
 */
class PixObjectType {
    public:
        /* --- constructors --- */
        PixObjectType() {};

        /* --- functions which are to implement by a concrete stategy - class --- */
        virtual void create() = 0;

        /* --- miscellaneous --- */
        unsigned int getWidth();
        unsigned int getHeight();

        bool hasPixMap();
        Pix getPix(int y_, int x_);

        vector<vector<Pix>> pixMap;
};

#endif // PixObjectType_H

