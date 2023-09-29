#include<iostream>
using namespace std;
int sn()
  {
    int a,b;
      cout<<"enter a:";
      cin>>a;
       cout<<"enter b:";
      cin>>b;
      if(a<b)
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
     a=sn();
     cout<<"ans:"<<a;
   }