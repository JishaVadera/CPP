#include<iostream>
using namespace std;

class test
{
    int m,s;

    public:
    void setData(int,int);

    void getTotal()
    {
        cout<<"Total is: "<<m+s << endl;
    }

    void sub()
    {
        cout<< "Total is: "<< m-s<<endl;
    }
};

void test ::setData(int a,int b)
{
    m = a, s =b;
}

int main()
{
    test t[5];
    int i,a,b;

    for ( i = 0; i < 3; i++)
    {
        cout<< "Enter a and b: ";
        cin>>a>>b;
        t[i].setData(a,b);
    }

    cout<<endl<<endl;
    
    for ( i = 0; i < 3; i++)
    {
        if (i==2)
        {
            t[i].getTotal();
        }
        else
        {
            t[i].sub();
        }
    }    
}