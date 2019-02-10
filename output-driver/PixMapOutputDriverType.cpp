/**
 * PixMapOutputDriverType.cpp
 * Purpose: implements class PixMapOutputDriverType
 *
 * @author mezorian
 * @version 0.2
 */

#include "PixMapOutputDriverType.h"

/**
 * PixMapOutputDriverType::getPixmap
 * @brief getter of member-variable pixmap
 * @return returns a pointer to the pixmap of the game
 */
vector<vector<Pix> > *PixMapOutputDriverType::getPixmap() const {
    return pixmap;
}

/**
 * PixMapOutputDriverType::setPixmap
 * @brief setter of member-variable pixmap
 * @param sets the member-variable pixmap to a pointer of the pixmap of the game
 */
void PixMapOutputDriverType::setPixmap(vector<vector<Pix> > *value_) {
    pixmap = value_;
}
