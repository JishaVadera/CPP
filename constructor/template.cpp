#include<iostream>
using namespace std;
template <class x>
x sum(x a,x b)
{
    return a+b;
}

int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<sum(a,b);
}
/*
    --> write a program to return greatest value aming passed arguements in a function using template.
    --> write a program that returns sum of an elements of an array using template.(it must work with different datatypes of an array)

*/