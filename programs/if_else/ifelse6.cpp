#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year:";
    cin>>year;
    if(year%4==0)
    {
        cout<<"its leap year";
    }
    else
    {
        cout<<"its not leap year";
    }
}