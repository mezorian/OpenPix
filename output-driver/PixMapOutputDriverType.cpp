/**
 * PixMapOutputDriverType.cpp
 * Purpose: implements class PixMapOutputDriverType
 *
 * @author mezorian
 * @version 0.2
 */

#include "PixMapOutputDriverType.h"

vector<vector<Pix> > *PixMapOutputDriverType::getPixmap() const
{
    return pixmap;
}

void PixMapOutputDriverType::setPixmap(vector<vector<Pix> > *value)
{
    pixmap = value;
}
