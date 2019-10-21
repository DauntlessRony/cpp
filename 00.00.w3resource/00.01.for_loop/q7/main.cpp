#include <iostream>

using namespace std;

int main()
{
    cout << "7. Write a program in C to display the multipliaction table vertically from 1 to n." << endl;
    cout <<"Input the number (Table to be calculated) : ";
    int n,m=0;
    cin >>n;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=n;j++){
           m=j*i;
        cout <<j<<"*"<<i<<"="<<m<<"\t";

        };
    cout << endl;
    };


    return 0;
}
