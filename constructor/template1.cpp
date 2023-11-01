#include<iostream>
using namespace std;
template <class x,class y>
x sum(x a,y b,x c)
{
    (a>b)?
    (a > c ? cout<<"A is big: "<<a : cout<<"C is big: "<<c):
    (b > c ? cout<<"B is big: "<<b : cout<<"C is big: "<<c);
}

int main()
{
    int a,c;
    double b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    sum(a,b,c);
}