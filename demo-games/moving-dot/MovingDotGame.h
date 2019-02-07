/**
 * MovingDotGame.h
 * Purpose: defines class MovingDotGame
 *
 * @author mezorian
 * @version 0.2
 */

#ifndef MovingDotGame_H
#define MovingDotGame_H

// ----
#include <vector>
#include <chrono>  // for high_resolution_clock
// ----
#include "Pix.h"
#include "PixObject.h"
#include "DotPixObject.h"
#include "OpenPixGameEngine.h"
#include <QTimer>
#include <QObject>

// ----

using namespace std;

class MovingDotGame : public OpenPixGameEngine {
    public:
        MovingDotGame(unsigned int width_,unsigned int height_, QApplication &application_);
        void init();
        void readInputs();
        void executeGameLogic();

        QTimer *timer;
        void start();

};

#endif // MovingDotGame_H
