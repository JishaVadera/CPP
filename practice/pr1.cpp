// print 1,4,9,16..........n
#include<iostream>
using namespace std;
class p1
{
    private:
    int ief, num, ab=0;

    public:
    int  i = ief;
    int  n = num ;
    int  a = ab;

    p1()
    {
        cout << "Enter value: ";
        cin >> n;
    }

    void print()
    {
        for (int i = 1; i < n; i++)
        {
            a = i * i;
            cout<<"   "<<a;
        }
        
    }

};

int main()
{
    p1 p;
    p.print();
    return 0;
}