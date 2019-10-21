#include <iostream>
#include <cstdlib>


using namespace std;



int main()
{
    cout << "1. Write a program in C to store elements in an array and print it." << endl;
    int r,c;
    cout<<"enter the row number:"; cin>>r;
    cout<<"\nenter the column number:"; cin>>c;
    int **a;
    a=(int**) malloc(r*sizeof(int));

    for(int i=0;i<r;i++){
            a[i]=(int*) malloc(c*sizeof(int));
        };



    //a[3][3]=5;
    for(int p=0;p<r;p++){
        for(int q=0;q<c;q++){
        cout<<"enter the value of a["<<p<<"]["<<q<<"]:";
        cin>>a[p][q];
        };
    };


    for(int x=0;x<r;x++){
        for(int y=0;y<c;y++){
        cout<<a[x][y]<<" ";
        };
        cout<<endl;
    };



    return 0;
}
