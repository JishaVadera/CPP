#include<iostream>
using namespace std;
class base1
{
    protected:
    int n,i,a=0,b=1,c;

    public:
    void p1()
    {
        cout<<"Enter value of n: ";
        cin>>n;
    }
};

class base2 : public base1
{
    public:
    void p2()
    {
    c = a+b;
    cout<<c;
    }
};

class base3 : public base2
{
    public:
    void p3()
    {
        
    }
};