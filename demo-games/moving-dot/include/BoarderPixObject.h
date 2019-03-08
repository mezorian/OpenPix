/**
 * BoarderPixObject.h
 * Purpose: defines class BoarderPixObject
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef BoarderPixObject_H
#define BoarderPixObject_H

// ---- Third party includes ----
#include <cstdlib>
// ---- OpenPix includes ----
#include "PixObjectType.h"
// ----

/**
 * BoarderPixObject class
 * @brief The BoarderPixObject class provides an implementation of serveral functions for the creation of a basic Dot
 * The BoarderPixObject class is an implementation of the interface PixObjectType and implements the function create()
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the BoarderPixObject-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class BoarderPixObject : public PixObjectType {

    public:
        /* --- constructor --- */
        BoarderPixObject() {};

        /* --- functions which were to implement --- */
        void create();
        void move();


};

#endif // BoarderPixObject_H
