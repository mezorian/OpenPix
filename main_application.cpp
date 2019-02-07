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

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    MovingDotGame game(10,15,a);
    game.init();
    game.run();

}
