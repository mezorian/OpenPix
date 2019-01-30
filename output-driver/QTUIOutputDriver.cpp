/**
 * QTUIOutputDriver.cpp
 * Purpose: implements class QTUIOutputDriver
 *
 * @author mezorian
 * @version 0.1
 */

#include "QTUIOutputDriver.h"


void QTUIOutputDriver::init()
{
    ui.setPixmap(pixmap);
    ui.show();
}

void QTUIOutputDriver::paint()
{
    //ui.show();
}
