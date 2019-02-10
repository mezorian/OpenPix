/**
 * QTUIOutputDriver.cpp
 * Purpose: implements class QTUIOutputDriver
 *
 * @author mezorian
 * @version 0.2
 */

#include "QTUIOutputDriver.h"


QTUIOutputDriver::QTUIOutputDriver()
{
}

void QTUIOutputDriver::init()
{
    ui.setPixmap(pixmap);
    ui.show();
}

void QTUIOutputDriver::paint()
{
    ui.repaint();
}
