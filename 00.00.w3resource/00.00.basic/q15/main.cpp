#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "15. Write a C program to calculate the distance between the two points." << endl;
    int x1,y1,x2,y2;
    cout << "Input x1: ";
    cin >> x1;
    cout << "Input y1: ";
    cin >> y1;
    cout << "Input x2: ";
    cin >> x2;
    cout << "Input y2: ";
    cin >> y2;

    //cout << (pow((x1-x2),2)) << endl;
    //cout << ((y1-y2)) << endl;

    cout << "\nDistance between the said points: " << sqrt((pow((x1-x2),2))+(pow((y1-y2),2))) << "."<< endl;

    return 0;
}
