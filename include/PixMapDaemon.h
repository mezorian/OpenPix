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
// ----

using namespace std;

class PixMapDaemon {
    public:
        PixMapDaemon(unsigned int width_,unsigned int height_);
        vector<vector<Pix>> pixmap;

};

#endif // PIXMAPDAEMON_H
