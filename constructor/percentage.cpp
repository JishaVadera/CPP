#include <iostream>
using namespace std;
class student
{
    private: int s,e,ph,t,p;

public:


    student()
    {
        int sci,eng,phy;
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
    student s1;
    s1.gettotal();
    s1.getper();
    return 0;
}