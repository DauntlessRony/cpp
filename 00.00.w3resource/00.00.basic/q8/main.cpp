#include <iostream>

using namespace std;

int main()
{
    cout << "8. Write a C program to convert specified days into years, weeks and days.\nNote: Ignore leap year." << endl;

    int NumberOfDays=1329;

    cout << "Years: "<< (NumberOfDays/365) << endl;
    //cout << "Remain Days: "<< (NumberOfDays%365) << endl;
    cout << "Weeks: "<< (NumberOfDays%365/7) << endl;
    //cout << "Test: "<< ((NumberOfDays/365)*365) << endl;
    cout << "Days: "<< (NumberOfDays - (((NumberOfDays/365)*365) + ((NumberOfDays%365/7)*7))) << endl;

    return 0;
}
