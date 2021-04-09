#include <iostream>
#include <process.h>
using namespace std;
void menu();
void menuRepeat();

class Complex_Numbers
{
public:
    int realPart = 0;
    int imaginaryPart = 0;

    void assignComplex();
    void displayComplex(int, int);
    void realPartOperation();
    void imaginaryPartOperation();
};
Complex_Numbers complex;
void Complex_Numbers::assignComplex()
{
    cout << "-------Assign The Complex Number In Form Of-(A+iB). -------" << endl;
    cout << "Enter the Real part of Complex Number-:" << endl;
    cin >> realPart;

    cout << "Enter the Imaginary part of Complex Number-:" << endl;
    cin >> imaginaryPart;

    cout << "Successfully Assigned!!" << endl;
}

void Complex_Numbers::displayComplex(int realPart, int imaginaryPart)
{
    if (realPart == 0 && imaginaryPart == 0)
    {
        cout << "Assign the Number First!" << endl;
        complex.assignComplex();
        menuRepeat();
    }
    if (imaginaryPart >= 0)
    {
        cout << "The Complex No. is-:" << realPart << "+" << imaginaryPart << "i" << endl;
        cout << endl;
    }
    else
    {
        cout << "The Complex No. is-:" << realPart << imaginaryPart << "i" << endl;
        cout << endl;
    }
}

void Complex_Numbers::realPartOperation()
{
    int number = 0;
    int sum = 0;
    int difference = 0;
    if (realPart == 0 && imaginaryPart == 0)
    {
        cout << "Assign the Number First!" << endl;
        complex.assignComplex();
        menuRepeat();
    }
    cout << "Enter a Number(Integer) to be added or subtracted-:" << endl;
    cin >> number;
    sum = realPart + number;
    difference = realPart - number;
    cout << "   Updated with Sum!   " << endl;
    complex.displayComplex(sum, imaginaryPart);
    cout << "   Updated with Difference!   " << endl;
    complex.displayComplex(difference, imaginaryPart);
}

void Complex_Numbers::imaginaryPartOperation()
{
    int number = 0;
    int sum = 0;
    int difference = 0;
    if (realPart == 0 && imaginaryPart == 0)
    {
        cout << "Assign the Number First!" << endl;
        complex.assignComplex();
        menuRepeat();
    }
    cout << "Enter a Number(Integer) to be added or subtracted-:" << endl;
    cin >> number;
    sum = imaginaryPart + number;
    difference = imaginaryPart - number;
    cout << "___Updated with Sum!___" << endl;
    complex.displayComplex(realPart, sum);
    cout << "___Updated with Difference!___" << endl;
    complex.displayComplex(realPart, difference);
}

void menu()
{
    char choice;
    cout << "**********COMPLEX NUMBER OPERATIONS**********" << endl;
    cout << endl;
    cout << "             MADE BY-: ABHINAV JHA" << endl;
    cout << "             ROLL NO.-: 04516412819" << endl;
    cout << endl;

    cout << "1.) Assign a Complex Number." << endl;
    cout << "2.) Display Complex Number." << endl;
    cout << "3.) Add or  Subtract Real Number." << endl;
    cout << "4.) Add or Subtract Imaginary Number." << endl;
    cout << "5.)Exit!" << endl;
    cout << " Enter your Choice." << endl;
    cin >> choice;
    switch (choice)
    {
    case '1':
        complex.assignComplex();
        menuRepeat();
    case '2':
        complex.displayComplex(complex.realPart, complex.imaginaryPart);
        menuRepeat();
    case '3':
        complex.realPartOperation();
        menuRepeat();
    case '4':
        complex.imaginaryPartOperation();
        menuRepeat();
    case '5':
        exit(0);
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
        menu();
    }
}
int main()
{
    menu();
    return 0;
}