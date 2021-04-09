#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void run() //virtual function
    {
        cout << "Vehicles are meant to run" << endl;
    }
};
class Car : public Vehicle
{
public:
    void run()
    {
        cout << "Car runs at high speed." << endl;
    }
};
class Bike : public Vehicle
{
public:
    void run()
    {
        cout << "Bike runs at moderate speed " << endl;
    }
};
int main()
{
    cout << "********** POLYMORPHISM USING VIRTUAL FUNCTION **********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;
    cout << "OUTPUT-:" << endl;
    Vehicle *vehicle;
    Car car;
    Bike bike;

    vehicle = &car;
    vehicle->run();

    vehicle = &bike;
    vehicle->run();

    return 0;
}