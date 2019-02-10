/**
 * main.cpp
 * Purpose: main source file
 *
 * @author mezorian
 * @version 0.2
 */

#include "MovingDotGame.h"
#include <QApplication>

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
