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

    Pix pixObject;
    pixObject.setActive(true);
    pixObject.setGreen(255);
    SECTION ("true") {
        REQUIRE(true==true);
    }
}
