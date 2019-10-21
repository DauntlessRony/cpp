#include <iostream>

using namespace std;

int main()
{
    cout << "28. Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values." << endl;
    int a[5];
    int pn=0;
    int pv=0;
    int nn=0;
    for(int i=0;i<5;i++){
        cout << "Enter number:";
        cin >> a[i];


        if((a[i])>0){
                        pn=pn+1;
                        pv+=a[i];

        }
        else if((a[i])<0){
                    nn=nn+1;

        };
    };
    cout << "\nNumber of positive numbers:" << pn << ".";
    cout << "\nAvarage of positive numbers:" << fixed << setprecision(2) << pv/pn << ".";
    cout << "\nNumber of negative numbers:" << nn << ".\n";

    return 0;
}
