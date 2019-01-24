/**
 * PixObjectType.h
 * Purpose: defines interface PixObjectType
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef PixObjectType_H
#define PixObjectType_H

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
        PixObjectType() {};
        //virtual DataBuffer readSensor() = 0; TODO
};

#endif // PixObjectType_H