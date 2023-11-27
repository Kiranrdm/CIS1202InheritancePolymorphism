// Truck.h
// Kiran BIswa
// CIS 1202 101
// November 22, 2023
// Define a Truck class that inherits from Vehicle.

// ***********************************************************************************************
// *** I was having errors with the code when implementing the constructors in the cpp file. *****
// *** I've left it in the code commented so you can see if it was wrong from my part. ***********
// ***********************************************************************************************

#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
#include <string>
using namespace std;

// truck class declaration
class Truck : public Vehicle {
private:
    // fields
    int towingCapacity;
    
public:
    // constructor
    // Truck(const string& make, int year, int towingCapacity);
    
    Truck() : Vehicle() {
        towingCapacity = 0;
    }
    // overloaded constructor
    Truck(string carMake, int carYear, int towingCap): Vehicle(carMake, carYear) {
        towingCapacity = towingCap;
    }
    
    // getter and setters
    void setTowingCapacity(int towingCapacity);
    int getTowingCapacity() const;
    
    // display method
    void displayInfo() const;
    
};

#endif /* Truck_h */
