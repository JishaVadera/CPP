//1,2,4,8,16................
#include <iostream>
using namespace std;
class destructor
{
    public:
    int i,n,sum=1;
    destructor()
    {
        cout << "Enter value of n: ";
        cin>>n;
    }

    ~destructor()
    {
        for (int i = 1; i <= n; i++)
        {
            cout <<"  "<<sum;
            sum = sum * 2;
        }
        
    }
};

int main()
{
    destructor d1;

}