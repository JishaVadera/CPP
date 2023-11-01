#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a , b;
    int result;

    cout<<"Enter value of a: ";
    cin>>a;

    cout<<"Enter Value of b: ";
    cin>>b;

    result = pow(a,b);
    cout<<"The power of: "<<result<<endl;
}