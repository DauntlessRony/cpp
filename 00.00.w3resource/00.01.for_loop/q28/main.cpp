#include <iostream>

using namespace std;

int main()
{
    cout << "28. Write a c program to find the perfect numbers within a given number of range." << endl;

    cout<<"Input the starting range or number :";
    int s; cin>>s;
    cout<<"\nInput the ending range of number :";
    int e; cin>>e;

    cout<<"\nThe Perfect numbers within the given range :\n";

    for(int i=s;i<=e;i++){
        int sum=0;
        for(int j=1;j<i;j++){
            if((i%j)==0){
                    //cout<<"j:"<<j<<" ";
                    sum+=j;
                    //cout<<"\nSum:"<<sum;
            };
        };
        if(sum==i){
            cout<<"\nPerfect Number:"<<i;
        };

    };

    cout<<endl;
    return 0;
}
