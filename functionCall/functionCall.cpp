#include <iostream>
#include <process.h>
using namespace std;
void menu();
void menuRepeat();
void callByValue(int a, int b)
{
    a = 10;
    b = 20;
    cout << "Value Of A inside function-:" << a << endl;
    cout << "Value Of B inside function-:" << b << endl;
}
void callByReference(int *a, int *b)
{
    *a = 10;
    *b = 20;
    cout << "Value Of A inside function-:" << *a << endl;
    cout << "Value Of B inside function-:" << *b << endl;
}

void functionCall()
{
    int a = 11, b = 21;
    cout << "Call By Value---->" << endl;
    //Any change in formal parameter does not reflect in actual parameter.
    cout << "  **Before Call!!**" << endl;
    cout << "  Value of A=" << a << endl;
    cout << "  Value of B=" << b << endl;
    callByValue(a, b);
    cout << "  **After call!!**" << endl;
    cout << "  Value of A=" << a << endl;
    cout << "  Value of B=" << b << endl;
    cout << endl;

    cout << "Call By Reference---->" << endl;
    //Any change in formal parameter  reflects change in actual parameter.
    cout << "  **Before Call!!**" << endl;
    cout << "  Value of A=" << a << endl;
    cout << "  Value of B=" << b << endl;
    callByReference(&a, &b);
    cout << "  **After call!!**" << endl;
    cout << "  Value of A=" << a << endl;
    cout << "  Value of B=" << b << endl;
}
void swapNumbers(int *number1, int *number2) //Swapping numbers
{
    int temp;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
    cout << "After swapping!!" << endl;
    cout << "First Number-:" << *number1 << endl;
    cout << "Second Number-:" << *number2 << endl;
}

void menu()
{
    char choice;
    int number1, number2;
    cout << "******CALL BY VALUE  --Vs--  CALL BY REFERENCE******";
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;

    cout << "1.) Function calling using Value and Reference" << endl;
    cout << "2.) Swap Two Numbers Using Call By Reference." << endl;
    cout << "3.) Exit!" << endl;
    cout << " Enter your Choice." << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        functionCall();
        menuRepeat();
    case '2':
        cout << "Enter First number-:" << endl;
        cin >> number1;
        cout << "Enter Second Number-:" << endl;
        cin >> number2;
        swapNumbers(&number1, &number2);
        menuRepeat();
    case '3':
        exit(0);
    default:
        cout << "Wrong Input!!";
    }
}
void menuRepeat()
{
    char ch;
    cout << "Want to continue!! y/n-: ";
    cin >> ch;
    if (ch == 'y')
    {
        menu();
    }
    else if (ch == 'n')
    {
        cout << "Bye!!!";
        exit(0);
    }
    else
    {
        cout << "Wrong Input!!" << endl;
        menuRepeat();
    }
}

int main()
{
    menu();
    return 0;
}