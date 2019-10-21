#include <iostream>

using namespace std;

int main()
{
    cout << "21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...]." << endl;
    cout<<"(10(10n-1)-9n)/9"<<endl;

    cout<<"Input the number or terms :";
    int n,k=9,sum=0;
    cin>>n;
    float numerator=1,denominator=1,fraction=1;

    for(int i=1;i<=n;i++){
        numerator=((10*((10*i)-1))-(9*i));
        cout<<"\nnumaretor: "<<numerator;
        denominator=9;
        cout<<"\ndenominator: "<<denominator;
//        for(int j=1;j<=i;j++){
//            cout<<k<<"";
//        };
        cout<<" ";
    };

    //cout <<"\nThe sum of the saries = "<<sum;

    return 0;
}
