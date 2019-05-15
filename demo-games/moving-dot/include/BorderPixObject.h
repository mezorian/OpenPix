/**
 * BorderPixObject.h
 * Purpose: defines class BorderPixObject
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef BorderPixObject_H
#define BorderPixObject_H

// ---- Third party includes ----
#include <cstdlib>
// ---- OpenPix includes ----
#include "PixObjectType.h"
// ----

/**
 * BorderPixObject class
 * @brief The BorderPixObject class provides an implementation of serveral functions for the creation of a basic border of the pixmap with width=1
 * The BorderPixObject class is an implementation of the interface PixObjectType and implements the function create()
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the BorderPixObject-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class BorderPixObject : public PixObjectType {

    public:
        /* --- constructor --- */
        BorderPixObject() {};

        /* --- functions which were to implement --- */
        void create();
        void move();


};

#endif // BorderPixObject_H
