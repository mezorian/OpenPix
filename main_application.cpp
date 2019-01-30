#include <iostream>

#include <chrono>
#include <thread>

#include "QTUIWindow.h"
#include "MovingDotGame.h"

using namespace std;

int main(int argc, char **argv)
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    //QApplication app(argc, argv);
    MovingDotGame game(10,15);
    game.init();
    //app.exec();

    auto start = std::chrono::high_resolution_clock::now();
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    for (int i = 0; i < 20; i++) {
        while (elapsed.count() < 1) {
            finish = std::chrono::high_resolution_clock::now();
            elapsed = finish - start;
        }
        cout << "beep " << i << endl;
        start = std::chrono::high_resolution_clock::now();
        finish = std::chrono::high_resolution_clock::now();
        elapsed = finish - start;
        game.pixMapOutputDriver.paint();
    }


    /*game.run2();
*/

    //game.doSmth();

    //---
    //QTUIWindow ui;
    //ui.show();
    //---

    //return app.exec();


}
