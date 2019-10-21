#include <iostream>

using namespace std;

int main()
{
    cout << "17. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds." << endl;
    int a=25300,h,m,s;
    cout << "Input seconds: ";
//    cin >> a;

	h = (a/3600);
	m = (a -(3600*h))/60;
	s = (a -((3600*h)+(m*60)));

    cout << "H:M:S - "<< h<<":"<<m<<":"<<s << endl;

    return 0;
}
