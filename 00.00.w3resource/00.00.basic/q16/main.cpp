#include <iostream>

using namespace std;

int main()
{
    cout << "16. Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes." << endl;
    int a;
    cout << "Input the amount: ";
    cin >> a;

    //int n100=a/100;

    cout << a/100<< " Note(s) of 100.00" << endl;
    cout << (a-((a/100)*100))/50 << " Note(s) of 50.00" << endl;
//    cout << (a/100)*100 << endl;
  //  cout << ((a-((a/100)*100))/50)*50 << endl;
    //cout << ((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20 << endl;
    cout << (a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20 << " Note(s) of 20.00" << endl;
    cout << (a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10 << " Note(s) of 10.00" << endl;
    cout << (a - (((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)))/5 << " Note(s) of 5.00" << endl;
    cout << (a-(((a/100)*100)+(((a-((a/100)*100))/50)*50)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)+(((a - (((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)))/5)*5)))/2 << " Note(s) of 2.00" << endl;
    cout << a-(((a/100)*100)+(((a-((a/100)*100))/50)*50)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)+(((a - (((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)))/5)*5)+(((a-(((a/100)*100)+(((a-((a/100)*100))/50)*50)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)+(((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)+(((a - (((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50) + (((a-(((a/100)*100) + (((a-((a/100)*100))/50)*50)))/20)*20)))/10)*10)))/5)*5)))/2)*2)) << " Note(s) of 1.00" << endl;
    return 0;
}