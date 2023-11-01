#include<iostream>
using namespace std;

class Bankac
{
    public:
        int amt;
        int d;
        int w;
        static int total;

    Bankac(int b)
    {
        amt = b;
        total+=amt;
        cout << "Amount is: "<<amt<<endl;
    }

    void Withdraw(int a)
    {
        w = a;
        amt -= w;
        total -= w;
        cout << "Withdraw amt: "<<w<<endl;
    }

    void Deposit(int c)
    {
        d = c;
        amt += d;
        total += d;
        cout << "Deposited amt: "<<d<<endl;
    }

    static void total_balance()
    {
        cout << "Total Balance is: "<<total<<endl;
    }
};

int Bankac :: total = 0;

int main()
{
    Bankac b1(1000);
    Bankac b2(1500);

    b1.Deposit(1200);
    b2.Withdraw(500);

    Bankac :: total_balance();
}