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
            cout<< l*h;
        }
        void circ(int l,int h)
        {
        cout<<2*(l+h);
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