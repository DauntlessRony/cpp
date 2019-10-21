#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    cout << "20. Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots." << endl;
    float a,b,c;
    cout << "Input the first number(a):";
    cin >> a;
    cout << "Input the second number(b):";
    cin >> b;
    cout << "Input the third number(c):";
    cin >> c;

    cout << "Root1 = " << fixed << setprecision(5) << (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a) << endl;
    cout << "Root2 = " << fixed << setprecision(5) << (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a) << endl;
    return 0;
}
