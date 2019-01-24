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

        /* --- measuring --- */
        //DataBuffer readPixObject();

    private:
        PixObjectType *pixObjectType;
        vector<vector<Pix>> pixmap;
};

#endif // PixObject_H
