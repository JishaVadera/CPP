#include<iostream>
using namespace std;

class store
{
    private:
        string name;
        int phone_number,number,quantity;
    public:
        string na=name,item_name;
        int no=phone_number,n,num=number,q=quantity,item_price;
    
    store()
    {
        cout<<"\t\tRestuarnt\n";
        cout<<"---------------------------------------\n";
        cout<<"item_no\t\titem_name\titem_price\n";
        cout<<"--------------------------------------\n";
        cout<<"1\t\tpizza\t\t150rs\n";
        cout<<"2\t\tdhosa\t\t130rs\n";
        cout<<"3\t\tmaggie\t\t50rs\n";
        cout<<"Enter coustomer name= ";
        cin>>na;
        cout<<"Enter phone_no= ";
        cin>>no;

        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter order= ";
            cin>>number;
            
            if(number==1)
            {
                cout<<"item_name = pizza\n";
                item_name="pizza";
                cout<<"item_price = 150\n";
                item_price=150;
                cout<<"Enter Quantity= ";
                cin>>q;
                cout<<"Total amount= "<<item_price*q<<endl;
                cout<<"--------------------------------------\n";
            }
            else if(number==2)
            {
            cout<<"item_name = dhosa\n";
            item_name="dhosa";
            cout<<"item_price = 130\n";
            item_price=130;
            cout<<"Enter Quantity= ";
            cin>>q;
            cout<<"Total amount= "<<item_price*q<<endl;
            cout<<"--------------------------------------\n";
            }
            else if(number==3)
            {
            cout<<"item_name = maggie\n";
            item_name="maggie";
            cout<<"item_price = 50\n";
            item_price = 50;
            cout<<"Enter Quantity= ";
            cin>>q;
            cout<<"Total amount= "<<item_price*q<<endl;
            cout<<"--------------------------------------\n";
            }   
        }    
    }

};


int main()
    {
        store st;
       // st.print();
    }