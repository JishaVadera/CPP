#include<iostream>
using namespace std;
class Base
{
    protected:
    int a;

    public:
    void setA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};

class Derived1 : public Base
{
    protected:
    int b;

    public:
    void setB()
    {
        cout<<"Enter b: ";
        cin>>b;
    }
};

class Derived2
{
    protected:
    int c;

    public:
    void setC()
    {
        cout<<"Enter c: ";
        cin>>c;
    }
};

class Test : public Derived1, public Derived2
{
    public:
    void product()
    {
        cout<<"Product of a, b and c: "<<a*b*c<<endl;
    }
};

int  main()
{
    Test t1;
    t1.setA();
    t1.setB();
    t1.setC();
    t1.product();
}