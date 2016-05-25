/*
 * Name        : jupiter_test.cpp
 * Author      : April Browne
 * Description : Unit test to test Final Exam Jupiter Test
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
using std::cout;
using std::endl;
#include "rocketship.h"

TEST_CASE ("Upgraded RocketShip"){
    RocketShip ship;
    
    SECTION("Default Constructor"){
        CHECK(ship.getName() == "RS NullPointer");
        CHECK(ship.getFuel() == 1000);
    }
    
    ship.setName("RS FuelGuzzler");
    SECTION("setName(RS FuelGuzzler)"){
        CHECK(ship.getName() == "RS FuelGuzzler");
    }
    
    ship.setFuel(9999);
    SECTION ("setFuel(9999)"){
        CHECK(ship.getFuel() == 9999);
    }
    ship.addFuelCell(10);
    SECTION("addFuelCell(10)"){
        CHECK(ship.burnFuel(0) == "**********");
    }
    /* Last Known Good Test*/
    
    ship.burnFuel(0);
    
    bool stress1;
    stress1 = ship.addFuelToCell(0,5);
    SECTION("addFuelToCell(0,5)"){
        CHECK (stress1 == true);
        CHECK(ship.burnFuel(0) == "*****");
    }
    
    ship.burnFuel(0);
    
    bool stress2;
    stress2 = ship.removeFuelCell(0);
    SECTION("removeFuelCell(0)/burnFuel(0)"){
        CHECK(stress2 == true);
        CHECK(ship.burnFuel(0) == "");
    }
    
    SECTION("burnFuel(1) nonexistent cell"){
        CHECK(ship.burnFuel(1) == "");
    }
    
    bool stress3;
    stress3 = ship.addFuelToCell(1,1);
    SECTION("addFuelToCell(1,1) Nonexistent cell"){
        CHECK (stress3 == false);
    }
    
    bool stress4;
    stress4 = ship.removeFuelCell(1);
    SECTION("removeFuelCell(1) Nonexistent cell"){
        CHECK(stress4 == false);
    }
}/**/














