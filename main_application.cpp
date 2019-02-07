/**
 * main.cpp
 * Purpose: main file
 *
 * @author mezorian
 * @version 0.2
 */

#include <iostream>
#include <thread>
#include "MovingDotGame.h"
#include <QApplication>

using namespace std;

int main(int argc, char **argv) {
    // in case there is no QT-UI output deactivate this
    QApplication application(argc, argv);

    // create, init and run the game
    MovingDotGame game(10,15,application);
    game.init();
    game.run();

}
