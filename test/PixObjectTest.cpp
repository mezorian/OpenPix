/**
 * PixObjectTest.cpp
 * Purpose: implements tests for the PixObject-class
 *
 * @author mezorian
 * @version 0.3
 */

#include "catch.hpp"
#include "PixObject.h"
#include "DotPixObject.h"

TEST_CASE("getter / setter testing") {
    PixObject pixObject;
    int x,y,pixMapDaemonWidth,pixMapDaemonHeight;

    SECTION("big negative values") {
        x=-16678;
        y=-323424;
        pixMapDaemonWidth=-13453454;
        pixMapDaemonHeight=-323423234;
    }

    SECTION("small negative values") {
        x=-1;
        y=-34;
        pixMapDaemonWidth=-10;
        pixMapDaemonHeight=-50;
    }

    SECTION("zeros") {
        x=0;
        y=0;
        pixMapDaemonWidth=0;
        pixMapDaemonHeight=0;
    }

    SECTION("small values") {
        x=1;
        y=34;
        pixMapDaemonWidth=10;
        pixMapDaemonHeight=50;
    }

    SECTION("big values") {
        x=1678;
        y=3244;
        pixMapDaemonWidth=13453434;
        pixMapDaemonHeight=3234244234;
    }

    SECTION("values out of bounds is also allowed") {
        x=10;
        y=10;
        pixMapDaemonWidth=5;
        pixMapDaemonHeight=5;
    }

    pixObject.setGameEngineWidth(pixMapDaemonWidth);
    pixObject.setGameEngineHeight(pixMapDaemonHeight);
    pixObject.setX(x);
    pixObject.setY(y);
    REQUIRE(pixObject.getX() == x);
    REQUIRE(pixObject.getY() == y);
    REQUIRE(pixObject.getGameEngineWidth() == pixMapDaemonWidth);
    REQUIRE(pixObject.getGameEngineHeight() == pixMapDaemonHeight);
}

TEST_CASE("move testing") {
    PixObject pixObject;
    pixObject.setPixObjectType(new DotPixObject());
    int x,y,pixMapDaemonWidth,pixMapDaemonHeight,deltaX,deltaY;

    SECTION ("don't move") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 0;
        deltaY = 0;
    }

    SECTION ("move one step up") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 0;
        deltaY = -1;
    }

    SECTION ("move one step down") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 0;
        deltaY = +1;
    }

    SECTION ("move one step left") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = -1;
        deltaY = 0;
    }

    SECTION ("move one step right") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 1;
        deltaY = 0;
    }

    SECTION ("move multiple steps up") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 0;
        deltaY = -5;
    }

    SECTION ("move multiple steps down") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 0;
        deltaY = +3;
    }

    SECTION ("move multiple steps left") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = -2;
        deltaY = 0;
    }

    SECTION ("move multiple steps right") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 4;
        deltaY = 0;
    }

    SECTION ("move diagonal right up") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 1;
        deltaY = -1;
    }

    SECTION ("move diagonal right down") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 1;
        deltaY = 1;
    }

    SECTION ("move diagonal left up") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = -1;
        deltaY = -1;
    }

    SECTION ("move diagonal left down") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = -1;
        deltaY = 1;
    }

    SECTION ("move out of pixMap right") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 100;
        deltaY = -1;
    }

    SECTION ("move out of pixMap left") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = -100;
        deltaY = -1;
    }

    SECTION ("move out of pixMap up") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 1;
        deltaY = -100;
    }

    SECTION ("move out of pixMap down") {
        x = 5;
        y = 5;
        pixMapDaemonWidth = 10;
        pixMapDaemonHeight = 10;
        deltaX = 1;
        deltaY = 100;
    }

    pixObject.setX(x);
    pixObject.setY(y);
    pixObject.create();
    pixObject.setGameEngineWidth(pixMapDaemonWidth);
    pixObject.setGameEngineHeight(pixMapDaemonHeight);
    int oldX = pixObject.getX();
    int oldY = pixObject.getY();

    pixObject.move(deltaY,deltaX);
    REQUIRE(pixObject.getX() >= 0);
    REQUIRE(pixObject.getX() < pixMapDaemonWidth);
    REQUIRE(pixObject.getY() >= 0);
    REQUIRE(pixObject.getY() < pixMapDaemonHeight);
    if ( (oldX + deltaX >=0) && (oldX + deltaX < pixMapDaemonWidth) ) {
         REQUIRE(pixObject.getX() == oldX + deltaX);
    }
    if ( (oldY + deltaY >=0) && (oldY + deltaY < pixMapDaemonHeight) ) {
         REQUIRE(pixObject.getY() == oldY + deltaY);
    }

}
