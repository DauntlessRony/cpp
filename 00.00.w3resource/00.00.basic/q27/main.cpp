#include <iostream>

using namespace std;

int main()
{
    cout << "27. Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers." << endl;
    int a[5];
    int pn=0;
    int nn=0;
    for(int i=0;i<5;i++){
        cout << "Enter number:";
        cin >> a[i];


        if((a[i])>0){
                        pn=pn+1;

        }
        else if((a[i])<0){
                    nn=nn+1;

        };
    };
    cout << "\nNumber of positive numbers:" << pn << ".";
    cout << "\nNumber of negative numbers:" << nn << ".\n";

    return 0;
}
