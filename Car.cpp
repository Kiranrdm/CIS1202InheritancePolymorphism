// Car.cpp
// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.
// ***********************************************************************************************
// *** I was having errors with the code when implementing the constructors in the cpp file. *****
// *** I've left it in the code commented so you can see if it was wrong from my part. ***********
// ***********************************************************************************************

#include "Car.h"
#include <iostream>
using namespace std;

// constructor
// Car::Car(string carMake, int carYear, int carDoors) : Vehicle(carMake, carYear), numDoors(numDoors) {}

// getters and setters
// set number of doors
void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}
// get number of doors
int Car::getNumDoors() const {
    return numDoors;
}

// display method
void Car::displayInfo() const {
    Vehicle::displayInfo(); // Call the base class method
    cout << "Number of Doors: " << numDoors << endl;
}

