// Vehicle.cpp
// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.

#include "Vehicle.h"
#include <iostream>
using namespace std;

// Constructor
Vehicle::Vehicle(string& make, int year) : make(make), year(year) {}

// Getters and setters
// set make
void Vehicle::setMake(string& make) {
    this->make = make;
}

// get make
string Vehicle::getMake()  {
    return make;
}
/// set year
void Vehicle::setYear(int year) {
    this->year = year;
}
// get year
int Vehicle::getYear() {
    return year;
}

// Display method
void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << make << "\nYear Built: " << year << endl;
} 
