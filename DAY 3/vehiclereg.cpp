/*Create a Vehicle class with registration number, owner name, and vehicle type. Use 
constructors to initialize objects. Maintain a static member to count the total number of 
registered vehicles. Store multiple vehicles in an array of objects and display all records.
*/

#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
private:
    int registrationNumber;
    string ownerName;
    string vehicleType;

    // Static data member
    static int totalVehicles;

public:

    // Constructor
    Vehicle(int registrationNumber, string ownerName, string vehicleType)
    {
        this->registrationNumber = registrationNumber;
        this->ownerName = ownerName;
        this->vehicleType = vehicleType;

        totalVehicles++;
    }

    // Display vehicle details
    void display()
    {
        cout << "\nRegistration Number: " << registrationNumber;
        cout << "\nOwner Name: " << ownerName;
        cout << "\nVehicle Type: " << vehicleType << endl;
    }

    // Static member function
    static void displayTotalVehicles()
    {
        cout << "\nTotal Registered Vehicles: " << totalVehicles;
    }
};

// Initialize static member
int Vehicle::totalVehicles = 0;


int main()
{
    // Array of objects
    Vehicle vehicles[3] =
    {
        Vehicle(101, "Rajan", "Car"),
        Vehicle(102, "Amit", "Bike"),
        Vehicle(103, "Rahul", "Truck")
    };

    // Display all records
    for(int i = 0; i < 3; i++)
    {
        vehicles[i].display();
    }

    // Display total vehicles
    Vehicle::displayTotalVehicles();

    return 0;
}