#include <iostream>

using namespace std;

int main()
{
    cout << "13. Write a C program that accepts three integers and find the maximum of three." << endl;
    int a,b,c;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Enter the third value: ";
    cin >> c;
    cout << endl;

    if(a>b && a>c){
        cout << a << " is greater among " << b << " and " << c << "." << endl;
    }else if(b>c && b>a){
        cout << b << " is greater among " << c << " and " << a << "." << endl;
    }else{
        cout << c << " is greater among " << a << " and " << b << "." << endl;
    };
    return 0;
}
