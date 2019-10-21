#include <iostream>
#include <math.h>
#include <cstdlib>


using namespace std;

int main()
{
    cout << "5. Write a program in C to display the cube of the number upto given an integer." << endl;

    cout <<"Input number of terms :";
    int n;
    cin >> n;
    int p;
    int *a;

    a = (int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        a[i]=i;
        p=pow(a[i],3);
            cout <<"\nNumber is : "<<a[i]<<" and cube of the "<<a[i]<<" is :"<<p<<"\n";

    };


    return 0;
}
