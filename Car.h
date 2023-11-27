// Car.h
// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.
// ***********************************************************************************************
// *** I was having errors with the code when implementing the constructors in the cpp file. *****
// *** I've left it in the code commented so you can see if it was wrong from my part. ***********
// ***********************************************************************************************

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
using namespace std;

// car class declaration
class Car : public Vehicle {
private:
    // fields
    int numDoors;
    
public:
    // Car(const string& make, int year, int numDoors);************
    // default constructor
    Car() : Vehicle() {
        numDoors = 0;
    }
    // overloaded constructor
    Car(string carMake, int carYear, int carDoors): Vehicle(carMake, carYear) {
        numDoors = carDoors;
    }
    
    // getters and setters
    // set number of doors
    void setNumDoors(int numDoors);
    // get number of doors
    int getNumDoors() const;
    
    // display method
    void displayInfo() const;
    
};

#endif /* Car_h */
