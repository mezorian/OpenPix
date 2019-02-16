/**
 * QtUiOutputDriver.h
 * Purpose: defines class QtUiOutputDriver
 *
 * @author mezorian
 * @version 0.3
 */


#ifndef QtUiOutputDriver_H
#define QtUiOutputDriver_H

#include <vector>

using namespace std;

// ---
#include <QApplication>
#include <QMainWindow>
#include <QtWidgets>
#include <QPainter>
#include <QImage>
#include <QTimer>
// ---
#include "PixMapOutputDriverType.h"
#include "QTUIWindow.h"
// ---

/**
 * QtUiOutputDriver class
 * @brief The QtUiOutputDriver class provides an implementation of an output driver for a standard qt widgets user-interface
 * The QtUiOutputDriver class is an implementation of the interface PixMapOutputDriverType and implements the function init() and paint() TODO
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the QtUiOutputDriver-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class QtUiOutputDriver : public PixMapOutputDriverType {
    public:
        /* --- constructor --- */
        QtUiOutputDriver();

        /* --- functions which were to implement --- */
        void init();
        void paint();

    private:
        QTUIWindow ui;



};

#endif // QtUiOutputDriver_H
