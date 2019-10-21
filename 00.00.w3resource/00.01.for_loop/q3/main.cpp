#include <iostream>

using namespace std;

int main()
{
    cout << "3. Write a program in C to display n terms of natural number and their sum." << endl;

    int i,n,s=0;

    cout << "Enter the last value:";
    cin >> n;
    cout << "\nThe first "<<n<<" natural number is :" << endl;
    for(i=1;i<=n;i++){
        cout << i << " ";
        s=s+i;
    };
    cout <<"\nThe Sum of Natural Number upto "<<n<<" terms :" <<s;
    return 0;
}
