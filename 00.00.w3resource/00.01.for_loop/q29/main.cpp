#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "29. Write a C program to check whether a given number is an armstrong number or not." << endl;
    cout<<"Input a number:";
    int n; cin>>n;
    int r,tmp,sum=0;
    //cout<<(153/10);//n=15
    //cout<<(15/10);//n=1
    //cout<<(153%10);//n=1
    cout<<endl;
    for(tmp=n;n!=0;n=n/10){
        r=(n%10);
        sum=sum+(r*r*r);
        cout<<"r :"<<r<<"pow(r,3):"<<(r*r*r)<<" Sum:"<<sum<<endl;
    };
    if(sum==n){
        cout<<sum<<" is an Armstrong number.\n";
    }else{
        cout<<sum<<" is not an Armstrong number.\n";
    };


    return 0;
}
