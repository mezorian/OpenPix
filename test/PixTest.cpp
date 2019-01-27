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

    SECTION("too small numbers") {
        active = false;
        red = -1;
        green = -25;
        blue = -223423455;
    }

    SECTION("to big numbers") {
        active = false;
        red = 256;
        green = 2550;
        blue = 25500000;
    }

    /* standard constructor / getter / setter testing */
    Pix pixObject(active,red,green,blue);
    REQUIRE(pixObject.getActive() == active);
    REQUIRE(pixObject.getRed() >= 0);
    REQUIRE(pixObject.getGreen() >= 0);
    REQUIRE(pixObject.getBlue() >= 0);
    REQUIRE(pixObject.getRed() <= 255);
    REQUIRE(pixObject.getGreen() <= 255);
    REQUIRE(pixObject.getBlue() <= 255);

    if (red < 0) {
        REQUIRE(pixObject.getRed() == 0);
    } else if (red > 255) {
        REQUIRE(pixObject.getRed() == 255);
    } else {
        REQUIRE(pixObject.getRed() == red);
    }

    if (green < 0) {
        REQUIRE(pixObject.getGreen() == 0);
    } else if (green > 255) {
        REQUIRE(pixObject.getGreen() == 255);
    } else {
        REQUIRE(pixObject.getGreen() == green);
    }

    if (blue < 0) {
        REQUIRE(pixObject.getBlue() == 0);
    } else if (blue > 255) {
        REQUIRE(pixObject.getBlue() == 255);
    } else {
        REQUIRE(pixObject.getBlue() == blue);
    }

    /* --- copy constructor testing --- */
    Pix pixObject2(pixObject);

    REQUIRE_FALSE(&pixObject2 == &pixObject);
    REQUIRE(pixObject2.getActive() == pixObject.getActive());
    REQUIRE(pixObject2.getRed() == pixObject.getRed());
    REQUIRE(pixObject2.getGreen() == pixObject.getGreen());
    REQUIRE(pixObject2.getBlue() == pixObject.getBlue());

    /* assignment operator testing --- */
    Pix pixObject3(pixObject);

    REQUIRE_FALSE(&pixObject3 == &pixObject);
    REQUIRE(pixObject3.getActive() == pixObject.getActive());
    REQUIRE(pixObject3.getRed() == pixObject.getRed());
    REQUIRE(pixObject3.getGreen() == pixObject.getGreen());
    REQUIRE(pixObject3.getBlue() == pixObject.getBlue());

}

