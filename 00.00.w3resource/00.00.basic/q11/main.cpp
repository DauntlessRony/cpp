#include <iostream>

using namespace std;

int main()
{
    cout << "11. Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items." << endl;
    float Weight_Item1,Weight_Item2;
    float item1,item2;

    cout << "\nEnter the Weight of item 1: ";
    cin >> Weight_Item1;
    cout << "\nEnter the Weight of item 2: ";
    cin >> Weight_Item2;

    cout << "\nNumber of item about Weight 1: ";
    cin >> item1;
    cout << "\nNumber of item about Weight 2: ";
    cin >> item1;

    //float r = ((((Weight_Item1)*(item1))+((Weight_Item2)*(item2)))/(item1+item2));
    float r = (((Weight_Item1*item1)+(Weight_Item2*item2))/(item1+item2));
    //float r = ((((15)*(5))+((25)*(4)))/(5+4));
    cout << "\nAverage Value = "<< (float)r << endl;

    return 0;
}
