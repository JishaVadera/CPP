#include<iostream>
using namespace std;

class marks
{
    

    public:
    int eng,sci,total,per;

    void setData(int,int);

    void getTotal()
    {
        total = eng + sci;
        cout<<"Total Subject marks: "<<total<<endl;
    }

    void getPercentage()
    {
        per= total * 100 / 200;
        cout<<"Percentage: "<<per<<endl;
    }
};

void marks ::setData(int e,int s)
{
    eng = e;
    sci = s;
}

int main()
{
    marks m[5];
    int a,b;
    for (int i = 0; i < 2; i++)
    {
        cout<< "Enter a and b: ";
        cin>>a>>b;
        m[i].setData(a,b);
    }
    
    for (int i = 0; i < 2; i++)
    {
        m[i].getTotal();
        m[i].getPercentage();
    }
    
}