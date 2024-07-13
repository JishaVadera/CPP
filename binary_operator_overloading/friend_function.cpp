#include<iostream>
using namespace std;
class Rect
{
    friend Rect add(Rect, Rect, Rect, Rect);
    int l,w;

    public:
    void setdata(int a,int b)
    {
        l=a,w=b;
    }
    int getarea()
    {
        return l*w;
    }
};

Rect add(Rect m,Rect n, Rect x,Rect y)
{
    Rect t;
    t.l=m.l+n.l+x.l-y.l;
    t.w=m.w+n.w+x.w-y.w;
    return t;
}

int main()
{
    Rect a,b,c,d,e;
    a.setdata(4,5);
    cout<<"Area of Rectangle A is: "<<a.getarea()<<endl;  

    b.setdata(7,8);
    cout<<"Area of Rectangle B is: "<<b.getarea()<<endl;  

    d.setdata(2,3);
    cout<<"Area of Rectangle D is: "<<d.getarea()<<endl;  

    e.setdata(1,2);
    cout<<"Area of Rectangle E is: "<<e.getarea()<<endl;  

    c = add(a,b,d,e);
    cout<<"Area of Rectangle C is: "<<c.getarea()<<endl;   
}