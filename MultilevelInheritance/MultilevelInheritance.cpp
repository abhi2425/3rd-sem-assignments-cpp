#include <iostream>
using namespace std;

// base class
class Vehicle
{
public:
    Vehicle()
    {
        cout << "Base Class Constructor.";
        cout << "This is a Vehicle" << endl;
    }
    void run()
    {
        cout << "Vehicles are meant to run";
    }
};

class fourWheeler : public Vehicle
{
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles" << endl;
    }
};

// sub class derived from two base classes
class Car : public fourWheeler //Multilevel Inheritance
{
public:
    Car()
    {
        cout << "Car have 4 Wheels" << endl;
    }
};

// main function
int main()
{

    cout << "********** MULTILEVEL INHERITANCE **********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;
    cout << "OUTPUT-:" << endl;

    //creating object of sub class will
    //invoke the constructor of base classes
    Car car;

    //Accessing base class method using sub class object
    car.run();
    return 0;
}
