#include <iostream>

#include "DrawnWindow.h"
#include "QTUIWindow.h"

using namespace std;

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    DrawnWindow draw;
    draw.show();

    //---
    //QTUIWindow ui;
    //ui.show();
    //---

    return app.exec();


}
