#include<iostream>
using namespace std;
class p1
{
    public:
    int n;
    void fac()
    {
    cout<<"Enter value of n: ";
    cin>>n;
    }
};

class Derived1 : public p1
{
    public:
    int i,fact=1;
    void loop()
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    cout<<"FACTORIAL NUMBER: "<<fact<<endl;
    }
};

class Derived2 : public p1
{
    public:
    int t;
    void table()
    {
        cout<<"enter value of t: ";
        cin>>t;
        for (int i = 1; i <= 10 ; ++i)
        {
            cout<< t << "*" << i << "=" << t*i<<endl;
        }
        
    }
};

int main()
{
    Derived1 d1;
    d1.fac();
    d1.loop();

    Derived2 d2;
    d2.table();
}
