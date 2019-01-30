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
    ui.setPixmap(pixmap); ;
}

void QTUIOutputDriver::paint()
{
    ui.show();
}

void QTUIOutputDriver::doSmth()
{
    std::cout << "Hello World" << std::endl;
    draw.show();
}
