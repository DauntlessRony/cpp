#include <iostream>

using namespace std;

int main()
{
    cout << "6. Write a C program to compute the perimeter and area of a circle with a radius of 6 inches." << endl;

    float radius=6;

    cout << "Perimeter of the Circle = " << (2*(22/7)*radius) << " inches" << endl;
    cout << "Area of the Circle = " << ((22/7)*(radius*radius)) << " square inches" << endl;

    return 0;
}
