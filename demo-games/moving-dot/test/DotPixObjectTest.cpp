/**
 * DotPixObjectTest.cpp
 * Purpose: implements tests for the DotPixObject-class
 *
 * @author mezorian
 * @version 0.3
 */

// ---- Third party includes ----
#include "catch.hpp"
// ---- OpenPix includes ----
#include "DotPixObject.h"
#include "Pix.h"
// ----

TEST_CASE("DotPixObject test general functions") {
    DotPixObject dotPixObject;

    REQUIRE(dotPixObject.getHeight() == 0);
    REQUIRE(dotPixObject.getWidth() == 0);
    REQUIRE(dotPixObject.hasPixMap() == false);

    int y,x;
    SECTION ("coordinates 0,0"){
        y = 0;
        x = 0;
    }

    SECTION ("small positive coordinates 4,10"){
        y = 4;
        x = 10;
    }

    SECTION ("small negative coordinates -3,-11"){
        y = -3;
        x = -11;
    }

    SECTION ("big positive coordinates 500,10000"){
        y = 500;
        x = 10000;
    }

    SECTION ("big negative coordinates -800,-112300"){
        y = -800;
        x = -112300;
    }

    Pix pix = dotPixObject.getPix(y,x);
    REQUIRE(pix.getActive() == false);
    REQUIRE(pix.getRed() == 0);
    REQUIRE(pix.getGreen() == 0);
    REQUIRE(pix.getBlue() == 0);

    dotPixObject.create();
    REQUIRE(dotPixObject.getHeight() == 1);
    REQUIRE(dotPixObject.getWidth() == 1);
    REQUIRE(dotPixObject.hasPixMap() == 1);

    // pixMap has one red pix at 0,0
    // all other coordinates are empty
    pix = dotPixObject.getPix(y,x);
    if ((y == 0) && (x == 0)) {
        REQUIRE(pix.getActive() == true);
        REQUIRE(pix.getRed() == 255);
        REQUIRE(pix.getGreen() == 0);
        REQUIRE(pix.getBlue() == 0);
    } else {
        REQUIRE(pix.getActive() == false);
        REQUIRE(pix.getRed() == 0);
        REQUIRE(pix.getGreen() == 0);
        REQUIRE(pix.getBlue() == 0);
    }
}
