#include<iostream>
using namespace std;
class function
{
    public:
    int ie, ab= 1 , num =1;
    function(int i,int a,int n)
    {
        i = ie;
        a = ab;
        n = num;
    }
    void area(int n)
    {
        cout << "Enter value: ";
        cin >> n;
    }
    void area(int i,int a,int n)
    {
        for ( i = 0; i <= n; i++)
        {
            cout<<i*a;
            a= a*2;
        }
        
    }
};

int main()
{
    int i,a,n;
    function f1;
    fun.area(n);
    fun.area(i,a,n);
}