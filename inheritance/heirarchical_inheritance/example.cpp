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
    void addition()
    {
        cout<<"addition of a and b: "<<a+b<<endl;
    }
};

class Derived2 : public Base
{
    protected:
    int c;

    public:
    void setC()
    {
        cout<<"Enter c: ";
        cin>>c;
    }
    void Product()
    {
        cout<<"Product of a and c: "<<a*c<<endl;
    }
};

int main()
{
    Derived1 d1;
    d1.setA();
    d1.setB();
    d1.addition();

    Derived2 d2;
    d2.setA();
    d2.setC();
    d2.Product();
}
//factorial and table