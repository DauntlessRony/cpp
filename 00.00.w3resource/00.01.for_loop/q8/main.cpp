#include <iostream>

using namespace std;

int main()
{
    cout << "8. Write a program in C to display the n terms of odd natural number and their sum ." << endl;

    cout <<"Input number of terms :";
    int n,o,s=0;
    cin >>n;
    for(int i=1;i<=n;i++){
        o=(2*i)-1;
        cout<<"The Odd numbers are:"<<o<<endl;
        s=s+o;

    };
    cout <<"The Sum of odd Natural Number upto "<<n<<" terms : "<<s<<".";

    return 0;
}
