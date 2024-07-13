#include<iostrea>
using namespace std;
class BankAC
{
    private:
    int amt,dep,wit,withd,balance;
    static int total;

    public:
    int a=amt,d=dep,w=wit,t=total,wd=withd,b=balance;

    BankAC()
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