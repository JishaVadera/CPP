#include<iostream>
using namespace std;
class Box
{
    int l,w,h;

    public:
    void setdata(int a,int b,int c)
    {
        l = a;
        w = b;
        h = c;
    }

    int getVolume()
    {
        return l*w*h;
    }

    friend Box operator+(Box m,Box n)
    {
        Box t;
        t.l = m.l + n.l;
        t.w = m.w + n.w;
        t.h = m.h + n.h;
        return t;
    }

    friend Box operator++(Box o)
    {
        Box j;
        j.l = ++o.l;
        j.w = ++o.w;
        j.h = ++o.h;
        return j;
    }
};

int main()
{
    Box b1,b2,b3,b4;
    b1.setdata(2,2,2);
    cout<< "Volume of Box B1 is: "<< b1.getVolume() << endl;
    b2.setdata(3,3,3);
    cout<< "Volume of Box B2 is: "<< b2.getVolume() << endl;

    b3 =  b1 + b2;
    cout<< "Volume of Box B3 is: "<< b3.getVolume() << endl;

    b4=++b3;
    cout<< "Volume of after increment Box B3 is: "<< b4.getVolume() << endl;
}