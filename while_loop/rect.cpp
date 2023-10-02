#include<iostream>
using namespace std;
class rectangle
{
    private:
        int length,height;

    public:
        int l = length, h = height;
       
        void area(int l,int h)
        {
            cout<<"The area is="<< l*h<<"\n";
        }
        void circ(int l,int h)
        {
        cout<<"The circumference is="<<2*(l+h)<<" ";
        }
};
int main()
{
    int a,b;
    cin>>a>>b;

    rectangle re;
    re.area(a,b);
    re.circ(a,b);
    return 0;
}