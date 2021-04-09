#include <iostream>
using namespace std;

//Function Prototypes
float powerFunction(int, int);
double powerFunction(double, int);

//Function Definition
float powerFunction(int m, int n) // m=base(Integer) and n= power
{
    float result = 1.0;
    cout << "Base No. Of datatype (int)" << endl;

    if (n < 0)
    {
        int power = -n;
        float result = 1.0;
        for (int i = 1; i <= power; i++)
        {
            result *= m;
        }
        return 1 / result;
    }

    for (int i = 1; i <= n; i++)
    {
        result *= m;
    }
    return result;
}

double powerFunction(double m, int n) // m=base(Double) and n= power
{
    double result = 1.00;
    cout << "Base No. Of datatype (double)" << endl;
    if (n < 0)
    {
        int power = -n;
        float result = 1.0;
        for (int i = 1; i <= power; i++)
        {
            result *= m;
        }
        return 1 / result;
    }

    for (int i = 1; i <= n; i++)
    {
        result *= m;
    }
    return result;
}

int main()
{
    double baseDouble = 0;
    int baseInt = 0;
    int power = 0;

    cout << "*******(Function Overloading)********";
    cout << endl;
    cout << "             MADE BY-: Nitesh Sharma" << endl;
    cout << "             ROLL NO.-: 01216412819" << endl;
    cout << endl;

    cout << "Enter Base Value(Integer)-:" << endl;
    cin >> baseInt;
    cout << "Enter Base Value(Double)-:" << endl;
    cin >> baseDouble;
    cout << "Enter power Value-:" << endl;
    cin >> power;

    if ((baseDouble == 0 || baseInt == 0) && power == 0)
    {
        cout << "Undefined value for base=0 and power=0" << endl;
        return 0;
    }
    cout << "Result Of " << baseInt << "^(" << power << ")-: "
         << powerFunction(baseInt, power)
         << endl;
    cout << "Result Of " << baseDouble << "^(" << power << ")-: "
         << powerFunction(baseDouble, power)
         << endl;
    return 0;
}