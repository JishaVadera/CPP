#include<iostream>
using namespace std;
class circle
{
        int radius;
    public:
        int r = radius;

        circle()
        {
            cout<<"enter value of radius=";
            cin>>r;
            cout<<"The area of circle ="<<3.14*r*r<<endl;
            cout<<"The circumference of circle ="<<2*3.14*r<<endl;
        }
};
int main()
{
    circle cir;
    return 0;
}