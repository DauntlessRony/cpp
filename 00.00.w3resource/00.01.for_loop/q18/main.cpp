#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- .........]." << endl;
    cout <<"cos x   =   1 – x^2/2! + x^4/4! + .  .  .  +(-1)^n x^2n/(2n)!    n  =  0, 1, 2, .."<< endl;

    cout <<"Input the Value of x :";
    float x; cin >> x;
    cout <<"Input the number of terms : ";
    float n; cin >> n;
    float numerator=1;
    float denominator=1;
    float sum=1;


    for(int i=0;i<=n;i++){
        numerator=((pow((-1),n))*(pow(x,(2*n))));
        cout <<"\nnumerator:"<<numerator;
            int m=1;
            int nn=(2*n);
            //cout << "nn: "<<nn<<endl;
            for(int j=1;j<=nn;j++){
                m*=j;

               // cout << "m: "<<m<<endl;
            };
        denominator=m;
        cout <<"\ndenominator:"<<denominator;
        sum+=(numerator/denominator);

    };
    cout <<"\nthe sum = "<<sum;
    cout <<"\nNumber of terms = "<<n;
    cout <<"\nvalue of x = "<<x;
    cout << endl;

    return 0;
}
