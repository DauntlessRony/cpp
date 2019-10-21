#include <iostream>

using namespace std;

int main()
{
    cout << "19. Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print \"Correct values\", otherwise print \"Wrong values\"." << endl;
    int p,q,r,s;
    cout << "\nInput the first integer: ";
    cin >> p;
    cout << "\nInput the second integer: ";
    cin >> q;
    cout << "\nInput the third integer: ";
    cin >> r;
    cout << "\nInput the fourth integer: ";
    cin >> s;

    if((q > r) && (s > p) && ((r+s) > (p+q)) && (r > 0) && (s > 0) && (p%2 == 0))
    {
        printf("\nCorrect values\n");
    }
    else {
        printf("\nWrong values\n");
    };

    return 0;
}
