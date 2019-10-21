#include <iostream>

using namespace std;

int main()
{
    cout << "14. Write a program in C to make such a pattern like a pyramid with an asterisk." << endl;
    cout << "Input number of rows :";
    int rows,spec,k;
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
                        cout <<""<< "*" << " ";
                    };
        cout << endl;
        };



    return 0;
}
