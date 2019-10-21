#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "4. Write a program in C to read 10 numbers from keyboard and find their sum and average." << endl;
    cout << "Input the 10 numbers :" << endl;
    int a[10],s=0;
    float avg;
    for(int i=0;i<10;i++){
            cout << "Number-"<<i<<":";
            cin >> a[i];
            s=s+a[i];
    };
    avg=float(s)/10;
    cout <<"\nThe sum of 10 no is :"<<s<< endl;
    cout <<"The Average is :"<< fixed<<setprecision(6)<<avg<< endl;
    return 0;
}
