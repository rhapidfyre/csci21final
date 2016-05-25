/*
 * Name        : earth_test.cpp
 * Author      : April Browne
 * Description : Unit test to test Final Exam Earth Test
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
using std::cout;
using std::endl;
#include "activator.h"

TEST_CASE("Activator"){
    Activator a;
    
    SECTION("getPrimes()"){
        CHECK(a.getPrime(12345) ==132241);
        CHECK(a.getPrime(29) == 109);
        CHECK(a.getPrime(8719) == 90023);
    }
    
    SECTION("sumTheDigits()"){
        CHECK(a.sumTheDigits(0) == 0);
        CHECK(a.sumTheDigits(19) == 1);
        CHECK(a.sumTheDigits(88) == 7);
        CHECK(a.sumTheDigits(888) == 6);
        CHECK(a.sumTheDigits(8888) == 5);
    } 
}