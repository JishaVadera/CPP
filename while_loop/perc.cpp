#include <iostream>
using namespace std;
class student
{
private:
    int sci, eng, phy, total, per;

public:
    void setsub(int s, int e, int p)
    {
        sci = s;
        eng = e;
        phy = p;
    }

    void getsub()
    {
        cout << sci << endl;
        cout << eng << endl;
        cout << phy << endl;
    }
    int gettotal(int sci, int eng, int phy)
    {
        return total = sci + eng + phy;
    }
    int getper(int total)
    {
        return per = total / 3;
    }
};


int main()
{
    int sci, eng, phy, total, per;

    cout << "sci mark :";
    cin >> sci;
    cout << "English marks :";
    cin >> eng;
    cout << "phy mark :";
    cin >> phy;

    student s1;

    s1.setsub(sci, eng, phy);
    s1.getsub();
    total = s1.gettotal(sci, eng, phy);
    per = s1.getper(total);
    cout << "Total =" << total << endl;
    cout << "Percentage=" << per << endl;
    return 0;
}