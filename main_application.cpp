#include <iostream>

#include <chrono>
#include <thread>

#include "DrawnWindow.h"
#include "QTUIWindow.h"
#include "MovingDotGame.h"

#include "TestDriver.h"

using namespace std;

int main(int argc, char **argv)
{
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    QApplication app(argc, argv);
    MovingDotGame game(10,15);
    game.init();

    /*game.run2();
*/

    //game.doSmth();

    //---
    //QTUIWindow ui;
    //ui.show();
    //---

    return app.exec();


}
