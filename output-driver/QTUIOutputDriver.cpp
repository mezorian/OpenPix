/**
 * QTUIOutputDriver.cpp
 * Purpose: implements class QTUIOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */

#include "QTUIOutputDriver.h"


void QTUIOutputDriver::init()
{
    ui.setPixMap(pixMap);
    ui.show();
}

void QTUIOutputDriver::paint()
{
    ui.repaint();
}
