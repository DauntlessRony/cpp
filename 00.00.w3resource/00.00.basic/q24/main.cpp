#include <iostream>

using namespace std;

int main()
{
    cout << "24. Write a C program that reads two integers and checks if they are multiplied or not." << endl;
    int a,b,t;
    cout << "Input the first number:";
    cin >> a;
    cout << "Input the second number:";
    cin >> b;

    if(b>a){
        t=b;
        b=a;
        a=b;
    };
    if((a%b)==0){

    	printf("\nMultiplied!\n");
	}
	else
	{
		printf("\nNot Multiplied!\n");
	};
    return 0;
}
