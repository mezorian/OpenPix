/**
 * OpenPixGameEngine.h
 * Purpose: defines class OpenPixGameEngine
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef OpenPixGameEngine_H
#define OpenPixGameEngine_H

// ----
#include <vector>
// ----
#include "Pix.h"
#include "PixObject.h"
#include "DotPixObject.h"
#include "PixMapOutputDriver.h"
#include "PixMapOutputDriverType.h"
#include <QObject>
// ----

using namespace std;

class OpenPixGameEngine {
    public:
        OpenPixGameEngine(unsigned int width_,unsigned int height_, PixMapOutputDriverType *pixMapOutputDriverType_);
        virtual void init() = 0;
        virtual void run() = 0;
        void paint();

        vector<vector<Pix>> pixmap;
        vector<PixObject> pixObjects;
        PixMapOutputDriver pixMapOutputDriver;

};

#endif // OpenPixGameEngine_H
