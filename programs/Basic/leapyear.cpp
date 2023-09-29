#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter value: ";
    cin>>a;
    if(a%4==0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
    return 0;
}