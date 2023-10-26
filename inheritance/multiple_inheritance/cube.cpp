#include<iostream>
using namespace std;
class number
{
    public:
    int n;
};
class cube
{
    public:
    int i;
};
class square : public number,public cube
{
    public:
    void root()
    {
    cout<<"Enter value of n: ";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        cout<<"Cube number is: "<<i*i*i<<endl;
    }
    }
};

int main()
{
    square sq;
    sq.root();
}