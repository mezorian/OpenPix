#include <iostream>

#include "DrawnWindow.h"

using namespace std;

int main2(int argc, char **argv)
{
    QApplication app(argc, argv);
    DrawnWindow draw;
    draw.show();

    return app.exec();


}
