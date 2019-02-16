/**
 * QtUiOutputDriver.cpp
 * Purpose: implements class QtUiOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */

#include "QtUiOutputDriver.h"


QtUiOutputDriver::QtUiOutputDriver() {
}

void QtUiOutputDriver::init() {
    ui.setPixmap(pixmap);
    ui.show();
}

void QtUiOutputDriver::paint() {
    ui.repaint();
}
