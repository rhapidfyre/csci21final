#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#ifndef ACTIVATOR
#define ACTIVATOR

/*
	-- START Activator specification --

        private data members
                none

        public function interface
                unsigned int getPrime (unsigned int whichPrime)
                -- return a prime number in the series of primes, --
                -- first prime is 2, second prime is 3, etc. --

                unsigned int sumTheDigits (unsigned int value)
                -- return the sum of the digits in a value --
                -- reduced to a single digit --
                -- ex: sum of digits in 99 is 9+9=18, 1+8=9, return 9 --
-- END Activator specification --
*/
class Activator {
    public:
        unsigned int getPrime(unsigned int whichPrime);
        unsigned int sumTheDigits(unsigned int value);
};

#endif