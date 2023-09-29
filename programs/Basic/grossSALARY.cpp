#include <iostream>
using namespace std;
int main()
{
    float basic,gross,hra;
    cout<<"enter value: ";
    cin>>basic;
    if(basic<=5000)
    {
        hra=basic*28/100;
    }
    else if (basic<=10000)
    {
        hra=basic*42/100;
    }
    else if (basic<=15000)
    {
        hra=basic*55/100;
    }
    else if (basic>15000)
    {
        hra=basic*70/100;
    }
    gross=basic+hra;
    cout<<gross;
    return 0;
}