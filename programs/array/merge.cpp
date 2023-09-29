#include<iostream>
using namespace std;
 int main()
   {
      char a[30], b[30];
      int i,j;
         cout<<"enter name:";
         cin>>a;
         cout<<"enter name:";
         cin>>b;
            for(i=0; a[i]!='\0'; i++)
              {
              }
            for(j=0; b[j]!='\0'; j++)
              {
                 a[i]=b[j];
                 i++;
              }
                a[i]='\0';
                cout<<"full name is:"<<a;
    }