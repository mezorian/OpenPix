/**
 * PixMapDaemon.h
 * Purpose: defines class PixMapDaemon
 *
 * @author mezorian
 * @version 0.1
 */

#ifndef PIXMAPDAEMON_H
#define PIXMAPDAEMON_H

// ----
#include <vector>
// ----
#include "Pix.h"
#include "PixObject.h"
#include "DotPixObject.h"
// ----

using namespace std;

class PixMapDaemon {
    public:
        PixMapDaemon(unsigned int width_,unsigned int height_);
        void init();
        void run();

        vector<vector<Pix>> pixmap;
        vector<PixObject> pixObjects;

};

#endif // PIXMAPDAEMON_H
