#include <iostream>

using namespace std;

int main()
{
    cout << "20. Write a program in C to display the pattern like a pyramid using asterisk and each row contain an odd number of asterisks" << endl;
    cout<<"Input number of rows for this pattern :";
    int n,k=1;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
          cout<<" ";
          //cout<<"*";
        };
        for(int j=1;j<=((2*i)-1);j++){
          cout<<"*";
        };
        cout<<endl;
    };

    return 0;
}
