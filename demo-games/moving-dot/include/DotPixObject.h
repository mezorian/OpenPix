/**
 * DotPixObject.h
 * Purpose: defines class DotPixObject
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef DotPixObject_H
#define DotPixObject_H

// ---- OpenPix includes ----
#include "PixObjectType.h"
#include "Types.h"
// ----

/**
 * DotPixObject class
 * @brief The DotPixObject class provides an implementation of serveral functions for the creation of a basic Dot
 * The DotPixObject class is an implementation of the interface PixObjectType and implements the function create()
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
        Direction dir = rand()%4;


};

#endif // DotPixObject_H
