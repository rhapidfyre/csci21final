#include "rocketship.h"

RocketShip::RocketShip() {
    name_ = "RS NullPointer";
    fuel_ = 1000;
}

RocketShip::RocketShip(string newName, unsigned int newFuel) {
    name_ = newName;
    fuel_ = newFuel;
}

void RocketShip::setName(string name) {
    name_ = name;
}

void RocketShip::setFuel(unsigned int fuel) {
    fuel_ = fuel;
}

string RocketShip::getName() const {
    return name_;
}

unsigned int RocketShip::getFuel() const {
    return fuel_;
}

void RocketShip::addFuelCell(unsigned int fuelAmount) {
    // Adds a new element to fuelCells to contain fuelAmount
    if(fuelCells.empty()) {
        fuelCells.insert(fuelCells.begin(), fuelAmount);
        cout << "Function addFuelCell(" << fuelAmount << ")\n        Fuel Cells EMPTY, inserting at beginning..." << endl;
    }
    else {
        cout << "Function addFuelCell(" << fuelAmount << ")\n        Fuel Cells NOT empty, inserting on end..." << endl;
        fuelCells.push_back(fuelAmount);
    }
}

bool RocketShip::removeFuelCell(unsigned int cellNumber) {
    // Removes the specified cell from fuelCells
    if(cellNumber < fuelCells.size()) {
        fuelCells.erase(fuelCells.begin()+cellNumber);
        return true;
    } else {
        return false;
    }
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount) {
    // add FuelAmount to the specified fuelCell (0-indexed)
    if(cellNumber < fuelCells.size()) {
        unsigned int temp = fuelCells.at(cellNumber);
        unsigned int total = temp + fuelAmount;
        fuelCells.erase(fuelCells.begin()+cellNumber);
        fuelCells.insert(fuelCells.begin()+cellNumber, fuelAmount);
        cout << "Function addFuelToCell(" << cellNumber << "," << fuelAmount << ") returned:\n        cellNumber(" << cellNumber << ") updated with fuelAmount(" << (temp+fuelAmount) << ")" << endl;
        cout << "\n        Fuel Request: " << fuelAmount << "\n        Current Cell Amount: " << temp << "\n        Cell Number: " << cellNumber << "\n        New Fuel Amount:" << (temp+fuelAmount) << endl;
        return true;
    } else {
        cout << "Function addFuelToCell(" << cellNumber << "," << fuelAmount << ")  returned:\n        cellNumber(" << cellNumber << ") greater than vector size(" << fuelCells.size() << "). Ignored." << endl;
        return false;
    }
}

string RocketShip::burnFuel(unsigned int cellNumber) {
    // Zero out/burn all of the fuel in the specified cell
    // Returns a string of asterisks representing the fuel in the cell
    cout << "Function burnFuel(" << cellNumber << ") with Vector Size(" << fuelCells.size() << ")" << endl;
        if(cellNumber < fuelCells.size()) {
            if(fuelCells.at(cellNumber) != 0) {
                unsigned int asterisk = fuelCells.at(cellNumber);
                stringstream ss;
                for(unsigned int i = 0; i < asterisk;i++) {
                    ss << "*";
                    
                }
            cout << "Function burnFuel("<<cellNumber<<") with input (" << cellNumber << ") returned:\n        Successful" << endl;
            
            cout << "        " << ss.str() << "\n";
            return ss.str();
            }
        } else {
            cout << "Function burnFuel("<<cellNumber<<") with input (" << cellNumber << ") returned:\n        burnFuel input outside range!!" << endl;
            return "";
        }
}