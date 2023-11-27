// Kiran Biswa
// CIS 1202 101
// November 22, 2023
// Develop a base and derived classes to represent different types of vehicles.  Then program a short driver to these classes.
// **********************************************
// ****************** ON XCODE ******************
// **********************************************

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // ***************
    // *** Vehicle ***
    // ***************
    string manufacturer;    // to store vehicle make
    int yearBuilt;          // to store vehicle year
    cout << "Vehicle \n";
    cout << "Enter the manufacturer: ";
    getline(cin,manufacturer);
    
    cout << "Enter the year build: ";
    cin >> yearBuilt;
    
    cout << "Vehicle Information: \n";
    Vehicle vehicle(manufacturer, yearBuilt);
    vehicle.displayInfo(); 
    cin.ignore();
    
    // ***********
    // *** Car ***
    // ***********
    int doors;
    cout << "\nCar \n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year build: ";
    cin >> yearBuilt;
    
    cout << "Enter the number of doors: ";
    cin >> doors;
    
    cout << "Car Information: \n";
    Car car(manufacturer, yearBuilt, doors);
    car.displayInfo();
    cin.ignore();
    
    // *************
    // *** Truck ***
    // *************
    int towCapacity;
    cout << "\nTruck \n";
    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    
    cout << "Enter the year build: ";
    cin >> yearBuilt;
    
    cout << "Enter the towing capacity: ";
    cin >> towCapacity;
    
    cout << "Truck Information: \n";
    Truck truck(manufacturer, yearBuilt, towCapacity);
    truck.displayInfo();
    

    return 0;
}
