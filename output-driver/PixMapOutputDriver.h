/**
 * PixMapOutputDriver.h
 * Purpose: defines class PixMapOutputDriver
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef PixMapOutputDriver_H
#define PixMapOutputDriver_H

// ---
#include <vector>
#include <cstdlib>
// ---
#include "PixMapOutputDriverType.h"
// ---

using namespace std;

/**
 * PixMapOutputDriver class
 * @brief The PixMapOutputDriver class describes a PixMapOutputDriver of the type PixMapOutputDriverType
 *
 * The design of the PixMapOutputDriver-class is based on the design pattern 'strategy'.
 * In respect of this the PixMapOutputDriver-class is the so called 'Context' within the Strategy-Pattern.
 *
 * The PixMapOutputDriver class provides access to different kinds of PixMapOutputDrivers, which are defined as implementations
 * of the interface PixMapOutputDriverType.
 * By setPixMapOutputDriverType() one can choose the type of the PixMapOutputDriver one wants to access.
 *
 */
class PixMapOutputDriver {
    public:
        /* --- constructor --- */
        PixMapOutputDriver() {};

        /* --- functions which are implemented by PixMapOutputDriverType --- */
        void init();
        void paint();

        /* --- getters / setters --- */
        PixMapOutputDriverType *getPixMapOutputDriverType() const;
        void setPixMapOutputDriverType(PixMapOutputDriverType *value_);
        void setPixMap(vector<vector<Pix> > *value_);

private:
        PixMapOutputDriverType *pixMapOutputDriverType;

};

#endif // PixMapOutputDriver_H
