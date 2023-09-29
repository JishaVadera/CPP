#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value: ";
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<"A is larger";
    }
    else if (b>c)
    {
        cout<<"B is larger";
    }
    else
    {
        cout<<"C is larger";
    }
    return 0;
}