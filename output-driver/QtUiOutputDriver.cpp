/**
 * QtUiOutputDriver.cpp
 * Purpose: implements class QtUiOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */

#include "QtUiOutputDriver.h"

/* --- functions which were to implement --- */
/**
 * QtUiOutputDriver::init
 * @brief hands the pointer of the pixMap into the QtUiWindow class and initializes the QMainWindow
 */
void QtUiOutputDriver::init() {
    ui.setPixMap(pixMap);
    ui.show();
}

/**
 * QtUiOutputDriver::paint
 * @brief calls the repaint function of the QtUiWindow class
 */
void QtUiOutputDriver::paint() {
    ui.repaint();
}
