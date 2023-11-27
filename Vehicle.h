// Vehicle.h
// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

// Vehicle class declaration
class Vehicle {
private:
    // fields
    string make;    // manufacturer of the vehicle
    int year;       // vehicle year
    
public:
    // default constructor
    Vehicle();
    // constructor
    Vehicle(string &make, int year);

    // member function
    void setMake(string &make);     // set make
    string getMake();               // get make
    
    void setYear(int year);         // set year
    int getYear();                  // get year



    void displayInfo() const; // display method
    
};

#endif /* Vehicle_h */
