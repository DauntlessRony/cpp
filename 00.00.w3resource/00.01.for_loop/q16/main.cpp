#include <iostream>

using namespace std;

int main()
{
    cout << "16. Write a program in C to display the n terms of even natural number and their sum." << endl;
    cout <<"Input the number : ";
    int n,e=1;cin >>n;
    cout <<"The even numbers are :";
    for(int i=1;i<=n;i++){
        e=(2*i);
        cout << e <<" ";
        e+=e;
    };

    cout <<"\nThe Sum of even Natural Number upto "<<n<<" terms : "<<e;

    return 0;
}
