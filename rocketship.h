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
using namespace std;

#ifndef SHIP
#define SHIP

class RocketShip {
    public:
        RocketShip();
        RocketShip(string newName, unsigned int newFuel);
        void setName(string name);
        void setFuel(unsigned int fuel);
        string getName() const;
        unsigned int getFuel() const;
        void addFuelCell(unsigned int fuelAmount);
        bool removeFuelCell(unsigned int cellNumber);
        bool addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount);
        string burnFuel(unsigned int cellNumber);
    protected:
        string name_;
        unsigned int fuel_;
        vector<unsigned int> fuelCells;
};

#endif