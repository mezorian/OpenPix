/**
 * VectorDataTest.cpp
 * Purpose: implements tests for all miscellaneous functions
 *
 * @author Wall.Of.Death
 * @version 2.2
 */

#include "catch.hpp"
#include "Pix.h"

TEST_CASE("dummy test-case") {

    Pix pixObject;
    pixObject.setActive(true);
    pixObject.setGreen(255);
    SECTION ("true") {
        REQUIRE(true==true);
    }
}
