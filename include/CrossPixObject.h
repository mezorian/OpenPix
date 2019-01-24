/**
 * CrossPixObject.h
 * Purpose: defines class CrossPixObject
 *
 * @author mezorian
 * @version 0.1
 */


#ifndef CrossPixObject_H
#define CrossPixObject_H


using namespace std;

#include "PixObjectType.h"

/**
 * CrossPixObject class
 * @brief The CrossPixObject class provides an implementation functions for the painting of a basic cross
 * The CrossPixObject class is an implementation of the interface PixObjectType and implements the function TODO
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the CrossPixObject-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class CrossPixObject : public PixObjectType {
    public:
        /* --- constructor --- */
        CrossPixObject() {};

        /* --- measuring --- */
        //DataBuffer readSensor(); TODO
    private:
        //double readDS18B20(int pin_);
};

#endif // CrossPixObject_H
