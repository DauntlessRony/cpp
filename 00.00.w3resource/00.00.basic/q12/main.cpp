#include <iostream>

using namespace std;

int main()
{
    cout << "12. Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month." << endl;

    string Employees_ID;
    cout << "\nInput the Employees ID(Max. 10 chars): ";
    cin >> Employees_ID;

    float working_hrs;
    cout << "\nInput the working hrs: ";
    cin >> working_hrs;

    float Salary_amount_per_hr;
    cout << "\nSalary amount/hr: ";
    cin >> Salary_amount_per_hr;

    float a = working_hrs*Salary_amount_per_hr;

    cout << "\nEmployees ID = " << Employees_ID;
    cout << "\nSalary = " << a << endl; // (float)(working_hrs*Salary_amount_per_hr)

    return 0;
}
