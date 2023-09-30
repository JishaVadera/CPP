#include<iostream>
using namespace std;
class circle
{
    private:
        int radius;

    public:
        int r = radius;
       
        void area(int r)
        {
            cout<<3.14*r*r;
        }
        void circ(int r)
        {
        cout<<2*3.14*r;
        }
};
int main()
{
    int r1;
    cin>>r1;

    circle cir;
    cir.area(r1);
    cir.circ(r1);
    return 0;
}