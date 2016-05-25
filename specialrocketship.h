/*
 *  Author:     Michael Harris
 *  Desc  :     Rocketship, Vrooooooooooom
 *  Note  :     Referenced VECTOR: http://www.cplusplus.com/reference/vector/vector/
 *
 */
 
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "rocketship.h"
using namespace std;

#ifndef SPECIAL
#define SPECIAL

class SpecialRocketShip: public RocketShip {
    public:
        SpecialRocketShip();
        void setCloaked(bool cloaked);
        bool getCloaked() const;
    private:
        bool cloaked_;
};

#endif