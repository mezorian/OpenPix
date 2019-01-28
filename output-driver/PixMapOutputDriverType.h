/**
 * PixMapOutputDriverType.h
 * Purpose: defines interface PixMapOutputDriverType
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef PixMapOutputDriverType_H
#define PixMapOutputDriverType_H

#include "vector"

using namespace std;

/**
 * PixMapOutputDriverType class
 * @brief The PixMapOutputDriverType class is an interface which outsources functions from PixMapOutputDriver-class
 *
 * The design of the PixMapOutputDriverType-class is based on the design pattern 'strategy'.
 * In respect of this the PixMapOutputDriverType-class is the so called 'IStrategy' within the Strategy-Pattern.
 *
 * PixMapOutputDriverType can be implemented by different types of sensor-classes.
 * If one wants to inherit from PixMapOutputDriverType one has to implement the init() and the paint()-function. TODO
 *
 *
 */
class PixMapOutputDriverType {
    public:
        /* --- constructors --- */
        PixMapOutputDriverType() {};

        /* --- functions which are to implement by a concrete stategy - class --- */
        virtual void init() = 0;
        virtual void paint() = 0;
};

#endif // PixMapOutputDriverType_H

