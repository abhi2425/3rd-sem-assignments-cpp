#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "Base Class-1.";
        cout << "This is a Vehicle" << endl;
    }
    void run(string vehicleType)
    {
        cout << vehicleType << " are meant to run." << endl;
        cout << endl;
    }
};

//base class
class Fare
{
public:
    Fare()
    {
        cout << "Base Class-2.";
        cout << "Fare of Vehicle." << endl;
    }
};

// first sub class
class Car : public Vehicle
{
public:
    Car()
    {
        cout << "Car is a vehicle." << endl;
    }
};

// second sub class
class Bus : public Vehicle, public Fare //Multiple Inheritance
{
public:
    Bus()
    {
        cout << "Bus is a vehicle and have quite high fare." << endl;
    }
};

// main function
int main()
{

    cout << "********** HYBRID INHERITANCE **********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;
    cout << "OUTPUT-:" << endl;

    // creating object of sub class will
    // invoke the constructor of base class
    Bus bus;
    bus.run("Buses");

    Car car;
    car.run("Cars");
    return 0;
}
