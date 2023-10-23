#include<iostream>
using namespace std;
class base
{
    protected:
    int a;

    public:
    void setdataA()
    {
        cout<<"Enter a: ";
        cin>>a;
    }
};

class Derived : public base
{
    int b;

    public:
    void setdataB()
    {
        cout<<"Enter b: ";
        cin>>b;
    }

    void getter()
    {
        cout<<"Addition of a and b is: "<<a+b<<endl;
    }
};

int main()
{
    Derived d;
    d.setdataA();
    d.setdataB();
    d.getter();
}