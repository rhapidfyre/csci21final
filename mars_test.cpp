/*
 * Name        : mars_test.cpp
 * Author      : April Browne
 * Description : Unit test to test Final Exam Mars Test
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
using std::cout;
using std::endl;
#include "specialrocketship.h"

TEST_CASE("Special Rocket Ship"){
    SpecialRocketShip ship;
    
    SECTION("default constructor"){
        CHECK(ship.getName() == "RS Cloaky");
        CHECK(ship.getFuel() == 1000);
        CHECK(ship.getCloaked() == false);
    }
    
   ship.setName("RS NotCloakied");
   SECTION("set/getName()"){
       CHECK(ship.getName() == "RS NotCloakied");
   }
   
   ship.setFuel(9999);
   SECTION("set/getFuel()"){
       CHECK(ship.getFuel() == 9999);
   }
   
   ship.setCloaked(true);
   SECTION("set/getCloaked()"){
       CHECK(ship.getCloaked() == true);
   }
}





