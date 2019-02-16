/**
 * PixMapOutputDriverType.cpp
 * Purpose: implements class PixMapOutputDriverType
 *
 * @author mezorian
 * @version 0.2
 */

#include "PixMapOutputDriverType.h"

/**
 * PixMapOutputDriverType::getPixMap
 * @brief getter of member-variable pixMap
 * @return returns a pointer to the pixMap of the game
 */
vector<vector<Pix> > *PixMapOutputDriverType::getPixMap() const {
    return pixMap;
}

/**
 * PixMapOutputDriverType::setPixMap
 * @brief setter of member-variable pixMap
 * @param sets the member-variable pixMap to a pointer of the pixMap of the game
 */
void PixMapOutputDriverType::setPixMap(vector<vector<Pix> > *value_) {
    pixMap = value_;
}
