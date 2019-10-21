#include <iostream>

using namespace std;

int main()
{
    cout << "33. Write a C program that accepts some integers from the user and find the highest value and the input position." << endl;

    int a[3];
    int max=0;
    int pos=0;
    for(int i=0;i<3;i++){
        cout << "Enter the value of array a["<<i<<"]:";
        cin >> a[i];
        cout << "The value of array a["<<i<<"] is="<<a[i]<<"\n";

        if(a[i] > max) {
			max = a[i];
			pos = i;
		};
    };
    cout << "Highest value: \n" << max << endl;
    cout << "Position value: \n" << pos << endl;


    return 0;
}
