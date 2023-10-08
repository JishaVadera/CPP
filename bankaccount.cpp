#include<iostream>
using namespace std;
class bankaccount
{
    private:
    int amt,dep,wit,total,withd,balance;

    public:
    int a=amt,d=dep,w=wit,t=total,wd=withd,b=balance;
    bankaccount()
    {
        cout<<"Enter your amount=  ";
        cin>>a;
        cout<<"Enter your deposit amount= ";
        cin>>d;
    } 
    void deposit()
    {
        t=d+a;
        cout<<"Total amount in your account= "<<t<<endl;
    }
    void withdraw()
    {
        cout<<"Enter your withdraw_amount= ";
        cin>>wd;
        if (a<wd)
        {
            cout<<"you have not sufficient amount";
        }
        else if (a>=w)
        {
            b=t-wd;
            cout<<"Present amount in your account= "<<b<<endl;
        }
    }
};
int main()
{
    bankaccount ba;
    ba.deposit();
    ba.withdraw();
    return 0;
}