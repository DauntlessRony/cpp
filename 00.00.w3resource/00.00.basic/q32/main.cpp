#include <iostream>

using namespace std;

int main()
{
    cout << "32. Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3." << endl;
    int d;
    cout << "Input an integer:";
    cin >> d;
    cout << "\nExpected Output:";

    for(int i=1;i<=100;i++){

        if((i%d)==3){
            cout << i << endl;
        };
    };

    return 0;
}
