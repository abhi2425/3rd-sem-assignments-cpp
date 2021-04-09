#include <iostream>
using namespace std;

class ContructorsDemo
{
    int num1, num2;
    int *num3;

public:
    ContructorsDemo() //Default Constructor
    {
        cout << "I am Default Constructor!!" << endl;
        num1 = num2 = 5; //sets default value of num1 and num2 =5
        cout << "Default of Value Number-1=" << num1 << endl;
        cout << "Default of Value Number-2=" << num2 << endl;
    }
    ContructorsDemo(int a) //Parameterized Constructor with one argument
    {
        cout << "I am Parameterized Constructor with single argument!!" << endl;
        num1 = a;
        num2 = 5;
        cout << "Number-1=" << num1 << endl;
        cout << "Default of Value Number-2=" << num2 << endl;
    }
    ContructorsDemo(int a, int b) //Parameterized Constructor with two argument
    {
        cout << "I am Parameterized Constructor with Two argument!!" << endl;
        num1 = a;
        num2 = b;
        cout << "Number-1=" << num1 << endl;
        cout << "Number-2=" << num2 << endl;
    }
    ContructorsDemo(const ContructorsDemo &object) //Copy Constructor -->Shallow Cloning
    {
        cout << "I am Copy Constructor!!" << endl;
        num1 = object.num1;
        num2 = object.num2;
        cout << "Copied Value of Number-1=" << num1 << endl;
        cout << "Copied Value of number-2=" << num2 << endl;
    }
    ContructorsDemo(int a, int b, int c) //Dynamic Constructor
    {
        cout << "I am Dynamic Constructor!!" << endl;
        num1 = a;
        num3 = new int(); //Memory allocated Dynamically
        *num3 = c;
        num2 = *num3 + b;
        cout << "Number-1=" << num1 << endl;
        cout << "Dynamic Value of Number-3=" << *num3 << endl;
        cout << "Number-2=" << b << "+" << *num3 << "=" << num2 << endl;
    }

    void addition()
    {
        int sum = 0;
        sum = num1 + num2;
        cout << "Sum is-:" << sum << endl;
        cout << endl;
    }
};
int main()
{
    cout << "******* TYPES OF CONSTRUCTORS ********";
    cout << endl;
    cout << "             MADE BY-: Nitesh Sharma" << endl;
    cout << "             ROLL NO.-: 01216412819" << endl;
    cout << endl;

    ContructorsDemo defaultObject;
    defaultObject.addition(); //For Default Constructor

    ContructorsDemo parameterizedObject_1arg(7);
    parameterizedObject_1arg.addition(); //For Parameterized constructor with one arg

    ContructorsDemo parameterizedObject_2args(9, 19);
    parameterizedObject_2args.addition(); //For Parameterized Constructor with 2 args

    ContructorsDemo copyObject(parameterizedObject_2args);
    copyObject.addition(); //for Copy Constructor

    ContructorsDemo dynamicObject(26, 12, 31);
    dynamicObject.addition();

    return 0;
}
