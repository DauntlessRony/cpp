#include <iostream>

using namespace std;

int main()
{
    cout << "26. Write a C program that prints all even numbers between 1 and 50 (inclusive)." << endl;
    cout << "Even numbers between 1 to 50 (inclusive):\n";

    for(int i=1;i<=50;i++){
        if((i%2)==0){

            cout << i << " ";
        };
    };
    cout << endl;
    return 0;
}
