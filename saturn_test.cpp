/*
 * Name        : saturn_test.cpp
 * Author      : April Browne
 * Description : Unit test to test Final Exam Saturn Test
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
using std::cout;
using std::endl;
#include "rocketship.h"

TEST_CASE("Basic Rocket Ship"){
    RocketShip ship;
    
    SECTION ("Default Constructor"){
        CHECK (ship.getName() == "RS NullPointer");
        CHECK (ship.getFuel() == 1000);
    }
    
    ship.setName("RS PuddleJumper");
    SECTION ("setName(RS PuddleJumper)"){
        CHECK (ship.getName() == "RS PuddleJumper");
    }
    
    ship.setFuel(9999);
    SECTION ("setFuel(9999)"){
        CHECK (ship.getFuel() == 9999);
    }
}