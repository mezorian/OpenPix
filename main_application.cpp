/**
 * main.cpp
 * Purpose: main file
 *
 * @author mezorian
 * @version 0.2
 */

#include <iostream>

#include <chrono>
#include <thread>

#include "QTUIWindow.h"
#include "MovingDotGame.h"

using namespace std;

int main(int argc, char **argv)
{
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    QApplication app(argc, argv);
    MovingDotGame game(10,15);
    game.init();

    auto start = std::chrono::high_resolution_clock::now();
    auto finish = std::chrono::high_resolution_clock::now();
    //std::chrono::duration<double> elapsed = finish - start;
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
    for (int i = 0; i < 20; i++) {
        while (elapsed.count() < 1000) {
            finish = std::chrono::high_resolution_clock::now();
            elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
        }
        cout << "beep " << i  << "x" << elapsed.count() << endl;
        start = std::chrono::high_resolution_clock::now();
        finish = std::chrono::high_resolution_clock::now();
        elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(finish - start);
        game.executeGameLogic();
        game.pixMapOutputDriver.paint();
        app.processEvents();

    }

}
