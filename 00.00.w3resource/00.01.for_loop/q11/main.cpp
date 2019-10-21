#include <iostream>

using namespace std;

int main()
{
    cout << "11. Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row." << endl;
    cout << "In right angle triangle ABC, AB=AC, WHERE BC=HYPOTENUSE" << endl;
    cout << "In right angle triangle ABC, AB=AC:";
    int l=0;
    cin >> l;

    for(int i=1;i<=l;i++){
                for(int j=1;j<=i;j++){
                    cout <<i<<" ";
                };
    cout << endl;
    };

    return 0;
}
