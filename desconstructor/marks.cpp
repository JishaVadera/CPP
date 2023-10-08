#include <iostream>
using namespace std;
class student
{
    private: int s,e,ph,t,p;
            char n[30];

public:

    student()
    {
        int sci,eng,phy;
        char n[20];
        cout << "Enter name :";
        cin >> n;
        cout << "sci mark :";
        cin >> sci;
        cout << "English marks :";
        cin >> eng;
        cout << "phy mark :";
        cin >> phy;
        s=sci;
        e=eng;
        ph=phy;
        cout << "Marks of sci= "<<sci << endl;
        cout << "Marks of eng= "<<eng << endl;
        cout << "Marks of phy= "<<phy << endl;
        t=s+e+ph;
        p=t/3;

    }
    ~student()
    {
        cout<<"name"<<n<<"object is destructor"<<endl;
    }
    int gettotal()
    {
        cout << "Total =" << t << endl;
        
    }
    int getper()
    {
         cout << "Percentage=" << p << endl;
        
    }
};
int main()
{
    student s1,s2,s3,s4;
    s1.gettotal();
    s1.getper();
    s2.gettotal();
    s2.getper();
    return 0;
}