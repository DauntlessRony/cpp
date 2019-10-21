#include <iostream>

using namespace std;

int main()
{
    cout << "29. Write a C program that read 5 numbers and sum of all odd values between them." << endl;
    int a[5];
    int snv=0;

    for(int i=0;i<5;i++){
        cout << "Enter number:";
        cin >> a[i];

        if(((a[i])%2)!=0){
                    snv+=a[i];
        };
    };
    cout << "\nSum of all odd values: " << snv << ".\n";


    return 0;
}
