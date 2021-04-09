#include <iostream>
using namespace std;

// first base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "Base Class-1.";
        cout << "This is a Vehicle" << endl;
    }
};

// second base class
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "Base Class-2.";
        cout << "This is a four wheeler Vehicle" << endl;
    }
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler //Multiple Inheritance
{
public:
    Car()
    {
        cout << "Car is a four wheeler vehicle" << endl;
    }
};

// main function
int main()
{
    cout << "********** MULTIPLE INHERITANCE **********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;
    cout << "OUTPUT-:" << endl;

    // creating object of sub class will
    // invoke the constructor of base classes
    Car car;
    return 0;
}
