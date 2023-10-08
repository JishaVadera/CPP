#include <iostream>
using namespace std;
class solid
{
    private:
    int l,h,b;
    float r;

    public:
    solid(int x, int y, int z, double u)
    {
        l=x;
        h=y;
        b=z;
        r=u;
    }

    void area(int l,int h)
    {
        cout<<"area of rect "<<l*h<<endl;
    }
    void area(double r)
    {
        cout<<"The area of circle= "<<3.14*r*r<<endl;
    }
    void area(int b)
    {
        cout<<"The circumference of Triangle= "<<3*b;
    }
};
int main()
{
    int a,b,c;
    double d;
    cin>>a>>b>>c>>d;
    solid s1(a,b,c,d);

    s1.area(10,10);
    s1.area(1.1);
    s1.area(10);
    return 0;
}