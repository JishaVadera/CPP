// unary operator overloading pre and post decrement
#include<iostream>
using namespace std;
class Box
{
    int l, w, h;

    public:
    void setData(int a,int b,int c)
    {
        l = a;
        w = b;
        h = c;
    }

    int getVolume()
    {
        return l*w*h;
    }
    Box operator--(int)
    {
        Box t;
        t.l = l--;
        t.w = w--;
        t.h = h--;
        return t;
    }

     Box operator--()
    {
        Box j;
        j.l = --l;
        j.w = --w;
        j.h = --h;
        return j;
    }
    
};

int main()
{
    Box b1;
    b1.setData(2,2,2);
    cout << "Volume of B1 is: " << b1.getVolume() << endl;

    b1--;
    cout << "Volume of AFter B1 is: " << b1.getVolume() << endl;

    --b1;
    cout << "Volume of (--B1) is: " << b1.getVolume() << endl;
}