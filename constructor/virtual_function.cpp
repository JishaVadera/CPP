#include<iostream>
using namespace std;
class Shape
{
    public:
    int l,h;
    virtual void print()
    {
        cout<<"prints the area of different shapes";

    }
};

class rect : public Shape
{
    public:
    void print() override
    {
        cout<<"Enter value of Length: ";
        cin>>l;
        cout<<"Enter Value of Height: ";
        cin>>h;
        cout<<"The area of Rect: "<<l*h<<endl;
    }
};

class Square : public Shape
{
    public:
    void print() override
    {
        cout<<"Enter value of Length: ";
        cin>>l;
        cout<<"The area of Square: "<<l*l<<endl;
    }
};

int main()
{
    Shape* s;
    rect r;
    Square sq;

    s = &r;

    s->print();

    s = &sq;
    s->print();
}
