#include <iostream>

using namespace std;

int main()
{
    cout << "17. Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row." << endl;
    cout <<"Enter the number of rows:";
    int n,s;cin>>n;
    s=(2*n)-1;
    for(int i=1;i<=n;i++){
        for(int k=s;k>=1;k--){
            cout << " ";
        };s--;
        for(int j=1;j<=i;j++){
            cout << i<<" ";
        };
        cout<<endl;
    };

    return 0;
}
