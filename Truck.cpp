// Truck.cpp
// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.

// ***********************************************************************************************
// *** I was having errors with the code when implementing the constructors in the cpp file. *****
// *** I've left it in the code commented so you can see if it was wrong from my part. ***********
// ***********************************************************************************************


#include "Truck.h"
#include <iostream>
using namespace std;

// constructor
//Truck::Truck(const string& make, int year, int towingCapacity) : Vehicle(make, year), towingCapacity(towingCapacity) {}

// getter and setters
// sets towing capacity
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}
// gets Towing capacity
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

// display method
void Truck::displayInfo() const {
    Vehicle::displayInfo(); // Call the base class method
    cout << "Towing Capacity: " << towingCapacity << endl;

}


