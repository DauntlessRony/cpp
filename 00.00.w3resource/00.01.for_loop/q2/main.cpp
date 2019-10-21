#include <iostream>

using namespace std;

int main()
{
    cout << "2. Write a C program to find the sum of first 10 natural numbers." << endl;
    int j=0;
        for(int i=1;i<=10;i++){
        cout << i << " ";
        j=j+i;
    };
    cout << endl;

    cout << j << endl;


    return 0;
}
