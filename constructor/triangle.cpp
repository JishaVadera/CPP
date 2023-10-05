#include<iostream>
using namespace std;
class triangle
{
    int base,height;
    public:
        int b= base, h = height;
       
       triangle()
       {
            cout<<"enter value of base=";
            cin>>b;
            cout<<"enter value of height=";
            cin>>h;
            cout << "area is :" << 0.5*b*h << "\n";
            cout << "circumfernce is " <<3*b << "\n";
       }
};
int main()
{
    triangle t1;
    return 0;
}