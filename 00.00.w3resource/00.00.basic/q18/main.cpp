#include <iostream>

using namespace std;

int main()
{
    cout << "18. Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days." << endl;
    int a=2535,y,m,d;
    cout << "Input no. of days: ";
    //cin >> a;
    y=a/365;
    int rd=a-(y*365);
    m=(rd)/30;
    d=(a-((y*365)+(m*30)));
    cout << endl;
    cout << y << " Year(s)" << endl;
    cout << m << " Month(s)" << endl;
    cout << d << " Day(s)" << endl;

    return 0;
}
