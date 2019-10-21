#include <iostream>

using namespace std;

int main()
{
    cout << "5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches." << endl;

    int height,width;

    cout << "Enter the height : ";
    cin >> height;
    cout << "Enter the width : ";
    cin >> width;
    cout << "\nPerimeter of the rectangle = " << 2*(height+width) << " inches" << endl;
    cout << "Area of the rectangle = " << (height*width) << " square inches" << endl;




    return 0;
}
