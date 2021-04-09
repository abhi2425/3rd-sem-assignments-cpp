#include <iostream>
using namespace std;

//Function Prototype
float simpleInterest(int, int, float);

//Function Definition
float simpleInterest(int principal, int time, float rate = 3.5) //default value of rate=3.5%
{
    float simpleInterest = 0;
    simpleInterest = (principal * rate * time) / 100;
    return simpleInterest;
}

int main()
{
    int principal = 0;
    float rate = 0;
    int time = 0;
    float simpleinterest = 0;
    cout << "*******SIMPLE INTEREST CALCULATOR********";
    cout << endl;
    cout << "             MADE BY-: Nitesh Sharma" << endl;
    cout << "             ROLL NO.-: 01216412819" << endl;
    cout << endl;
    cout << "Enter The Principal Amount (Rs)-:" << endl;
    cin >> principal;
    cout << "Enter The Value Of Rate (%)-:" << endl;
    cin >> rate;
    cout << "Enter The Time Period (yr)-:" << endl;
    cin >> time;
    if (rate == 0)
    {
        simpleinterest = simpleInterest(principal, time);
        cout << "Default Value Of rate is set to 3.5%" << endl;
        cout << "Simple Interest-:"
             << "Rs " << simpleinterest << endl;
        return 0;
    }
    simpleinterest = simpleInterest(principal, time, rate);
    cout << "Simple Interest-:"
         << "Rs " << simpleinterest << endl;
    return 0;
}
