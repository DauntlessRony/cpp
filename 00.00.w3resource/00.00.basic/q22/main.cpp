#include <iostream>

using namespace std;

int main()
{
    cout << "22. Write a C program that read 5 numbers and sum of all odd values between them." << endl;
    int a[5],sum;

    for(int i=0;i<5;i++){
        cout << "Enter the value:";
        cin >> a[i];
        //cout << a[i];
        if(a[i]%2!=0){
                sum+=a[i];
        };
    };
    cout << "\nSum of all odd values: " << sum << endl;


    return 0;
}
