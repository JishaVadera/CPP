#include<iostream>
using namespace std;
int ln()
  {
    int year;
      cout<<"enter year:";
      cin>>year;
      if(year%4==0)
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
     int year;
     year=ln();
     cout<<"ans:"<<year;
   }