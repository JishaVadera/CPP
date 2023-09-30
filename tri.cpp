#include<iostream>
using namespace std;
class triangle
{
    private:
        int base,height;

    public:
        int b= base, h = height;
       
        void area(int b,int h)
        {
            cout<< 0.5*b*h;
        }
        void circ(int b,int h)
        {
        cout<<3*b;
        }
};
int main()
{
    int a,b;
    cin>>a>>b;

    triangle tri;
    tri.area(a,b);
    tri.circ(a,b);
    return 0;
}