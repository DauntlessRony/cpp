#include <iostream>

using namespace std;

int main()
{
    cout << "25. Write a C program that reads an integer between 1 and 12 and print the month of the year in English." << endl;
    int month;
    cout << "Input a number between 1 to 12 to get the month name:";
    cin >> month;

    switch(month) {
    case 1 : cout << "January\n" << endl; break;
    case 2 : cout << "February\n" << endl; break;
    case 3 : cout << "March\n" << endl; break;
    case 4 : cout << "April\n" << endl; break;
    case 5 : cout << "May\n" << endl; break;
    case 6 : cout << "June\n" << endl; break;
    case 7 : cout << "July\n" << endl; break;
    case 8 : cout << "August\n" << endl; break;
    case 9 : cout << "September\n" << endl; break;
    case 10 : cout << "October\n" << endl; break;
    case 11 : cout << "November\n" << endl; break;
    case 12 : cout << "December\n" << endl; break;
    default : cout << "Input a number between 1 to 12." << endl;break;
    };


    return 0;
}
