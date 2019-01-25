/**
 * DotPixObject.h
 * Purpose: defines class DotPixObject
 *
 * @author mezorian
 * @version 0.1
 */


#ifndef DotPixObject_H
#define DotPixObject_H

#include <vector>


using namespace std;

#include "PixObjectType.h"

/**
 * DotPixObject class
 * @brief The DotPixObject class provides an implementation functions for the painting of a basic Dot
 * The DotPixObject class is an implementation of the interface PixObjectType and implements the function TODO
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the DotPixObject-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class DotPixObject : public PixObjectType {
    public:
        /* --- constructor --- */
        DotPixObject() {};

        /* --- functions which were to implement --- */
        void create();

    private:


};

#endif // DotPixObject_H
