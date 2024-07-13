#include<iostream>
using namespace std;

int main()
{
    int price1=150,price2=130,price3=120,choice,quantity,q1,q2,q3,total,number;
    string name;
    cout<<"Food Resturant\n";
    cout<<"----------------------------------------------\n";
    cout<<"Enter customer name= ";
    cin>>name;
    cout<<"Enter phone_number= ";
    cin>>number;
    if(number < 1000000000 || number > 9999999999)
            {
                cout<<"invalid";
            }
            else 
            {
                cout<<"valid number"<<endl;
            }
    cout<<"----------------------------------------------\n";
    while(true)
    {
        cout << "1. Pizza "<<"\t"<<"150" << endl;
        cout << "2. Burger" <<"\t"<<"130"<< endl;
        cout << "3. Vadapav" <<"\t"<<"120"<< endl;
        cout << "To select 2 options press number 4\n";
        cout << "To select 2 options press number 5\n";
        cout << "To select all options press number 7\n";
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            cout<<"Enter Quantity= ";
            cin>>quantity;
            total=price1*quantity;
            cout<<"total amt: "<<total<<endl;
            break;
        
        case 2:
         cout<<"Enter Quantity= ";
            cin>>quantity;
            total=price2*quantity;
            cout<<"total amt: "<<total<<endl;
            break;

        case 3:
            cout<<"Enter Quantity= ";
            cin>>quantity;
            total=price3*quantity;
            cout<<"total amt: "<<total<<endl;
            break;
        
        case 4:
            cout<<"Enter pizza Quantity= ";
            cin>>q1;
            cout<<"Enter  burger Quantity= ";
            cin>>q2;
            total=price1*q1+price2*q2;
            cout<<"Total amount= "<<total<<endl;
        break;

        case 5:
            cout<<"Enter  burger Quantity= ";
            cin>>q2;
            cout<<"Enter vadapav Quantity= ";
            cin>>q3;
            total=price2*q2+price3*q3;
            cout<<"Total amount= "<<total<<endl;
        break;
        
         case 6:
            cout<<"Enter pizza Quantity= ";
            cin>>q1;
            cout<<"Enter  vadapav Quantity= ";
            cin>>q3;
            total=price1*q1+price3*q3;
            cout<<"Total amount= "<<total<<endl;
        break;

        case 7:
            cout<<"Enter pizza Quantity= ";
            cin>>q1;
            cout<<"Enter  burger Quantity= ";
            cin>>q2;
            cout<<"Enter vadapav Quantity= ";
            cin>>q3;
            total=price1*q1+price2*q2+price3*q3;
            cout<<"Total amount= "<<total<<endl;
        break;

        case 8:
        cout << "Thank you, Visit Again. Goodbye!" << endl;
        break;

        default:
        cout << "Invalid choice. Please try again." << endl;  
            break;
        }
    }
}