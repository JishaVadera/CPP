//1,4,3,16,5.......n
#include<iostream>
using namespace std;
class over
{
    private:
    int num;
    public:
    int num =n;
    over()
    {
        cout << "Enter value of n: ";
        cin >> n;
    }

    over(int i)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout <<" \n "<<i*i;
            }
            else
            {
                cout << "  \n " << i;
            }
            
        }
        
    }
};

int main()
{
    int  i;
    over o1;
    over o2();
}