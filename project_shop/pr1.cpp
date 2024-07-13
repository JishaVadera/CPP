#include<iostream>
using namespace std;
class shop
{
    private:
        int phone_no,choice;
        string customer;

    public:
        int no=phone_no,ch=choice,price1,price2,price3,number,q1,q2,q3,total1,total2,total3;
        string c=customer,item1,item2,item3;
        shop()
        { 
            cout<<"--------------------------------------\n";
            cout<<"General Store\n";
            cout<<"--------------------------------------\n";
            /*cout<<"1\tmoong\t\t50\n";
            cout<<"2\tpackets\t\t5rs\n";
            cout<<"3\tbesan\t\t50rs\n";
            cout<<"--------------------------------------\n";*/
            cout<<"enter 1 item= ";
            cin>>item1;
            cout<<"enter 2 item= ";
            cin>>item2;
            cout<<"enter 3 item= ";
            cin>>item3;
            cout<<"enter 1 price= ";
            cin>>price1;
            cout<<"enter 2 price= ";
            cin>>price2;
            cout<<"enter 3 price= ";
            cin>>price3;
            cout<<"--------------------------------------\n";
            cout<<"item_name\titem_price\n";   
            cout<<"--------------------------------------\n";
            cout<<item1<<"\t\t"<<price1<<endl;
            cout<<item2<<"\t\t"<<price2<<endl;
            cout<<item3<<"\t\t"<<price3<<endl;
            cout<<"--------------------------------------\n";
            cout<<"Enter your name=  ";
            cin>>c;
            cout<<"Enter your phone_no=  ";
            cin>>no;
        }
        void condition()
        {

            if(no < 1000000000 || no > 9999999999)
            {
                cout<<"invalid";
            }
            else 
            {
                cout<<"valid number"<<endl;
            }
        }
    void print()
    {
       for (int i = 0; i < 3; i++)
        {
            cout<<"Enter order= ";
            cin>>number;
            
            if(number==1)
            {
                cout<<"Enter Quantity= ";
                cin>>q1;
                total1=price1*q1;
                cout<<"Total amount= "<<total1<<endl;
                cout<<"--------------------------------------\n";
            }
            else if(number==2)
            {
            cout<<"Enter Quantity= ";
            cin>>q2;
            total2=price2*q2;
            cout<<"Total amount= "<<total2<<endl;
            cout<<"--------------------------------------\n";
            }
            else if(number==3)
            {
            cout<<"Enter Quantity= ";
            cin>>q3;
            total3=price3*q3;
            cout<<"Total amount= "<<total3<<endl;
            cout<<"--------------------------------------\n";
            }    
        }    
    } 
    void bill()
    {
      cout<<"item_name\t\titem_price\t\tquantity\t\ttotal\n";
      cout<<item1<<"\t"<<price1<<"\t"<<q1<<"\t"<<total1<<endl;
      cout<<item2<<"\t"<<price2<<"\t"<<q2<<"\t"<<total2<<endl;
      cout<<item3<<"\t"<<price3<<"\t"<<q3<<"\t"<<total3<<endl;
    }
};
int main()
{
    shop s1;
    s1.condition();
    s1.print();
    s1.bill();
}