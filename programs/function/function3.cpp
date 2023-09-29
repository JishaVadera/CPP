#include<iostream>
using namespace std;
int dn()
  {
    int a;
      cout<<"enter a:";
      cin>>a;
      if(a%15==0)
      {
         return 1;
      }
      else
      {
          return 0;
      }
   }
 int main()
  {
     int a;
     a=dn();
     cout<<"ans:"<<a;
   }