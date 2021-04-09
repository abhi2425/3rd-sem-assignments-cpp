#include <iostream>
using namespace std;

class Vehicle //Operator Overloading Using Friend Function
{
private:
    string m_vehicle;

public:
    Vehicle(string vehicleType)
    {
        m_vehicle = vehicleType;
    }

    friend Vehicle operator+(Vehicle &vehicle, string type); //friend function

    string displayVehicle()
    {
        cout << "Operator Overloading." << endl;
        cout << "Display Vehicle using friend function." << endl;
        return m_vehicle;
    }
};

Vehicle operator+(Vehicle &vehicle, string type)
{
    return vehicle.m_vehicle + " " + type;
}

class Car //Operator Overloading Using Member function
{
private:
    string m_carType;

public:
    Car(string carType)
    {
        m_carType = carType;
    }
    Car operator+(string model); //Member Function

    string displayCar()
    {
        cout << "Operator Overloading." << endl;
        cout << "Display Car using member function." << endl;
        return m_carType;
    }
};

Car Car::operator+(string model)
{
    return m_carType + " " + model;
}
int main()
{
    cout << "********** OPERATOR OVERLOADING **********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;
    cout << "OUTPUT-:" << endl;

    Vehicle vehicle("Four Wheeler");
    Vehicle vehicle2 = vehicle + "Car";
    cout << "I have a " << vehicle2.displayVehicle() << endl;

    cout << endl;

    Car car("Porsche");
    Car car2 = car + "718 Cayman T.Explore.";
    cout << "I have a " << car2.displayCar() << endl;
    return 0;
}