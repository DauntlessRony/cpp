#include <iostream>

using namespace std;

int main()
{
    cout << "31. Write a C program to check a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0." << endl;
    int x;
    cout << "Enter the value:";
    cin >> x;

    if(((x>=0) && ((x%2)==0))){
        cout << "Positive Even" << endl;
    }
    else if(((x>=0) && ((x%2)!=0))){
        cout << "Positive Odd" << endl;
    }
    else if(((x<0) && ((x%2)==0))){
        cout << "Negative Even" << endl;
    }
    else if(((x<0) && ((x%2)!=0))){
        cout << "Negative Odd" << endl;
    };

    return 0;
}
