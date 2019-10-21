#include <iostream>

using namespace std;

int main()
{
    cout << "25. Write a program in C to display the n terms of square natural number and their sum." << endl;
    cout << "Input the number of terms :";
    int n; cin >>n;
    cout << "\nThe square natural upto"<<n<<" terms are :\n";
    for(int i=1;i<=n;i++){
        cout << i*i << endl;
    };

    return 0;
}
