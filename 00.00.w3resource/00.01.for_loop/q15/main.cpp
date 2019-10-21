#include <iostream>

using namespace std;

int main()
{
    cout << "15. Write a C program to calculate the factorial of a given number." << endl;
    cout <<"Input the number : ";
    int n,f=1;cin >>n;

    for(int i=1;i<=n;i++){
        f=f*i;
    };

    cout <<"The Factorial of "<<n<<" is: "<<f;

    return 0;
}
