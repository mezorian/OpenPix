/**
 * VectorDataTest.cpp
 * Purpose: implements tests for the Pix-class
 *
 * @author Wall.Of.Death
 * @version 2.2
 */

#include "catch.hpp"
#include "Pix.h"

TEST_CASE("constructor testing") {
    bool active;
    int red,green,blue;

    SECTION("all empty") {
        active = false;
        red = 0;
        green = 0;
        blue = 0;
    }

    SECTION("small numbers") {
        active = true;
        red = 10;
        green = 2;
        blue = 50;
    }

    SECTION("mid-size numbers") {
        active = false;
        red = 100;
        green = 120;
        blue = 200;
    }

    SECTION("big numbers") {
        active = false;
        red = 255;
        green = 255;
        blue = 255;
    }

    Pix pixObject(active,red,green,blue);
    REQUIRE(pixObject.getActive() == active);
    REQUIRE(pixObject.getRed() == red);
    REQUIRE(pixObject.getGreen() == green);
    REQUIRE(pixObject.getBlue() == blue);
    REQUIRE(pixObject.getRed() >= 0);
    REQUIRE(pixObject.getGreen() >= 0);
    REQUIRE(pixObject.getBlue() >= 0);
    REQUIRE(pixObject.getRed() <= 255);
    REQUIRE(pixObject.getGreen() <= 255);
    REQUIRE(pixObject.getBlue() <= 255);

}
