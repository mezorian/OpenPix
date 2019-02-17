/**
 * QtUiOutputDriver.h
 * Purpose: defines class QtUiOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */


#ifndef QtUiOutputDriver_H
#define QtUiOutputDriver_H

// ---- OpenPix includes ----
#include "PixMapOutputDriverType.h"
#include "QtUiWindow.h"
// ----

using namespace std;

/**
 * QtUiOutputDriver class
 * @brief The QtUiOutputDriver class provides an implementation of an output driver for a standard qt widgets user-interface
 * The QtUiOutputDriver class is an implementation of the interface PixMapOutputDriverType and implements the function init() and paint()
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the QtUiOutputDriver-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class QtUiOutputDriver : public PixMapOutputDriverType {
    public:
        /* --- constructors --- */
        QtUiOutputDriver() {};

        /* --- functions which were to implement --- */
        void init();
        void paint();

    private:
        QtUiWindow ui;

};

#endif // QtUiOutputDriver_H
