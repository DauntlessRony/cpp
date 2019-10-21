#include <iostream>

using namespace std;

int main()
{
    cout << "21. Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80." << endl;

    int a;
    cout << "Input an integer:";
    cin >> a;

    if(a >=0 && a <= 20)
	{
		cout << "Range [0, 20]" << endl;
	}
	else if(a >=21 && a <= 40)
	{
		cout << "Range [21,40]" << endl;
	}
	else if(a >=41 && a <= 60)
	{
		cout << "Range [41,60]" << endl;
	}
	else if(a >61 && a <= 80) {

		cout << "Range [61,80]" << endl;
	}
	else
	{
	cout << "Outside the range" << endl;
	};

    return 0;
}
