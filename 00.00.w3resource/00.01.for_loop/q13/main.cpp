#include <iostream>

using namespace std;

int main()
{
    cout << "13. Write a program in C to make such a pattern like a pyramid with numbers increased by 1. " << endl;
    cout << "Input number of rows :";
    int rows,p=10,spec,k;
    cin >> rows;
    spec=(rows*rows);

        for(int i=1;i<=rows;i++)
        {
                    for(k=spec;k>=1;k--)
                    {
                        printf(" ");
                    };
                    spec--;
                    for(int j=1;j<=i;j++)
                    {
                        cout <<""<< p++ << " ";
                    };
        cout << endl;
        };



    return 0;
}
