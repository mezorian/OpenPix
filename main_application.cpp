/**
 * main_application.cpp
 * Purpose: main source file
 *
 * @author mezorian
 * @version 0.3
 */

// ---- Third party includes ----
#include <QApplication>
// ---- OpenPix includes ----
#include "MovingDotGame.h"
// ----

using namespace std;

int main2(int argc, char **argv) {
    // in case there is no QT-UI output deactivate this
    QApplication application(argc, argv);

    // create, init and run the game
    MovingDotGame game(10,15,application);
    game.init();
    game.run();

    return 0;

}
