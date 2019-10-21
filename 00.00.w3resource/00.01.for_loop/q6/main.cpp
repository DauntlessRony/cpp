#include <iostream>

using namespace std;

int main()
{
    cout << "6. Write a program in C to display the multiplication table of a given integer." << endl;
    cout <<"Input the number (Table to be calculated) : ";
    int n,m=0;
    cin >>n;
    for(int i=1;i<=10;i++){
           m=n*i;
        cout <<n<<"*"<<i<<"="<<m<<"\n";
    };

    return 0;
}
