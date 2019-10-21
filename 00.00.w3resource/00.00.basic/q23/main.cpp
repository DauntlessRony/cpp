#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "23. Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid." << endl;
    float a,b,c;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    cout << "Enter the value of c:";
    cin >> c;

    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
        cout << "Perimeter = " << fixed << setprecision(1)<< (a+b+c) << endl;
    };
    return 0;
}
