#include<iostream>
using namespace std;
int perfact()
{
 int num,sum=0,i;
 cout<<"enter value:";
 cin>>num;
 for(i=1; i<num; i++)
  {
     if(num%1==0)
       {
         cout<<"\n"<<i;
         sum=sum+i;
       }
  }
  if(sum=num)
   {
          cout<<"\n perfact num"<<sum;
   }
  else
   {
           cout<<"\n non perfact num"<<sum;
   }
  return sum;
}
   int main()
     {
        perfact();
     }