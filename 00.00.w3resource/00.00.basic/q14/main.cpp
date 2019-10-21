#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "14. Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point)." << endl;
    int a;
    float b;
   // float c;
    cout << "Input total distance in km: ";
    cin >> a;
    cout << "Input total fuel spent in liters: ";
    cin >> b;
   // c=(a/b);
    // std::cout << std::fixed;
    cout << "\nAverage consumption (km/lt) "<< fixed << setprecision(3) << (a/b) << "." << endl;
    //cout << c;
    //printf("%.3f",(c));
    //Average consumption (km/lt) 70.000
    return 0;
}
