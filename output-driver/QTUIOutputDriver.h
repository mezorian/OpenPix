/**
 * QTUIOutputDriver.h
 * Purpose: defines class QTUIOutputDriver
 *
 * @author mezorian
 * @version 0.1
 */


#ifndef QTUIOutputDriver_H
#define QTUIOutputDriver_H

#include <vector>
#include "DrawnWindow.h"

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
 * QTUIOutputDriver class
 * @brief The QTUIOutputDriver class provides an implementation of an output driver for a standard qt widgets user-interface
 * The QTUIOutputDriver class is an implementation of the interface PixMapOutputDriverType and implements the function init() and paint() TODO
 * The design of it is based on the design pattern 'strategy'.
 * In respect of this the QTUIOutputDriver-class is a so called 'ConcreteStrategy' within the Strategy-Pattern.
 */
class QTUIOutputDriver : public PixMapOutputDriverType {
    public:
        /* --- constructor --- */
        QTUIOutputDriver() {};

        /* --- functions which were to implement --- */
        void init();
        void paint();
        //DrawnWindow draw;


        void doSmth();

    private:
        QTUIWindow draw;


};

#endif // QTUIOutputDriver_H
