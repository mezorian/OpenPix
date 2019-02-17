/**
 * PixTest.cpp
 * Purpose: implements tests for the Pix-class
 *
 * @author mezorian
 * @version 0.3
 */

// ---- Third party includes ----
#include "catch.hpp"
// ---- OpenPix includes ----
#include "Pix.h"
// ----

TEST_CASE("Pix constructor / getter / setter / operator testing") {
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
    Pix pix(active,red,green,blue);
    REQUIRE(pix.getActive() == active);
    REQUIRE(pix.getRed() >= 0);
    REQUIRE(pix.getGreen() >= 0);
    REQUIRE(pix.getBlue() >= 0);
    REQUIRE(pix.getRed() <= 255);
    REQUIRE(pix.getGreen() <= 255);
    REQUIRE(pix.getBlue() <= 255);

    if (red < 0) {
        REQUIRE(pix.getRed() == 0);
    } else if (red > 255) {
        REQUIRE(pix.getRed() == 255);
    } else {
        REQUIRE(pix.getRed() == red);
    }

    if (green < 0) {
        REQUIRE(pix.getGreen() == 0);
    } else if (green > 255) {
        REQUIRE(pix.getGreen() == 255);
    } else {
        REQUIRE(pix.getGreen() == green);
    }

    if (blue < 0) {
        REQUIRE(pix.getBlue() == 0);
    } else if (blue > 255) {
        REQUIRE(pix.getBlue() == 255);
    } else {
        REQUIRE(pix.getBlue() == blue);
    }

    /* --- copy constructor testing --- */
    Pix pix2(pix);

    REQUIRE_FALSE(&pix2 == &pix);
    REQUIRE(pix2.getActive() == pix.getActive());
    REQUIRE(pix2.getRed() == pix.getRed());
    REQUIRE(pix2.getGreen() == pix.getGreen());
    REQUIRE(pix2.getBlue() == pix.getBlue());

    /* assignment operator testing --- */
    Pix pix3(pix);

    REQUIRE_FALSE(&pix3 == &pix);
    REQUIRE(pix3.getActive() == pix.getActive());
    REQUIRE(pix3.getRed() == pix.getRed());
    REQUIRE(pix3.getGreen() == pix.getGreen());
    REQUIRE(pix3.getBlue() == pix.getBlue());

}

