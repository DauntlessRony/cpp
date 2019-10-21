#include <iostream>

using namespace std;

int main()
{
    cout << "19. Write a program in C to display the n terms of harmonic series and their sum." << endl;
    cout <<"\nInput the number of terms :";
    int n; cin>>n;float numerator=1,denominator=1,fraction=1,sum=1;
    for(int i=1;i<=n;i++){
        //cout <<"\ndenominator :"<<i;
        //cout <<"\nSerise :"<<numerator<<"/"<<i;
        cout <<numerator<<"/"<<i<<" + ";
        sum+=(numerator/i);
    };
    cout <<"\nSum of Series upto 5 terms : "<<sum<<endl;
    return 0;
}
