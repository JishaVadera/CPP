#include <iostream>

using namespace std;

void deposit (float &balance, float amount)
{
    balance += amount ;
    cout << "Amount deposited sucessfully ." << endl;

}

void withdraw(float &balance, float amount)
{
    if (balance >=amount )
    {
        balance -=amount;
        cout << "Amount withdrawn sucessfully ." << endl;
    }
    else 
    {
        cout <<"Insufficient balance."<< endl;
    }
}
void checkbalance(float balance)
{
    cout << "Your account balance is $ "<< balance << endl;
}
int main ()
{
    float balance =0;
    int choice;
    float amount;

while (true)
{
      cout << "1. Deposit" << endl;
      cout << "2. Withdraw" << endl;
      cout << "3. Check Balance" << endl;
      cout << "4. Exit" << endl;
      cout << "Enter your choice: ";
      cin >> choice;
      
 switch (choice)
        {
  
case 1:
    
    cout << "Enter the amount to deposit: ";    
    cin >> amount;
  deposit (balance, amount);
    
break;
  
case 2:
    
    cout << "Enter the amount to withdraw: ";
  cin >> amount;
    withdraw (balance, amount);
    
break;
  
case 3:
  checkbalance (balance);
    
break;
  
case 4:
  cout << "Thank you for using our banking system. Goodbye!" << endl;
    
return 0;
  
default:    
cout << "Invalid choice. Please try again." << endl;  
}

}
 
return 0;
}