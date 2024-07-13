#include<iostream>
using namespace std;
class Large
{
    friend Large check(Large);
    

    public:
    int j,s;
    void setdata()
    {
        cout<<"Enter Value of j: ";
        cin>>j;

        cout<<"Enter Value of s: ";
        cin>>s;
    }
};

Large check(Large x,Large y)
    {
        if (x.j<y.s)
        {
            cout<<"The large number is: j"<<endl;
        }
        else
        {
           cout<<"The large number is: s"<<endl;
        }
        
    }

int main()
{
    Large l;
    l.setdata();  
    check(l);    
}