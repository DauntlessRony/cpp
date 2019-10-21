#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "12. Write a program in C to make such a pattern like right angle triangle with number increased by 1." << endl;
    cout << "In right angle triangle ABC, AB=AC, WHERE BC=HYPOTENUSE" << endl;
    cout << "In right angle triangle ABC, AB=AC:";
    int l=0,k=1;
    cin >> l;

    for(int i=1;i<=l;i++){
                for(int j=1;j<=i;j++){
                       // printf("%d",j+1);
                    //printf("%d",k++);
                    cout << k++<<" ";
                };
    cout << endl;
    };

    return 0;
}
