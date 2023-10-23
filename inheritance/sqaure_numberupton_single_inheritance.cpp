#include<iostream>
using namespace std;
class number
{
    public:
    int n;
    void value()
    {
        cout<<"Enter value of n: ";
        cin>>n;
    }   
};

class square : public number
{
    public:
    void loop()
    {
    for (int i = 1; i <= n; i++)
    {
        cout<<"Square root: "<<i*i<<endl;
    }
    }
};

int main()
{
    square sq;
    sq.value();
    sq.loop();
}