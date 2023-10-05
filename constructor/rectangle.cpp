#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length,height;

    public:
        int l = length, h = height;

       rectangle()
       {
            cout<<"enter value of length=";
            cin>>l;
            cout<<"enter value of height=";
            cin>>h;
       }
       void rect()
       {
            cout<<"The area is="<< l*h<<"\n";
            cout<<"The circumference is="<<2*(l+h)<<" ";
       }
};
int main()
{
    rectangle r1;
    r1.rect();
    return 0;
}