#include <iostream>

using namespace std;

int main()
{
    cout << "30. Write a C program to find and print the square of each one of the even values from 1 to a specified value." << endl;

    int x;
    cout << "Enter the last value:";
    cin >> x;
    for(int i=1;i<=x;i++){
        if((i%2)==0){
            cout << i << "^2=" << (i*i) << endl;
        };
    };
    return 0;
}
